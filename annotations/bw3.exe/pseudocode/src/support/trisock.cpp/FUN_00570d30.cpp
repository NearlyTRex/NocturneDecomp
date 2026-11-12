// Name: support_trisock.cpp_FUN_00570d30
// Address: 00570d30
// Address Range: [[00570d30, 00570d80]]
// Convention: unknown
// Signature: undefined1 * support_trisock_cpp_FUN_00570d30(int param_1)

#include "nocturne.h"

byte * support_trisock_cpp_FUN_00570d30(int param_1)

{
  void *pvVar1;
  
  pvVar1 = __arrinit((void *)(param_1 + 0x38c),0xc,&g_IpAddrTypeInfo);
  memset((void *)((int)pvVar1 + -0x288),0,0x2b8);
  *(uint *)((int)pvVar1 + 0x30) = 0;
  *(uint *)((int)pvVar1 + 0x34) = 0;
  *(byte *)((int)pvVar1 + -0x38c) = 0;
  return (byte *)((int)pvVar1 + -0x38c);
}
