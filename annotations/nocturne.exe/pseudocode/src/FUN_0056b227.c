// Name: FUN_0056b227
// Address: 0056b227
// Address Range: [[0056b227, 0056b2b3]]
// Convention: unknown
// Signature: bool FUN_0056b227(int *param_1,int param_2)

#include "nocturne.h"

bool FUN_0056b227(int *param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) == 0) {
    param_1[1] = 0;
    iVar1 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 8);
    if (iVar1 != 0) {
      FUN_0056b3c2(iVar1);
    }
    if ((param_2 == 0) && ((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) & 1) != 0)) {
      FUN_0056fd26(param_1);
      iVar1 = *(int *)(*param_1 + 4) + (int)param_1;
      if ((*(uint *)(iVar1 + 0x10) & 4) != 0) {
        FUN_0056b327(iVar1,2);
      }
    }
    return *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) == 0;
  }
  FUN_0056b327((int)param_1 + *(int *)(*param_1 + 4),2);
  return false;
}
