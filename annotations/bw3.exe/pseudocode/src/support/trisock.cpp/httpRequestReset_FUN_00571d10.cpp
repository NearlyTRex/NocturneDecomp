// Name: support_trisock.cpp_httpRequestReset_FUN_00571d10
// Address: 00571d10
// Address Range: [[00571d10, 00571d7a]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_httpRequestReset_FUN_00571d10(void *request)

#include "nocturne.h"

void __cdecl support_trisock_cpp_httpRequestReset_FUN_00571d10(void *request)

{
  *(uint *)((int)request + 0x608) = 0;
  *(uint *)((int)request + 0x60c) = 0;
  *(uint *)((int)request + 0xa10) = 0;
  *(uint *)((int)request + 0xa14) = 0;
  *(uint *)((int)request + 0xd20) = 0;
  *(uint *)((int)request + 0xd24) = 0;
  *(uint *)((int)request + 0xd28) = 0;
  support_trisock_cpp_CSocket_closeSocket_FUN_0056fc30((CSocket *)((int)request + 0xd2c));
  support_trisock_cpp_dnsRequestCancel_FUN_00570e80((void *)((int)request + 0xd30));
  return;
}
