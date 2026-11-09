// Name: support_trisock.cpp_CSocket_getSocketName_FUN_0056fd00
// Address: 0056fd00
// Address Range: [[0056fd00, 0056fd52]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_getSocketName_FUN_0056fd00(CSocket *this_ptr,SNetworkAddr *out_address)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_getSocketName_FUN_0056fd00(CSocket *this_ptr,SNetworkAddr *out_address)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  sockaddr sStack_1c;
  byte auStack_c [8];
  int iStack_4;
  
  bVar3 = 0;
  iStack_4 = 0x10;
  iVar1 = getsockname(*(SOCKET *)this_ptr,&sStack_1c,&iStack_4);
  if (iVar1 != 0) {
    return 0;
  }
  puVar2 = (uint *)support_trisock_cpp_convertSockAddr_FUN_0056f750(auStack_c,&sStack_1c);
  *(uint *)out_address = *puVar2;
  *(uint *)(out_address + (uint)bVar3 * -8 + 4) = puVar2[(uint)bVar3 * -2 + 1];
  return 1;
}
