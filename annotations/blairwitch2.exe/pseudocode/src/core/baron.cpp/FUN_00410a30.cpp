// Name: FUN_00410a30
// Address: 00410a30
// Address Range: [[00410a30, 00410abc]]
// Convention: unknown
// Signature: void FUN_00410a30(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410a30(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_0058a200(param_1,param_2);
  iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x9c))(param_1);
  if (*(int *)(param_1 + 0x430) == 2) {
    if (iVar1 == 0) {
      _DAT_01d046a0 = "..\\core\\baron.cpp";
      _DAT_01d046a4 = 800;
      FUN_004e4500("CBaronWeapon::setWeaponState - I'm drawn, but nobody's carrying me??");
    }
    FUN_00410ac0(param_1);
    FUN_0040fef0(*(uint *)(param_1 + 0x6d4),iVar1);
  }
  else if (*(int *)(param_1 + 0x6d4) != 0) {
    FUN_00410040(*(int *)(param_1 + 0x6d4),iVar1);
    return;
  }
  return;
}
