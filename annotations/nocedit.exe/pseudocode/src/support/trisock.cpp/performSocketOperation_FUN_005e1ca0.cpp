// Name: support_trisock.cpp_performSocketOperation_FUN_005e1ca0
// Address: 005e1ca0
// Address Range: [[005e1ca0, 005e1d1a]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_performSocketOperation_FUN_005e1ca0(SSocketContext * socket_ctx, char * buffer, int length, SNetworkAddr * dest_addr)

#include "nocturne.h"

int __cdecl
support_trisock_cpp_performSocketOperation_FUN_005e1ca0
          (SSocketContext *socket_ctx,char *buffer,int length,SNetworkAddr *dest_addr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  byte bVar2;
  uint auStackY_1804 [1521];
  uint uStack_28;
  uint local_1c;
  
  bVar2 = 0;
  if (dest_addr == (SNetworkAddr *)0x0) {
    iVar1 = crt_wsock32_c_send(socket_ctx->socket,buffer,length,0);
    return iVar1;
  }
  support_trisock_cpp_buildSockaddrIn_FUN_005e19d0(dest_addr,(SOCKADDR_IN *)&stack0xffffffd4);
  local_1c = uStack_28;
  *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  *(uint *)
   ((int)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4)
  ;
  iVar1 = crt_wsock32_c_sendto
                    (*(SOCKET *)buffer,(char *)length,(int)dest_addr,0,(SOCKADDR *)&stack0xffffffe8,
                     0x10);
  return iVar1;
}
