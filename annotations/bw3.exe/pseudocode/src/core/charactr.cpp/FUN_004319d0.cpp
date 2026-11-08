// Name: FUN_004319d0
// Address: 004319d0
// Address Range: [[004319d0, 00431aa1]]
// Convention: unknown
// Signature: void FUN_004319d0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004319d0(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  int *piVar1;
  
  if ((param_2 < 0) || (1 < param_2)) {
    _DAT_01d71de0 = "..\\core\\charactr.cpp";
    _DAT_01d71de4 = 0xeec;
    FUN_004e4330("CCharacter::pickupObjectNow - invalid hand index");
  }
  if (param_3 != 0) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,param_2,0);
    piVar1 = (int *)(param_1 + 0x25a8 + param_2 * 0x78);
    if ((piVar1[1] < 0) || (*(int *)(param_1 + 0x2298 + piVar1[1] * 4) != 0)) {
      if (*piVar1 < 0) {
        _DAT_01d71de0 = "..\\core\\charactr.cpp";
        _DAT_01d71de4 = 0xf04;
        FUN_004e4330("CCharacter::pickupObjectNow - invalid bone!");
      }
      (**(code **)(*(int *)(param_3 + 0x154) + 0x88))(param_3,param_1);
      piVar1[2] = param_3;
      FUN_00431ab0(param_1,param_2,param_4,param_5);
      return;
    }
  }
  return;
}
