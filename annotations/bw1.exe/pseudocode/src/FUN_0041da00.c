// Name: FUN_0041da00
// Address: 0041da00
// Address Range: [[0041da00, 0041daad]]
// Convention: unknown
// Signature: void FUN_0041da00(int param_1)

#include "nocturne.h"

void FUN_0041da00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005c0357(param_1 + 0xb4,8,&DAT_005fcdf0);
  *(uint *)(iVar1 + -0xac) = 0;
  *(uint *)(iVar1 + -0xb0) = *(uint *)(iVar1 + -0xac);
  *(uint *)(iVar1 + -0xb4) = *(uint *)(iVar1 + -0xac);
  *(uint *)(iVar1 + -0xa0) = 0;
  *(uint *)(iVar1 + -0xa4) = *(uint *)(iVar1 + -0xa0);
  *(uint *)(iVar1 + -0xa8) = *(uint *)(iVar1 + -0xa4);
  *(uint *)(iVar1 + -8) = 0;
  *(uint *)(iVar1 + -0xc) = *(uint *)(iVar1 + -8);
  *(uint *)(iVar1 + -0x10) = *(uint *)(iVar1 + -0xc);
  *(uint *)(iVar1 + -0x20) = 0;
  *(uint *)(iVar1 + -0x60) = 0;
  *(uint *)(iVar1 + -100) = *(uint *)(iVar1 + -0x60);
  *(uint *)(iVar1 + -0x68) = *(uint *)(iVar1 + -100);
  *(uint *)(iVar1 + -0x6c) = 0;
  *(uint *)(iVar1 + -0x70) = *(uint *)(iVar1 + -0x6c);
  *(uint *)(iVar1 + -0x74) = *(uint *)(iVar1 + -0x70);
  *(uint *)(iVar1 + -0x3c) = 0;
  *(uint *)(iVar1 + -0x40) = *(uint *)(iVar1 + -0x3c);
  *(uint *)(iVar1 + -0x44) = *(uint *)(iVar1 + -0x40);
  *(uint *)(iVar1 + 0x1a0) = 0;
  return;
}
