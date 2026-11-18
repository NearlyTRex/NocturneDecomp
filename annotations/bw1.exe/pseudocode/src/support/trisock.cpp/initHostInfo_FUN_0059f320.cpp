// Name: support_trisock.cpp_initHostInfo_FUN_0059f320
// Address: 0059f320
// Address Range: [[0059f320, 0059f33e]]
// Convention: __cdecl
// Signature: void * __cdecl support_trisock_cpp_initHostInfo_FUN_0059f320(void *host_info)

#include "nocturne.h"

void * __cdecl support_trisock_cpp_initHostInfo_FUN_0059f320(void *host_info)

{
  void *pvVar1;
  
  pvVar1 = __arrinit
                     ((void *)((int)host_info + 0x288),0xc,&g_IpAddrTypeInfo);
  return (void *)((int)pvVar1 + -0x288);
}
