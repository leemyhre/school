#include <sys/types.h>
#include <sys/socket.h>

int help()
{
	cout << "Correct usage:\n"
	     << "./sws <port> <directory>\n"
	     << "	<port>: the TCP port at which requests will be listened for.\n"
	     << "	<directory>: the local directory where requests will be handled.\n"
}

int main(int argc, char *argv[])
{
	if (argc != 3) return help();
	int pt;
	string dir;
	try
	{
		pt = atoi(argv[1]);
		dir = argv[2];
	} catch (exception e)
	{
		return help();
	}
	cout << "beginning operation..";
	
}
