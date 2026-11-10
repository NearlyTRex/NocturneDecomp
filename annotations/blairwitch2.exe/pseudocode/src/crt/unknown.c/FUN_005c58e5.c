// Name: crt_unknown.c_FUN_005c58e5
// Address: 005c58e5
// Address Range: [[005c58e5, 005c5923]]
// Convention: unknown
// Signature: int * crt_unknown_c_FUN_005c58e5(int *param_1)

#include "nocturne.h"

int * FUN_005c58e5(int *param_1)

{
  char cVar1;
  
  while( true ) {
    cVar1 = FUN_005c5f03(param_1);
    if (((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) & 3) != 0) ||
       (((&DAT_0061ed94)[(byte)(cVar1 + 1)] & 2) == 0)) break;
    FUN_005c5f69(param_1);
  }
  return param_1;
}
