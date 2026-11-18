// Name: support_trisock.cpp_initHttpRequest_FUN_0059e040
// Address: 0059e040
// Address Range: [[0059e040, 0059e121]]
// Convention: __cdecl
// Signature: void * __cdecl support_trisock_cpp_initHttpRequest_FUN_0059e040(void *request)

#include "nocturne.h"

void * __cdecl support_trisock_cpp_initHttpRequest_FUN_0059e040(void *request)

{
  CSocket *pCVar1;
  void *pvVar2;
  
  pCVar1 = support_trisock_cpp_CSocket_ctor_FUN_0059c8e0((CSocket *)((int)request + 0xd2c));
  pvVar2 = support_trisock_cpp_initDnsRequest_FUN_0059dd40(pCVar1 + 1);
  memset((void *)((int)pvVar2 + -0xd30),0,0x200);
  memset((void *)((int)pvVar2 + -0xb30),0,0x200);
  memset((void *)((int)pvVar2 + -0x930),0,0x100);
  memset((void *)((int)pvVar2 + -0x830),0,0x100);
  memset((void *)((int)pvVar2 + -0x318),0,0x300);
  *(uint *)((int)pvVar2 + -0x728) = 0;
  *(uint *)((int)pvVar2 + -0x724) = 0;
  *(uint *)((int)pvVar2 + -800) = 0;
  *(uint *)((int)pvVar2 + -0x31c) = 0;
  *(uint *)((int)pvVar2 + -0x10) = 0;
  *(uint *)((int)pvVar2 + -0x18) = 0;
  *(uint *)((int)pvVar2 + -0xc) = 0;
  *(uint *)((int)pvVar2 + -8) = 0;
  return (void *)((int)pvVar2 + -0xd30);
}
