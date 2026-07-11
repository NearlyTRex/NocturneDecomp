// Name: FUN_00565eb5
// Address: 00565eb5
// Address Range: [[00565eb5, 00565f13]]
// Convention: unknown
// Signature: void FUN_00565eb5(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00565eb5(int *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 4) + (int)param_1;
  if (*(int *)(iVar1 + 4) != 0) {
    iVar1 = FUN_0056cd9b(*(int *)(iVar1 + 4),param_2,param_3,param_4);
    if (iVar1 != 0) {
      FUN_00565e94((int)param_1 + *(int *)(*param_1 + 4),0);
      return;
    }
    iVar1 = (int)param_1 + *(int *)(*param_1 + 4);
  }
  FUN_0056b327(iVar1,2);
  return;
}
