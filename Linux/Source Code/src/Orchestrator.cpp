#include <iostream>
#include <throughput/Orchestrator.h>

using namespace std;

int main(int argc, char *argv[])
{
	Orchestrator::Server server;
	::cout << "Orchestrator Service Started." <<::endl << "Waiting for incoming connections" <<::endl;
	
	server.initialize();
	server.beginServer(1101,1102);
	server.execute();
	
	return 0;
}