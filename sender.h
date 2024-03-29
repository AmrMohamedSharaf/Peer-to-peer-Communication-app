

#include <pthread.h>
#include <stdio.h>
#include <netdb.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include "list.h"
#include "ThreadCancelHandler.h"
#ifndef _sender_h


//#define PORT 8080
#define MAX_LEN 1024



// Function to init the Socket for() 
 
// Desc : 

// Creates and new socket with the given socket socket adress 
// Establishes the connection to this port 


// static int init_socket_client();




//  Desc 
// Send the message to the given socket 
// static int send_message(int socketDescriptor , char* message);




// Desc 
// Creates the socket and send messages to the port on user input 

void Send_thread() ; 



// Desc 
// Thread init 

void* Sender_init(void* Arg ,pthread_cond_t* Cond , pthread_mutex_t* Lock, char* IP_ADDRESS  , short SERVER_PORT);

// Desc 
// Thread shutdown
void* Sender_shutdown(void);


void Cancel_Sender();



#endif