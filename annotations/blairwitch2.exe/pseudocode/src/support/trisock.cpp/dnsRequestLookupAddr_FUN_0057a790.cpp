// Name: support_trisock.cpp_dnsRequestLookupAddr_FUN_0057a790
// Address: 0057a790
// Address Range: [[0057a790, 0057a7b5]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_dnsRequestLookupAddr_FUN_0057a790(void *request,uint ip_address)

#include "nocturne.h"

void __cdecl support_trisock_cpp_dnsRequestLookupAddr_FUN_0057a790(void *request,uint ip_address)

{
  uint in_stack_0000000c;
  
  support_trisock_cpp_dnsRequestCancel_FUN_0057a820(request);
  *(byte *)request = 0;
  *(uint *)((int)request + 0x100) = in_stack_0000000c;
  support_trisock_cpp_dnsRequestQueue_FUN_0057a840(request);
  return;
}
