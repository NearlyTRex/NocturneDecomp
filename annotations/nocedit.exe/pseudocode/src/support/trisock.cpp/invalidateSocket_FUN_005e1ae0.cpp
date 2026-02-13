// Name: support_trisock.cpp_invalidateSocket_FUN_005e1ae0
// Address: 005e1ae0
// Address Range: [[005e1ae0, 005e1aea]]
// Convention: __cdecl
// Signature: SSocketContext * __cdecl support_trisock_cpp_invalidateSocket_FUN_005e1ae0(SSocketContext *socket_ctx)

#include "nocturne.h"

SSocketContext * __cdecl
support_trisock_cpp_invalidateSocket_FUN_005e1ae0(SSocketContext *socket_ctx)

{
  socket_ctx->socket = 0xffffffff;
  return socket_ctx;
}
