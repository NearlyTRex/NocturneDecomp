// Name: support_trisock.cpp_initDnsRequest_FUN_0059dd40
// Address: 0059dd40
// Address Range: [[0059dd40, 0059dd90]]
// Convention: __cdecl
// Signature: void * __cdecl support_trisock_cpp_initDnsRequest_FUN_0059dd40(void *request)

#include "nocturne.h"

void * __cdecl support_trisock_cpp_initDnsRequest_FUN_0059dd40(void *request)

{
  void *pvVar1;
  
  pvVar1 = __arrinit((void *)((int)request + 0x38c),0xc,&g_IpAddrTypeInfo)
  ;
  memset((void *)((int)pvVar1 + -0x288),0,0x2b8);
  *(uint *)((int)pvVar1 + 0x30) = 0;
  *(uint *)((int)pvVar1 + 0x34) = 0;
  *(byte *)((int)pvVar1 + -0x38c) = 0;
  return (byte *)((int)pvVar1 + -0x38c);
}
