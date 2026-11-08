// Name: FUN_00440440
// Address: 00440440
// Address Range: [[00440440, 00440486]]
// Convention: unknown
// Signature: int FUN_00440440(int *param_1,int *param_2)

#include "nocturne.h"

int FUN_00440440(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00440400(param_1,param_2);
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
