
#include "keyboard.h"
#include "screen.h"
#include "receiver.h"



void Cancel_threads(){
    Cancel_Receiver();
    Cancel_Screen();
    Cancel_Keyboard();
}