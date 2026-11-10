// Name: crt_unknown.c_FUN_005cdbe5
// Address: 005cdbe5
// Address Range: [[005cdbe5, 005cdc23]]
// Convention: unknown
// Signature: int * crt_unknown_c_FUN_005cdbe5(int *param_1)

#include "nocturne.h"

int * FUN_005cdbe5(int *param_1)

{
  char cVar1;
  
  while( true ) {
    cVar1 = FUN_005ce203(param_1);
    if (((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) & 3) != 0) ||
       (((&DAT_00626114)[(byte)(cVar1 + 1)] & 2) == 0)) break;
    FUN_005ce269(param_1);
  }
  return param_1;
}
