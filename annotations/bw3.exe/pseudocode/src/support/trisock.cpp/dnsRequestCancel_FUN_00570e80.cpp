// Name: support_trisock.cpp_dnsRequestCancel_FUN_00570e80
// Address: 00570e80
// Address Range: [[00570e80, 00570e9d]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_dnsRequestCancel_FUN_00570e80(void *request)

#include "nocturne.h"

void __cdecl support_trisock_cpp_dnsRequestCancel_FUN_00570e80(void *request)

{
  support_trisock_cpp_dnsRequestUnlink_FUN_00570fb0(request);
  *(uint *)((int)request + 0x3bc) = 0;
  return;
}
