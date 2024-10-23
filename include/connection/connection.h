#ifndef CONNECTION_H
#define CONNECTION_H

typedef void*(*connection_handler_t)(void*);

typedef struct connection {
    int sock;
    connection_handler_t read_handler;
    connection_handler_t write_handler;
} connection;

#endif