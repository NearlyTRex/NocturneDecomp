// Name: FUN_00428b10
// Address: 00428b10
// Address Range: [[00428b10, 00428bcd]]
// Convention: unknown
// Signature: void FUN_00428b10(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00428b10(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  int *piVar1;
  
  if ((param_2 < 0) || (1 < param_2)) {
    _DAT_01d046a0 = "..\\core\\charactr.cpp";
    _DAT_01d046a4 = 0xdfd;
    FUN_004e4500("CCharacter::pickupObjectNow - invalid hand index");
  }
  if (param_3 != 0) {
    piVar1 = (int *)(param_1 + 0x2618 + param_2 * 0x78);
    if ((piVar1[1] < 0) || (*(int *)(param_1 + 0x23f4 + piVar1[1] * 4) != 0)) {
      if (*piVar1 < 0) {
        _DAT_01d046a0 = "..\\core\\charactr.cpp";
        _DAT_01d046a4 = 0xe15;
        FUN_004e4500("CCharacter::pickupObjectNow - invalid bone!");
      }
      (**(code **)(*(int *)(param_3 + 0x2b0) + 0x90))(param_3,param_1);
      piVar1[2] = param_3;
      FUN_00428bd0(param_1,param_2,param_4,param_5);
    }
  }
  return;
}
