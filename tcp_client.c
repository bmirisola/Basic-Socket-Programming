#include <stdlib.h>
#include <stdio.h>

#include <sys/types.h>
#include <sys/socket.h>

#include <netinet/in.h>

int main(){

  //create a socket
  int network_socket;
  //			domain of socket, type of socket (TCP vs UDP), protocol
  network_socket = socket(AF_INET, SOCK_STREAM, 0);

  //specify am address for the socket
  struct sockaddr_in server_address;
  server_address.sin_family = AF_INET
  server_address.sin_port = htons(9002);
  //server_address = structure that hold some information about the address
  //sin_addr = structure containing one field that holds the actual address
  //s_addr = holds address
  server_address.sin_addr.s_addr = INADDR_ANY;

  //	 actaul socket, pointer to address
  connect(network_socket, (struct sockaddr *) &server_address, sizeof(server_address)

	  //check for error with the connection
	  if(connection_status == -1){
       





	  return 0;
}
