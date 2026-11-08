// Name: FUN_00460630
// Address: 00460630
// Address Range: [[00460630, 004607fe]]
// Convention: unknown
// Signature: undefined4 FUN_00460630(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00460630(int param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  float afStackY_1010 [1015];
  uint local_28;
  uint local_1c;
  float local_14;
  
  bVar2 = 0;
  FUN_00408de0(param_1,param_2 + 0x20);
  local_1c = local_28;
  *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (param_3 == 0) {
    uVar1 = FUN_0050fe80("You cannot enter here.");
    if (local_14 <= 0.0) {
      if ((*(byte *)(param_1 + 0xb34) & 2) == 0) {
        if (*(int *)(param_1 + 0xb34) != 0) {
          FUN_00460800(param_1);
          FUN_004b31a0(0x01CB6900,uVar1,0x40a00000);
          return 0;
        }
        return 0;
      }
    }
    else if ((*(byte *)(param_1 + 0xb34) & 1) == 0) {
      if (*(int *)(param_1 + 0xb34) != 0) {
        FUN_00460800(param_1);
        FUN_004b31a0(0x01CB6900,uVar1,0x40a00000);
      }
      return 0;
    }
  }
  switch(*(uint *)(param_1 + 0x434)) {
  case 0:
    break;
  case 1:
    if (*(int *)(param_1 + 0x43c) == 0) {
      return 6;
    }
    return 7;
  case 2:
    if (*(int *)(param_1 + 0x438) != 1) {
      local_14 = -local_14;
    }
    if (*(int *)(param_1 + 0x43c) != 0) {
      local_14 = -local_14;
    }
    if (0.0 <= local_14) {
      return 4;
    }
    return 5;
  case 3:
    return 1;
  default:
    _DAT_01d046a0 = "..\\core\\door.cpp";
    _DAT_01d046a4 = 0x3de;
    FUN_004e4500("CDoor::getMoveType - invalid door!");
    return 0;
  }
  if (*(int *)(param_1 + 0x440) != 0) {
    local_14 = -local_14;
  }
  if (*(int *)(param_1 + 0x43c) != 0) {
    local_14 = -local_14;
  }
  if (0.0 <= local_14) {
    return 2;
  }
  return 3;
}
