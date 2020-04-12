#ifndef KHTTPD_HTTP_SERVER_H
#define KHTTPD_HTTP_SERVER_H

#include <linux/workqueue.h>
#include <net/sock.h>
// #include <linux/module.h>
static DEFINE_MUTEX(mutex);

struct http_server_param {
    struct socket *listen_socket;
};

struct khttpd_service {
    bool is_stopped;
};

struct khttpd_work_data {
    struct socket *sock;
    struct work_struct khttpd_work;
};

extern int http_server_daemon(void *arg);

#endif
