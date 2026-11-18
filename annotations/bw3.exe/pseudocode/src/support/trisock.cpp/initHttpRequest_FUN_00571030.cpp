// Name: support_trisock.cpp_initHttpRequest_FUN_00571030
// Address: 00571030
// Address Range: [[00571030, 00571111]]
// Convention: __cdecl
// Signature: void * __cdecl support_trisock_cpp_initHttpRequest_FUN_00571030(void *request)

#include "nocturne.h"

void * __cdecl support_trisock_cpp_initHttpRequest_FUN_00571030(void *request)

{
  CSocket *pCVar1;
  void *pvVar2;
  
  pCVar1 = support_trisock_cpp_CSocket_ctor_FUN_0056f8d0((CSocket *)((int)request + 0xd2c));
  pvVar2 = support_trisock_cpp_initDnsRequest_FUN_00570d30(pCVar1 + 1);
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
