// #include <pthread.h>
// #include <sys/socket.h>
// #include <stdlib.h>
// #include <string.h>
// #include <unistd.h>
// struct sockaddr_in sin;
// struct sockaddr_in sinRemote;
// //int init_socket_receiver(); 

// //void lis(int sock);

// void* listenThread(void* args);
// void* Receiver_init(void* Receive_List);
// void* Receiver_shutdown(void);
#include <pthread.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
struct sockaddr_in sin;
struct sockaddr_in sinRemote;
//int init_socket_receiver(); 
static pthread_mutex_t LockIn = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t kToPrint = PTHREAD_COND_INITIALIZER;

//void lis(int sock);

void* listenThread(void* args);
void* Receiver_init(void* Receive_List);
void* Receiver_shutdown(void);