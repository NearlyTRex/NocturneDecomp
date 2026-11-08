// Name: FUN_00465380
// Address: 00465380
// Address Range: [[00465380, 0046554e]]
// Convention: unknown
// Signature: undefined4 FUN_00465380(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00465380(int param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  float afStackY_1010 [1015];
  uint local_28;
  uint local_1c;
  float local_14;
  
  bVar2 = 0;
  FUN_00408bf0(param_1,param_2 + 0x20);
  local_1c = local_28;
  *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (param_3 == 0) {
    uVar1 = FUN_00508960("The door is locked.");
    if (local_14 <= 0.0) {
      if ((*(byte *)(param_1 + 0x9d8) & 2) == 0) {
        if (*(int *)(param_1 + 0x9d8) != 0) {
          FUN_00465550(param_1);
          FUN_004b46b0(0x01D2130C,uVar1,0x40a00000);
          return 0;
        }
        return 0;
      }
    }
    else if ((*(byte *)(param_1 + 0x9d8) & 1) == 0) {
      if (*(int *)(param_1 + 0x9d8) != 0) {
        FUN_00465550(param_1);
        FUN_004b46b0(0x01D2130C,uVar1,0x40a00000);
      }
      return 0;
    }
  }
  switch(*(uint *)(param_1 + 0x2d8)) {
  case 0:
    break;
  case 1:
    if (*(int *)(param_1 + 0x2e0) == 0) {
      return 6;
    }
    return 7;
  case 2:
    if (*(int *)(param_1 + 0x2dc) != 1) {
      local_14 = -local_14;
    }
    if (*(int *)(param_1 + 0x2e0) != 0) {
      local_14 = -local_14;
    }
    if (0.0 <= local_14) {
      return 4;
    }
    return 5;
  case 3:
    return 1;
  default:
    _DAT_01d71de0 = "..\\core\\door.cpp";
    _DAT_01d71de4 = 0x3de;
    FUN_004e4330("CDoor::getMoveType - invalid door!");
    return 0;
  }
  if (*(int *)(param_1 + 0x2e4) != 0) {
    local_14 = -local_14;
  }
  if (*(int *)(param_1 + 0x2e0) != 0) {
    local_14 = -local_14;
  }
  if (0.0 <= local_14) {
    return 2;
  }
  return 3;
}
