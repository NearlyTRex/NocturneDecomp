// Name: FUN_004427e0
// Address: 004427e0
// Address Range: [[004427e0, 00442826]]
// Convention: unknown
// Signature: int FUN_004427e0(int *param_1,int *param_2)

#include "nocturne.h"

int FUN_004427e0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004427a0(param_1,param_2);
  if (-1 < iVar1) {
    if (*param_1 < 1) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(*param_2 + 4))(param_2,(char)param_1[1]);
      if (-1 < iVar1) {
        *param_1 = 0;
        param_1[1] = 0;
        return 0;
      }
    }
  }
  return iVar1;
}
