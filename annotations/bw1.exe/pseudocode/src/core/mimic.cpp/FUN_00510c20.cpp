// Name: FUN_00510c20
// Address: 00510c20
// Address Range: [[00510c20, 00510d87]]
// Convention: unknown
// Signature: int FUN_00510c20(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00510c20(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float local_18 [2];
  
  if (*(int *)(param_1 + 0x47ac0) == 0) {
    _DAT_01d1d400 = "..\\core\\mimic.cpp";
    _DAT_01d1d404 = 0x4c9;
    FUN_005030e0("CMimic::processMorph - can't process morph unless we've started morph!");
  }
  fVar1 = param_2 / _DAT_006039d4 + *(float *)(param_1 + 0x47abc);
  *(float *)(param_1 + 0x47abc) = fVar1;
  if (1.0 <= fVar1) {
    FUN_0051bd60(0x01D2C900,*(uint *)(param_1 + 0x47ac0));
    FUN_0051b160(0x01D2C900,*(uint *)(param_1 + 0x47ac0));
    *(uint *)(param_1 + 0x47ac0) = 0;
    iVar2 = FUN_0051b740(0x01D2C900,param_1,1);
  }
  else {
    local_18[0] = param_2;
    while (0.0 < local_18[0]) {
      FUN_00524270(param_1 + 0x158,local_18);
    }
    local_18[0] = param_2;
    while (0.0 < local_18[0]) {
      FUN_00524270(*(int *)(param_1 + 0x47ac0) + 0x158,local_18);
    }
    FUN_00523290(param_1 + 0x46e90,0,param_1 + 0x158,0);
    FUN_00523290(param_1 + 0x46e90,1,*(int *)(param_1 + 0x47ac0) + 0x158,0);
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x46ee4)) {
      iVar3 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(float *)(*(int *)(param_1 + 0x46ee8) + 4 + iVar3) =
             -*(float *)(*(int *)(param_1 + 0x46ee8) + 4 + iVar3);
        iVar3 = iVar3 + 0x10;
      } while (iVar2 < *(int *)(param_1 + 0x46ee4));
      return iVar2;
    }
  }
  return iVar2;
}
