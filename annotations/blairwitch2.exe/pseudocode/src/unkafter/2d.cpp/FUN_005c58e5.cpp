// Name: unkafter_2d.cpp_FUN_005c58e5
// Address: 005c58e5
// Address Range: [[005c58e5, 005c5923]]
// Convention: unknown
// Signature: int * unkafter_2d_cpp_FUN_005c58e5(int *param_1)

#include "nocturne.h"

int * unkafter_2d_cpp_FUN_005c58e5(int *param_1)

{
  char cVar1;
  
  while( true ) {
    cVar1 = unkafter_2d_cpp_FUN_005c5f03(param_1);
    if (((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) & 3) != 0) ||
       (((&DAT_0061ed94)[(byte)(cVar1 + 1)] & 2) == 0)) break;
    unkafter_2d_cpp_FUN_005c5f69(param_1);
  }
  return param_1;
}
