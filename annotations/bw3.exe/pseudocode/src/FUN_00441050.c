// Name: FUN_00441050
// Address: 00441050
// Address Range: [[00441050, 004410e7]]
// Convention: unknown
// Signature: int FUN_00441050(int param_1,int param_2,int param_3,int *param_4)

#include "nocturne.h"

int FUN_00441050(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_2 * 0x10 + *(int *)(param_1 + 0x10));
  if (-1 < piVar1[1]) {
    if (param_2 != param_3) {
      iVar3 = FUN_00441050(param_1,piVar1[1],param_3,param_4);
      if (iVar3 < 0) {
        return iVar3;
      }
      goto LAB_00441090;
    }
    do {
      piVar1 = (int *)(param_3 * 0x10 + *(int *)(param_1 + 0x10));
      param_3 = piVar1[1];
    } while (-1 < param_3);
  }
  iVar3 = *piVar1;
LAB_00441090:
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
