// Name: support_trisock.cpp_initHostInfo_FUN_00572310
// Address: 00572310
// Address Range: [[00572310, 0057232e]]
// Convention: __cdecl
// Signature: void * __cdecl support_trisock_cpp_initHostInfo_FUN_00572310(void *host_info)

#include "nocturne.h"

void * __cdecl support_trisock_cpp_initHostInfo_FUN_00572310(void *host_info)

{
  void *pvVar1;
  
  pvVar1 = __arrinit
                     ((void *)((int)host_info + 0x288),0xc,&g_IpAddrTypeInfo);
  return (void *)((int)pvVar1 + -0x288);
}
