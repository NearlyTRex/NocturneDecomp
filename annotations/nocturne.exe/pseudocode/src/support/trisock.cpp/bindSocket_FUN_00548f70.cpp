// Name: support_trisock.cpp_bindSocket_FUN_00548f70
// Address: 00548f70
// Address Range: [[00548f70, 00548fb5]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_bindSocket_FUN_00548f70(_SOCKET *socket_handle,uint16_t port)

#include "nocturne.h"

int __cdecl support_trisock_cpp_bindSocket_FUN_00548f70(_SOCKET *socket_handle,uint16_t port)

{
  ushort uVar1;
  int iVar2;
  uint *unaff_retaddr;
  uint uStack_14;
  uint uStack_10;
  
  uStack_14 = (uint)port;
  uStack_10 = CONCAT22(uStack_10._2_2_,2);
  uVar1 = Ordinal_9();
  uStack_14 = CONCAT22(uVar1,(ushort)uStack_14);
  uStack_10 = 0;
  iVar2 = Ordinal_2(*unaff_retaddr,&uStack_14,0x10);
  return (uint)(iVar2 == 0);
}
