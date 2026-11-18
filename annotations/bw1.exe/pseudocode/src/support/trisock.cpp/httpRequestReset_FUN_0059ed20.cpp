// Name: support_trisock.cpp_httpRequestReset_FUN_0059ed20
// Address: 0059ed20
// Address Range: [[0059ed20, 0059ed8a]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_httpRequestReset_FUN_0059ed20(void *request)

#include "nocturne.h"

void __cdecl support_trisock_cpp_httpRequestReset_FUN_0059ed20(void *request)

{
  *(uint *)((int)request + 0x608) = 0;
  *(uint *)((int)request + 0x60c) = 0;
  *(uint *)((int)request + 0xa10) = 0;
  *(uint *)((int)request + 0xa14) = 0;
  *(uint *)((int)request + 0xd20) = 0;
  *(uint *)((int)request + 0xd24) = 0;
  *(uint *)((int)request + 0xd28) = 0;
  support_trisock_cpp_CSocket_closeSocket_FUN_0059cc40((CSocket *)((int)request + 0xd2c));
  support_trisock_cpp_dnsRequestCancel_FUN_0059de90((void *)((int)request + 0xd30));
  return;
}
