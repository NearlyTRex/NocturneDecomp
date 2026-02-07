// Name: support_trisock.cpp_createSocket_FUN_005e1b10
// Address: 005e1b10
// Address Range: [[005e1b10, 005e1b37]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_createSocket_FUN_005e1b10(SSocketContext *socket_ctx)

#include "nocturne.h"

int __cdecl support_trisock_cpp_createSocket_FUN_005e1b10(SSocketContext *socket_ctx)

{
  SOCKET SVar1;
  
  support_trisock_cpp_bindAndInvalidateSocket_FUN_005e1d20(socket_ctx);
  SVar1 = shutdown(2,1);
  socket_ctx->socket = SVar1;
  return (uint)(SVar1 != 0xffffffff);
}
