/*
ITK_init_module
ITK_auto_login
a
-u=infodba -p=infodba -g=DBA
-u=Student -p=Student -g=Engineering


*/

#include <stdio.h>
#include <tc\tc_startup.h>
#include <tcinit\tcinit.h>

int ITK_user_main(int argc, char** argv)
{

	int retcode = 0;

	//Reading the command line argument	
	char* userid = ITK_ask_cli_argument("-u=");
	char* password = ITK_ask_cli_argument("-p=");
	char* groupid = ITK_ask_cli_argument("-g=");

	retcode = ITK_init_module(userid, password, groupid);

	if (retcode != 0)
	{
		printf("\n Failed to Login");
		return -1;
	}
	else {

		printf("\nHello Teamcenter!");
	}

	return 0;
}
