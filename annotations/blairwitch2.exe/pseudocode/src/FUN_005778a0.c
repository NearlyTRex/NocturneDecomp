// Name: FUN_005778a0
// Address: 005778a0
// Address Range: [[005778a0, 00577993]]
// Convention: unknown
// Signature: void FUN_005778a0(int param_1)

#include "nocturne.h"

void FUN_005778a0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_00408a80(param_1);
  iVar2 = 0x01D182F0;
  *(uint *)(param_1 + 0xf8) = 0;
  uVar1 = *(uint *)(iVar2 + 0x1008);
  *(uint *)(param_1 + 0x100) = 1;
  *(uint *)(param_1 + 0xfc) = uVar1;
  if (*(int *)(param_1 + 0x2d0) == 5) {
    *(uint *)(param_1 + 0x100) = 0;
  }
  if (*(int *)(param_1 + 0x2d0) == 4) {
    *(uint *)(param_1 + 0x100) = 0;
  }
  if (*(int *)(param_1 + 0x2d0) == 7) {
    *(uint *)(param_1 + 0x100) = 0;
  }
  *(uint *)(param_1 + 0x44c) = 0;
  *(uint *)(param_1 + 0x4c8) = 0;
  iVar2 = FUN_005b8130(param_1 + 0x380,0x5ecd76);
  if (iVar2 == 0) {
    *(byte *)(param_1 + 0x380) = 0;
  }
  iVar2 = FUN_005b8130(param_1 + 0x3e4,0x5ecd7b);
  if (iVar2 == 0) {
    *(byte *)(param_1 + 0x3e4) = 0;
  }
  *(uint *)(param_1 + 0x104) = 0;
  if ((*(char *)(param_1 + 0x380) == '\0') && (*(char *)(param_1 + 0x3e4) == '\0')) {
    *(uint *)(param_1 + 0x104) = 1;
    return;
  }
  return;
}
