// Name: FUN_004156e0
// Address: 004156e0
// Address Range: [[004156e0, 004157f6]]
// Convention: unknown
// Signature: void FUN_004156e0(undefined4 param_1)

#include "nocturne.h"

void FUN_004156e0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408790(param_1);
  iVar1 = FUN_005b7f5f(iVar1 + 0x3ec,3,&DAT_005f37b0);
  iVar1 = FUN_005b7f5f(iVar1 + 0x4c0,2,&DAT_005f37d0);
  iVar1 = FUN_005b1bc0(iVar1 + 0x834);
  *(byte **)(iVar1 + -0xe30) = &DAT_005f36c4;
  *(uint *)(iVar1 + 0x25c) = 0;
  *(uint *)(iVar1 + -0xe10) = 0;
  *(uint *)(iVar1 + -0xe0c) = 0;
  *(uint *)(iVar1 + -0xe08) = 0;
  *(uint *)(iVar1 + -0xe04) = 0;
  *(uint *)(iVar1 + -0xe00) = 0;
  *(uint *)(iVar1 + -0xdfc) = 0;
  *(uint *)(iVar1 + -0xdf8) = 0;
  *(uint *)(iVar1 + -0xe2c) = 0;
  *(uint *)(iVar1 + -0xcfc) = 0;
  *(uint *)(iVar1 + -0xd00) = *(uint *)(iVar1 + -0xcfc);
  *(uint *)(iVar1 + -0xd04) = *(uint *)(iVar1 + -0xd00);
  *(uint *)(iVar1 + -0x838) = 0;
  *(uint *)(iVar1 + -0xcf8) = 0;
  *(uint *)(iVar1 + -0x10) = 0x40a00000;
  *(uint *)(iVar1 + -0x14) = 0;
  *(uint *)(iVar1 + -0xc) = 0xffff;
  *(uint *)(iVar1 + 0x260) = 0;
  *(uint *)(iVar1 + -8) = 0;
  *(uint *)(iVar1 + -4) = 0;
  return;
}
