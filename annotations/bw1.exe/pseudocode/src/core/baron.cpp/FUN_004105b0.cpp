// Name: FUN_004105b0
// Address: 004105b0
// Address Range: [[004105b0, 0041063c]]
// Convention: unknown
// Signature: void FUN_004105b0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004105b0(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_005add50(param_1,param_2);
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x94))(param_1);
  if (*(int *)(param_1 + 0x2d4) == 2) {
    if (iVar1 == 0) {
      _DAT_01d1d400 = "..\\core\\baron.cpp";
      _DAT_01d1d404 = 800;
      FUN_005030e0("CBaronWeapon::setWeaponState - I'm drawn, but nobody's carrying me??");
    }
    FUN_00410640(param_1);
    FUN_0040fa70(*(uint *)(param_1 + 0x578),iVar1);
  }
  else if (*(int *)(param_1 + 0x578) != 0) {
    FUN_0040fbc0(*(int *)(param_1 + 0x578),iVar1);
    return;
  }
  return;
}
