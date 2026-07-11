// Name: FUN_004564b0
// Address: 004564b0
// Address Range: [[004564b0, 0045664e]]
// Convention: unknown
// Signature: undefined4 FUN_004564b0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004564b0(int param_1,int param_2)

{
  uint uVar1;
  byte local_18 [8];
  float local_10;
  
  FUN_0040a290(param_1,local_18,param_2 + 0x20);
  uVar1 = FUN_004ee370("The door is locked from the other side.");
  if (local_10 <= 0.0) {
    if ((*(byte *)(param_1 + 0x9d0) & 2) != 0) goto LAB_0045663d;
    if (*(int *)(param_1 + 0x9d0) != 0) {
      FUN_00456650(param_1);
      FUN_0049aa30(0x01C775EC,uVar1,0x40a00000);
      return 0;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x9d0) & 1) != 0) {
LAB_0045663d:
      switch(*(uint *)(param_1 + 0x2d0)) {
      case 0:
        if (*(int *)(param_1 + 0x2dc) != 0) {
          local_10 = -local_10;
        }
        if (*(int *)(param_1 + 0x2d8) != 0) {
          local_10 = -local_10;
        }
        if (0.0 <= local_10) {
          return 2;
        }
        return 3;
      case 1:
        if (*(int *)(param_1 + 0x2d8) == 0) {
          return 6;
        }
        return 7;
      case 2:
        goto switchD_00456648_caseD_2;
      case 3:
        return 1;
      default:
        _DAT_01cc4800 = "..\\core\\door.cpp";
        _DAT_01cc4804 = 0x39e;
        FUN_004c8440("CDoor::getMoveType - invalid door!");
        return 0;
      }
    }
    if (*(int *)(param_1 + 0x9d0) != 0) {
      FUN_00456650(param_1);
      FUN_0049aa30(0x01C775EC,uVar1,0x40a00000);
    }
  }
  return 0;
switchD_00456648_caseD_2:
  if (*(int *)(param_1 + 0x2d4) != 1) {
    local_10 = -local_10;
  }
  if (*(int *)(param_1 + 0x2d8) != 0) {
    local_10 = -local_10;
  }
  if (0.0 <= local_10) {
    return 4;
  }
  return 5;
}
