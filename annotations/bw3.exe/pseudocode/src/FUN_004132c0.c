// Name: FUN_004132c0
// Address: 004132c0
// Address Range: [[004132c0, 004133b0]]
// Convention: unknown
// Signature: int FUN_004132c0(int param_1)

#include "nocturne.h"

int FUN_004132c0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x930) = 0xffffffff;
  *(uint *)(param_1 + 0x54) = 0;
  *(uint *)(param_1 + 0x24) = 0;
  *(uint *)(param_1 + 0x34) = 0;
  *(uint *)(param_1 + 0x18) = 0;
  iVar3 = param_1;
  do {
    iVar1 = iVar3 + 4;
    *(uint *)(iVar3 + 0x934) = 0;
    iVar3 = iVar1;
  } while (iVar1 != param_1 + 0x10);
  iVar3 = param_1;
  do {
    iVar1 = iVar3 + 4;
    *(uint *)(iVar3 + 0x38) = 0xffffffff;
    iVar3 = iVar1;
  } while (iVar1 != param_1 + 0xc);
  iVar3 = param_1;
  do {
    iVar1 = iVar3 + 4;
    *(uint *)(iVar3 + 0x44) = 0;
    iVar3 = iVar1;
  } while (iVar1 != param_1 + 0x10);
  iVar3 = param_1;
  do {
    iVar1 = iVar3 + 4;
    *(uint *)(iVar3 + 0x58) = 0;
    iVar3 = iVar1;
  } while (iVar1 != param_1 + 0x18);
  uVar2 = FUN_0040cea0(0,2);
  *(uint *)(param_1 + 0x44) = uVar2;
  uVar2 = FUN_0040cea0(0,2);
  *(uint *)(param_1 + 0x48) = uVar2;
  uVar2 = FUN_0040cea0(0,2);
  *(uint *)(param_1 + 0x4c) = uVar2;
  uVar2 = FUN_0040cea0(0,2);
  *(uint *)(param_1 + 0x50) = uVar2;
  iVar3 = param_1;
  do {
    iVar1 = iVar3 + 4;
    *(uint *)(iVar3 + 0x58) = 0;
    iVar3 = iVar1;
  } while (iVar1 != param_1 + 0x18);
  return iVar1;
}
