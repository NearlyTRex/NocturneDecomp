// Name: crt_unknown.c_FUN_005af142
// Address: 005af142
// Address Range: [[005af142, 005af1ce]]
// Convention: unknown
// Signature: bool crt_unknown_c_FUN_005af142(int *param_1,int param_2)

#include "nocturne.h"

bool FUN_005af142(int *param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) == 0) {
    param_1[1] = 0;
    iVar1 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 8);
    if (iVar1 != 0) {
      FUN_005b0a2c(iVar1);
    }
    if ((param_2 == 0) && ((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) & 1) != 0)) {
      FUN_005b0975(param_1);
      iVar1 = *(int *)(*param_1 + 4) + (int)param_1;
      if ((*(uint *)(iVar1 + 0x10) & 4) != 0) {
        FUN_005abc85(iVar1,2);
      }
    }
    return *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) == 0;
  }
  FUN_005abc85((int)param_1 + *(int *)(*param_1 + 4),2);
  return false;
}
