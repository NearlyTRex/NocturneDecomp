// Name: support_trisock.cpp_FUN_00571030
// Address: 00571030
// Address Range: [[00571030, 00571111]]
// Convention: unknown
// Signature: void * support_trisock_cpp_FUN_00571030(int param_1)

#include "nocturne.h"

void * support_trisock_cpp_FUN_00571030(int param_1)

{
  CSocket *pCVar1;
  int iVar2;
  
  pCVar1 = support_trisock_cpp_CSocket_ctor_FUN_0056f8d0((CSocket *)(param_1 + 0xd2c));
  iVar2 = support_trisock_cpp_FUN_00570d30(pCVar1 + 1);
  memset((void *)(iVar2 + -0xd30),0,0x200);
  memset((void *)(iVar2 + -0xb30),0,0x200);
  memset((void *)(iVar2 + -0x930),0,0x100);
  memset((void *)(iVar2 + -0x830),0,0x100);
  memset((void *)(iVar2 + -0x318),0,0x300);
  *(uint *)(iVar2 + -0x728) = 0;
  *(uint *)(iVar2 + -0x724) = 0;
  *(uint *)(iVar2 + -800) = 0;
  *(uint *)(iVar2 + -0x31c) = 0;
  *(uint *)(iVar2 + -0x10) = 0;
  *(uint *)(iVar2 + -0x18) = 0;
  *(uint *)(iVar2 + -0xc) = 0;
  *(uint *)(iVar2 + -8) = 0;
  return (void *)(iVar2 + -0xd30);
}
