/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "bank.h"
#include <stdio.h>
#include <stdlib.h>
#include <rpc/pmap_clnt.h>
#include <string.h>
#include <memory.h>
#include <sys/socket.h>
#include <netinet/in.h>

#ifndef SIG_PF
#define SIG_PF void(*)(int)
#endif

static void
create_prog_1(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		trans create_1_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case CREATE:
		_xdr_argument = (xdrproc_t) xdr_trans;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) create_1_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

static void
add_prog_1(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		trans add_1_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case ADD:
		_xdr_argument = (xdrproc_t) xdr_trans;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) add_1_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

static void
withdraw_prog_1(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		trans withdraw_1_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case WITHDRAW:
		_xdr_argument = (xdrproc_t) xdr_trans;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) withdraw_1_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

static void
inquiry_prog_1(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		trans inquiry_1_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case INQUIRY:
		_xdr_argument = (xdrproc_t) xdr_trans;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) inquiry_1_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

int
main (int argc, char **argv)
{
	register SVCXPRT *transp;

	pmap_unset (CREATE_PROG, CREATE_VERS);
	pmap_unset (ADD_PROG, ADD_VERS);
	pmap_unset (WITHDRAW_PROG, WITHDRAW_VERS);
	pmap_unset (INQUIRY_PROG, INQUIRY_VERS);

	transp = svcudp_create(RPC_ANYSOCK);
	if (transp == NULL) {
		fprintf (stderr, "%s", "cannot create udp service.");
		exit(1);
	}
	if (!svc_register(transp, CREATE_PROG, CREATE_VERS, create_prog_1, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (CREATE_PROG, CREATE_VERS, udp).");
		exit(1);
	}
	if (!svc_register(transp, ADD_PROG, ADD_VERS, add_prog_1, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (ADD_PROG, ADD_VERS, udp).");
		exit(1);
	}
	if (!svc_register(transp, WITHDRAW_PROG, WITHDRAW_VERS, withdraw_prog_1, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (WITHDRAW_PROG, WITHDRAW_VERS, udp).");
		exit(1);
	}
	if (!svc_register(transp, INQUIRY_PROG, INQUIRY_VERS, inquiry_prog_1, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (INQUIRY_PROG, INQUIRY_VERS, udp).");
		exit(1);
	}

	transp = svctcp_create(RPC_ANYSOCK, 0, 0);
	if (transp == NULL) {
		fprintf (stderr, "%s", "cannot create tcp service.");
		exit(1);
	}
	if (!svc_register(transp, CREATE_PROG, CREATE_VERS, create_prog_1, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (CREATE_PROG, CREATE_VERS, tcp).");
		exit(1);
	}
	if (!svc_register(transp, ADD_PROG, ADD_VERS, add_prog_1, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (ADD_PROG, ADD_VERS, tcp).");
		exit(1);
	}
	if (!svc_register(transp, WITHDRAW_PROG, WITHDRAW_VERS, withdraw_prog_1, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (WITHDRAW_PROG, WITHDRAW_VERS, tcp).");
		exit(1);
	}
	if (!svc_register(transp, INQUIRY_PROG, INQUIRY_VERS, inquiry_prog_1, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (INQUIRY_PROG, INQUIRY_VERS, tcp).");
		exit(1);
	}

	svc_run ();
	fprintf (stderr, "%s", "svc_run returned");
	exit (1);
	/* NOTREACHED */
}
