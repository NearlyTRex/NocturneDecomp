// Name: core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40
// Address: 00428f40
// Address Range: [[00428f40, 00429008]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40(int param_1,int param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40(int param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  
  if ((param_2 < 0) || (1 < param_2)) {
    _DAT_01cc4800 = "?..\\core\\charactr.cpp" + 1;
    _DAT_01cc4804 = 0xbe7;
    FUN_004c8440("CCharacter::pickupObjectNow - invalid hand index");
  }
  if (param_3 != 0) {
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,param_2,0);
    piVar1 = (int *)(param_1 + 0x24a4 + param_2 * 0x44);
    if ((piVar1[1] < 0) || (*(int *)(param_1 + 0x2290 + piVar1[1] * 4) != 0)) {
      if (*piVar1 < 0) {
        _DAT_01cc4800 = "..\\core\\charactr.cpp";
        _DAT_01cc4804 = 0xbff;
        FUN_004c8440("CCharacter::pickupObjectNow - invalid bone!");
      }
      (**(code **)(*(int *)(param_3 + 0x14c) + 0x80))(param_3,param_1);
      piVar1[2] = param_3;
      core_charactr_cpp_CCharacter_computePickup_FUN_00429010(param_1,param_2,param_4);
      return;
    }
  }
  return;
}
