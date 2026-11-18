// Name: support_trisock.cpp_dnsRequestCancel_FUN_0057a820
// Address: 0057a820
// Address Range: [[0057a820, 0057a83d]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_dnsRequestCancel_FUN_0057a820(void *request)

#include "nocturne.h"

void __cdecl support_trisock_cpp_dnsRequestCancel_FUN_0057a820(void *request)

{
  int in_stack_00000008;
  
  support_trisock_cpp_dnsRequestUnlink_FUN_0057a980(request);
  *(uint *)(in_stack_00000008 + 0x3bc) = 0;
  return;
}
