// Name: FUN_004dd0a0
// Address: 004dd0a0
// Address Range: [[004dd0a0, 004dd26b]]
// Convention: unknown
// Signature: undefined4 FUN_004dd0a0(undefined4 param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint FUN_004dd0a0(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 5) {
    return 1;
  }
  if ((param_3 == 0) && (iVar1 = FUN_0040c840(param_2,&DAT_005db9f2), iVar1 != 0)) {
    return 1;
  }
  if (param_3 == 1) {
    iVar1 = FUN_0040c840(param_2,"CShotgun");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_0040c840(param_2,"CCrossbow");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_0040c840(param_2,"CTommyGun");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_0040c840(param_2,"CElephantGun");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_0040c840(param_2,"CRifle");
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    if (param_3 == 2) {
      iVar1 = FUN_0040c840(param_2,"CFlameThrower");
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_0040c840(param_2,"CLightGun");
      if (iVar1 != 0) {
        return 1;
      }
    }
    if ((((param_3 == 3) && (iVar1 = FUN_0040c840(param_2,"CMelee"), iVar1 != 0)) &&
        (iVar1 = FUN_0040c840(param_2,"CCross"), iVar1 == 0)) &&
       (iVar1 = FUN_0040c840(param_2,"CSimpleCross"), iVar1 == 0)) {
      return 1;
    }
    if (param_3 == 4) {
      iVar1 = FUN_0040c840(param_2,"CDynamite");
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_0040c840(param_2,"CFlashlight");
      if (iVar1 != 0) {
        return 1;
      }
    }
    if (param_3 == 6) {
      iVar1 = FUN_0040c840(param_2,"CSimpleCross");
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_0040c840(param_2,"CCross");
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}
