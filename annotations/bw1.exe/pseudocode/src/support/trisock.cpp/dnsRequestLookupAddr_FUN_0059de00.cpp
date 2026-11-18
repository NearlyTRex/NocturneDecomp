// Name: support_trisock.cpp_dnsRequestLookupAddr_FUN_0059de00
// Address: 0059de00
// Address Range: [[0059de00, 0059de25]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_dnsRequestLookupAddr_FUN_0059de00(void *request,uint ip_address)

#include "nocturne.h"

void __cdecl support_trisock_cpp_dnsRequestLookupAddr_FUN_0059de00(void *request,uint ip_address)

{
  support_trisock_cpp_dnsRequestCancel_FUN_0059de90(request);
  *(byte *)request = 0;
  *(uint *)((int)request + 0x100) = ip_address;
  support_trisock_cpp_dnsRequestQueue_FUN_0059deb0(request);
  return;
}
