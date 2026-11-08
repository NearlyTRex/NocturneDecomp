// Name: FUN_004d9db0
// Address: 004d9db0
// Address Range: [[004d9db0, 004d9f04]]
// Convention: unknown
// Signature: int FUN_004d9db0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004d9db0(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0040c840(param_1,"CWeapon");
  uVar2 = _DAT_02661f38;
  if ((((((iVar1 == 0) &&
         (iVar1 = FUN_0040c840(param_1,"CAmmo"), uVar2 = DAT_007bc3a4, iVar1 == 0)) &&
        (iVar1 = FUN_0040c840(param_1,"CKeyActor"), uVar2 = _DAT_01d02f80, iVar1 == 0)) &&
       ((iVar1 = FUN_0040c840(param_1,"CBoxActor"), uVar2 = DAT_007bc9e8, iVar1 == 0 &&
        (iVar1 = FUN_0040c840(param_1,"CHealthItem"), uVar2 = _DAT_01ceded8, iVar1 == 0))))
      && ((iVar1 = FUN_0040c840(param_1,"CGasMask"), uVar2 = _DAT_01cb81c4, iVar1 == 0 &&
          ((iVar1 = FUN_0040c840(param_1,"CFilmReel"), uVar2 = _DAT_01c3de74, iVar1 == 0 &&
           (iVar1 = FUN_0040c840(param_1,"CTrap"), uVar2 = _DAT_026535b0, iVar1 == 0))))))
     && (iVar1 = FUN_0040c840(param_1,"CBattery"), uVar2 = DAT_007bc85c, iVar1 == 0)) {
    _DAT_01d046a0 = "..\\core\\inv.cpp";
    _DAT_01d046a4 = 0xa3;
    FUN_004e4500("getModel - Can't classify : %s",param_1);
    return 0;
  }
  iVar1 = FUN_0040c8f0(param_1,uVar2);
  return iVar1 + 0x2b4;
}
