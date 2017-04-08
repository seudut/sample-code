/*
 * tcp_echo_server.c 
 *
 * A Cocurrent TCP echo Server
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>


void error_die (const char *str);

int main (int argc, char *argv[])
{
    int lfd, cfd;
    int server_fd = -1;

    server_fd = socket (PF_INET, SOCK_STREAM, 0);
    if (server_fd == -1) error_die ("socket");
    while (1) {
        // accept
    }
}

void error_die (const char *str)
{
    perror (str);
    exit(1);
}

