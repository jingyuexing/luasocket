#ifndef UDP_H
#define UDP_H
/*=========================================================================*\
* UDP object
* LuaSocket toolkit
*
* The udp.h module provides LuaSocket with support for UDP protocol
* (AF_INET, SOCK_DGRAM).
*
* Two classes are defined: connected and unconnected. UDP objects are
* originally unconnected. They can be "connected" to a given address 
* with a call to the setpeername function. The same function can be used to
* break the connection.
*
* RCS ID: $Id$
\*=========================================================================*/
#include <lua.h>

#include "timeout.h"
#include "socket.h"

#define UDP_DATAGRAMSIZE 576

typedef struct t_udp_ {
    t_sock sock;
    t_tm tm;
} t_udp;
typedef t_udp *p_udp;

void udp_open(lua_State *L);

#endif /* UDP_H */