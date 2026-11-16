// Name: support_trisock.cpp_dnsRequestLookupAddr_FUN_00570df0
// Address: 00570df0
// Address Range: [[00570df0, 00570e15]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_dnsRequestLookupAddr_FUN_00570df0(void *request,uint ip_address)

#include "nocturne.h"

void __cdecl support_trisock_cpp_dnsRequestLookupAddr_FUN_00570df0(void *request,uint ip_address)

{
  support_trisock_cpp_dnsRequestCancel_FUN_00570e80(request);
  *(byte *)request = 0;
  *(uint *)((int)request + 0x100) = ip_address;
  support_trisock_cpp_dnsRequestQueue_FUN_00570ea0(request);
  return;
}
