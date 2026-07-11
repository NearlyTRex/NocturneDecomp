// Name: FUN_0056fd26
// Address: 0056fd26
// Address Range: [[0056fd26, 0056fd64]]
// Convention: unknown
// Signature: int * FUN_0056fd26(int *param_1)

#include "nocturne.h"

int * FUN_0056fd26(int *param_1)

{
  char cVar1;
  
  while( true ) {
    cVar1 = FUN_00571c60(param_1);
    if (((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) & 3) != 0) ||
       (((&DAT_005c168c)[(byte)(cVar1 + 1)] & 2) == 0)) break;
    FUN_00571cc6(param_1);
  }
  return param_1;
}
