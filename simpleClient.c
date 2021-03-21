#include "API/flcliapi.h"
#include "API/flcliapi.c"

#include <stdio.h>

int main(){
    flcliapi_t *client = flcliapi_new();

    flcliapi_connect(client, "tcp//127.0.0.1:5555");
    zmsg_t *request =zmsg_new();

    flcliapi_request(client,&request);



    flcliapi_destroy(&client);





    return 0;
}
