// Name: support_trisock.cpp_dnsRequestCancel_FUN_0059de90
// Address: 0059de90
// Address Range: [[0059de90, 0059dead]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_dnsRequestCancel_FUN_0059de90(void *request)

#include "nocturne.h"

void __cdecl support_trisock_cpp_dnsRequestCancel_FUN_0059de90(void *request)

{
  support_trisock_cpp_dnsRequestUnlink_FUN_0059dfc0(request);
  *(uint *)((int)request + 0x3bc) = 0;
  return;
}
