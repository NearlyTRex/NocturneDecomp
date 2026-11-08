// Name: FUN_005b0975
// Address: 005b0975
// Address Range: [[005b0975, 005b09b3]]
// Convention: unknown
// Signature: int * FUN_005b0975(int *param_1)

#include "nocturne.h"

int * FUN_005b0975(int *param_1)

{
  char cVar1;
  
  while( true ) {
    cVar1 = FUN_005b0f93(param_1);
    if (((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) & 3) != 0) ||
       (((&DAT_006074b8)[(byte)(cVar1 + 1)] & 2) == 0)) break;
    FUN_005b0ff9(param_1);
  }
  return param_1;
}
