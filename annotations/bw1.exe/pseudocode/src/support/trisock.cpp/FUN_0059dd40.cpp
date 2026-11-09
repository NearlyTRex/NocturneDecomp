// Name: support_trisock.cpp_FUN_0059dd40
// Address: 0059dd40
// Address Range: [[0059dd40, 0059dd90]]
// Convention: unknown
// Signature: undefined1 * support_trisock_cpp_FUN_0059dd40(int param_1)

#include "nocturne.h"

byte * support_trisock_cpp_FUN_0059dd40(int param_1)

{
  int iVar1;
  
  iVar1 = __arrinit(param_1 + 0x38c,0xc,&g_IpAddrTypeInfo);
  memset((void *)(iVar1 + -0x288),0,0x2b8);
  *(uint *)(iVar1 + 0x30) = 0;
  *(uint *)(iVar1 + 0x34) = 0;
  *(byte *)(iVar1 + -0x38c) = 0;
  return (byte *)(iVar1 + -0x38c);
}
