struct trans {
	int id;
	int amount;
};
program CREATE_PROG {
	version CREATE_VERS {
		int CREATE(trans) = 1;
	} = 1;
} = 4211;
program ADD_PROG {
	version ADD_VERS {
		int ADD(trans) = 1;
	} = 1;
} = 4212;
program WITHDRAW_PROG {
        version WITHDRAW_VERS {
                int WITHDRAW(trans) = 1;
        } = 1;
} = 4213;
program INQUIRY_PROG {
        version INQUIRY_VERS {
                int INQUIRY(trans) = 1;
        } = 1;
} = 4214;

