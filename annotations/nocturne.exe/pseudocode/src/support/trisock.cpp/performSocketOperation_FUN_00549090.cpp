// Name: support_trisock.cpp_performSocketOperation_FUN_00549090
// Address: 00549090
// Address Range: [[00549090, 0054910a]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_performSocketOperation_FUN_00549090(_SOCKET *socket_handle,char *buffer,int length,SNetworkAddr *dest_addr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl support_trisock_cpp_performSocketOperation_FUN_00549090(_SOCKET *socket_handle,char *buffer,int length,SNetworkAddr *dest_addr)

{
  int iVar1;
  byte bVar2;
  uint auStackY_1808 [1521];
  uint local_2c;
  uint local_1c;
  
  bVar2 = 0;
  if (dest_addr == (SNetworkAddr *)0x0) {
    iVar1 = Ordinal_19(*socket_handle,buffer,length,0);
    return iVar1;
  }
  support_trisock_cpp_buildSockaddrIn_FUN_00548dc0(dest_addr);
  local_1c = local_2c;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  *(uint *)
   ((int)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4)
  ;
  iVar1 = Ordinal_20(*socket_handle,buffer,length,0,&stack0xffffffe4,0x10);
  return iVar1;
}
