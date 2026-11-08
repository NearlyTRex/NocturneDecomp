// Name: FUN_005a4c50
// Address: 005a4c50
// Address Range: [[005a4c50, 005a4d40]]
// Convention: unknown
// Signature: void FUN_005a4c50(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void FUN_005a4c50(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    FUN_0059d650(param_1 + 0x10af8,"RangeAttack");
  }
  else {
    FUN_0059e8c0(param_1,param_2,param_3);
    if ((param_3 == 1) &&
       (iVar1 = FUN_0059daa0(param_1 + 0x10af8,"RangeAttack"), iVar1 != 0)) {
      FUN_005a4e90(param_1,param_2);
      return;
    }
  }
  if (param_3 == 0) {
    FUN_0059d650(param_1 + 0x10af8,"MeleeAttack");
  }
  else if ((param_3 == 1) &&
          (iVar1 = FUN_0059daa0(param_1 + 0x10af8,"MeleeAttack"), iVar1 != 0)) {
    FUN_005a4fe0(param_1,param_2);
    return;
  }
  if (param_3 == 0) {
    FUN_0059d650(param_1 + 0x10af8,"SupportStand");
    return;
  }
  if ((param_3 == 1) &&
     (iVar1 = FUN_0059daa0(param_1 + 0x10af8,"SupportStand"), iVar1 != 0)) {
    FUN_005a5130(param_1,param_2);
    return;
  }
  return;
}
