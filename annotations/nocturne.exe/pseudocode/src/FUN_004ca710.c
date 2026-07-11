// Name: FUN_004ca710
// Address: 004ca710
// Address Range: [[004ca710, 004ca780]]
// Convention: unknown
// Signature: int * FUN_004ca710(int param_1,int param_2)

#include "nocturne.h"

int * FUN_004ca710(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x5e8 + param_2 * 100);
  if (*piVar1 == 0) {
    return piVar1;
  }
  FUN_00460aa0(DAT_005ae704,piVar1 + 6,piVar1 + 3);
  FUN_004544d0(param_1 + 0x150,0,0xffffffff);
  piVar1 = (int *)thunk_FUN_004cdbc0(DAT_005ae704);
  return piVar1;
}
