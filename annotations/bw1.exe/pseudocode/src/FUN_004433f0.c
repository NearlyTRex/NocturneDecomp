// Name: FUN_004433f0
// Address: 004433f0
// Address Range: [[004433f0, 00443487]]
// Convention: unknown
// Signature: int FUN_004433f0(int param_1,int param_2,int param_3,int *param_4)

#include "nocturne.h"

int FUN_004433f0(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_2 * 0x10 + *(int *)(param_1 + 0x10));
  if (-1 < piVar1[1]) {
    if (param_2 != param_3) {
      iVar3 = FUN_004433f0(param_1,piVar1[1],param_3,param_4);
      if (iVar3 < 0) {
        return iVar3;
      }
      goto LAB_00443430;
    }
    do {
      piVar1 = (int *)(param_3 * 0x10 + *(int *)(param_1 + 0x10));
      param_3 = piVar1[1];
    } while (-1 < param_3);
  }
  iVar3 = *piVar1;
LAB_00443430:
  iVar2 = (**(code **)(*param_4 + 4))
                    (param_4,*(byte *)(param_2 * 0x10 + *(int *)(param_1 + 0x10)));
  if (-1 < iVar2) {
    return iVar3;
  }
  if (iVar2 != -1) {
    return -1;
  }
  return -2 - param_2;
}
