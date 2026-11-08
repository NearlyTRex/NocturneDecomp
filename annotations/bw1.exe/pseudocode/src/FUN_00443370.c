// Name: FUN_00443370
// Address: 00443370
// Address Range: [[00443370, 004433e9]]
// Convention: unknown
// Signature: int FUN_00443370(int param_1,int param_2,int *param_3)

#include "nocturne.h"

int FUN_00443370(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_2 * 0x10 + *(int *)(param_1 + 0x10));
  iVar3 = piVar1[1];
  if (iVar3 < 0) {
    iVar3 = *piVar1;
  }
  else {
    iVar3 = FUN_00443370(param_1,iVar3,param_3);
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  iVar2 = (**(code **)(*param_3 + 4))
                    (param_3,*(byte *)(param_2 * 0x10 + *(int *)(param_1 + 0x10)));
  if (-1 < iVar2) {
    return iVar3;
  }
  if (iVar2 == -1) {
    return -2 - param_2;
  }
  return -1;
}
