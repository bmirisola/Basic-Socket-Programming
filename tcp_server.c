#include <stdlib.h>
#include <stdio.h>

#include <sys?socket.h>
#include <sys/types.h>

#include <netinet/in.h>

int main(){
	
	char server_message[256] = "You have reached the server!";
	
	//CREATE THE SERVER SOCKET 
	int server_socket = socket(AF_INET, SOCK_STREAM, 0);

	// define the server address
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(9002);
	server_address.sin_addr.s_addr =  INADDR_ANY;

	//bind the socket to our specified IP and port
	bind(server_socket, (struct sockaddr*) &server_address, sizeof(server_address));
	

		//socket, number of clients that can connect,
	listen(server_socket, 12);

	int client_socket;
			//socket you are accepting address on, optional fill in for data to hold address client is connecting from, sizeof
	client_socket = accept(server_socket, NULL, NULL);
	//client_socket = accept(server_socket, stringhere, sizeof(string);
		

		// socket youre sending data on, data you are sending, sizeof message, optional flag)
	send(client_socket, server_message, sizeof(server_message), 0);

	// close the socket
	close(server_socket);

	return 0;


}
