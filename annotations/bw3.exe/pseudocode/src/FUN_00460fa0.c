// Name: FUN_00460fa0
// Address: 00460fa0
// Address Range: [[00460fa0, 00461040]]
// Convention: unknown
// Signature: void FUN_00460fa0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00460fa0(int param_1,uint param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x110) < 1) {
    return;
  }
  uVar1 = FUN_00460f60(param_1,param_2);
  FUN_00538ad0(0x01ED78C8,*(uint *)(param_1 + 0x104),uVar1);
  if (*(int *)(param_1 + 0x108) != 0) {
    FUN_00538dd0(0x01ED78C8,*(uint *)(param_1 + 0x104),*(uint *)(param_1 + 0x110),
                 *(uint *)(param_1 + 0x114),uVar1,4,*(int *)(param_1 + 0x108));
    return;
  }
  FUN_00538dd0(0x01ED78C8,*(uint *)(param_1 + 0x104),*(uint *)(param_1 + 0x110),
               *(uint *)(param_1 + 0x114),uVar1,4,0);
  return;
}
