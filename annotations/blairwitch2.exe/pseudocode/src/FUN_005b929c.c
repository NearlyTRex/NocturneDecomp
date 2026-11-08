// Name: FUN_005b929c
// Address: 005b929c
// Address Range: [[005b929c, 005b9482]]
// Convention: unknown
// Signature: undefined4 FUN_005b929c(undefined4 *param_1,int param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005b9368) */

uint FUN_005b929c(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  (*(code *)PTR_FUN_0061f2a8)(param_1[4]);
  if ((*(byte *)(param_1 + 3) & 6) != 0) {
    if ((*(byte *)((int)param_1 + 0xd) & 0x10) == 0) {
      if (param_3 == 1) {
        param_2 = param_2 - param_1[1];
      }
      uVar1 = *(uint *)(param_1[2] + 8);
      param_1[1] = 0;
      *param_1 = uVar1;
    }
    else {
      iVar2 = FUN_005bea80(param_1);
      if (iVar2 != 0) {
        if ((param_3 == 0) && (param_2 < 0)) {
          FUN_005be180(9);
        }
        (*(code *)PTR_FUN_0061f2ac)(param_1[4]);
        return 0xffffffff;
      }
    }
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xeb;
    iVar2 = FUN_005bebb0(param_1[4],param_2,param_3);
    if (iVar2 == -1) {
      (*(code *)PTR_FUN_0061f2ac)(param_1[4]);
      return 0xffffffff;
    }
    goto LAB_005b946f;
  }
  if (param_3 == 0) {
    iVar2 = FUN_005bf250(param_1[4]);
    iVar2 = FUN_005b9240(param_2 - (iVar2 - param_1[1]),param_1);
    if (iVar2 == 0) goto LAB_005b946f;
    iVar2 = FUN_005bebb0(param_1[4],param_2,0);
    if (iVar2 == -1) {
      (*(code *)PTR_FUN_0061f2ac)(param_1[4]);
      return 0xffffffff;
    }
  }
  else {
    if (1 < param_3) {
      if (param_3 != 2) {
        FUN_005be180(9);
        (*(code *)PTR_FUN_0061f2ac)(param_1[4]);
        return 0xffffffff;
      }
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xef;
      uVar1 = *(uint *)(param_1[2] + 8);
      param_1[1] = 0;
      *param_1 = uVar1;
      iVar2 = FUN_005bebb0(param_1[4],param_2,2);
      if (iVar2 == -1) {
        (*(code *)PTR_FUN_0061f2ac)(param_1[4]);
        return 0xffffffff;
      }
      goto LAB_005b946f;
    }
    iVar2 = param_1[1];
    iVar3 = FUN_005b9240(param_2,param_1);
    if (iVar3 == 0) goto LAB_005b946f;
    iVar2 = FUN_005bebb0(param_1[4],param_2 - iVar2,param_3);
    if (iVar2 == -1) {
      (*(code *)PTR_FUN_0061f2ac)(param_1[4]);
      return 0xffffffff;
    }
  }
  FUN_005b9284(param_1);
LAB_005b946f:
  (*(code *)PTR_FUN_0061f2ac)(param_1[4]);
  return 0;
}
