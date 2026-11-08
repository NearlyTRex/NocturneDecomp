// Name: FUN_005c170c
// Address: 005c170c
// Address Range: [[005c170c, 005c18f2]]
// Convention: unknown
// Signature: undefined4 FUN_005c170c(undefined4 *param_1,int param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005c17d8) */

uint FUN_005c170c(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  (*(code *)PTR_FUN_00626600)(param_1[4]);
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
      iVar2 = FUN_005c6d50(param_1);
      if (iVar2 != 0) {
        if ((param_3 == 0) && (param_2 < 0)) {
          FUN_005c6450(9);
        }
        (*(code *)PTR_FUN_00626604)(param_1[4]);
        return 0xffffffff;
      }
    }
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xeb;
    iVar2 = FUN_005c6e80(param_1[4],param_2,param_3);
    if (iVar2 == -1) {
      (*(code *)PTR_FUN_00626604)(param_1[4]);
      return 0xffffffff;
    }
    goto LAB_005c18df;
  }
  if (param_3 == 0) {
    iVar2 = FUN_005c7510(param_1[4]);
    iVar2 = FUN_005c16b0(param_2 - (iVar2 - param_1[1]),param_1);
    if (iVar2 == 0) goto LAB_005c18df;
    iVar2 = FUN_005c6e80(param_1[4],param_2,0);
    if (iVar2 == -1) {
      (*(code *)PTR_FUN_00626604)(param_1[4]);
      return 0xffffffff;
    }
  }
  else {
    if (1 < param_3) {
      if (param_3 != 2) {
        FUN_005c6450(9);
        (*(code *)PTR_FUN_00626604)(param_1[4]);
        return 0xffffffff;
      }
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xef;
      uVar1 = *(uint *)(param_1[2] + 8);
      param_1[1] = 0;
      *param_1 = uVar1;
      iVar2 = FUN_005c6e80(param_1[4],param_2,2);
      if (iVar2 == -1) {
        (*(code *)PTR_FUN_00626604)(param_1[4]);
        return 0xffffffff;
      }
      goto LAB_005c18df;
    }
    iVar2 = param_1[1];
    iVar3 = FUN_005c16b0(param_2,param_1);
    if (iVar3 == 0) goto LAB_005c18df;
    iVar2 = FUN_005c6e80(param_1[4],param_2 - iVar2,param_3);
    if (iVar2 == -1) {
      (*(code *)PTR_FUN_00626604)(param_1[4]);
      return 0xffffffff;
    }
  }
  FUN_005c16f4(param_1);
LAB_005c18df:
  (*(code *)PTR_FUN_00626604)(param_1[4]);
  return 0;
}
