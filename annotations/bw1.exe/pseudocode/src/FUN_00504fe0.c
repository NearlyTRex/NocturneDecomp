// Name: FUN_00504fe0
// Address: 00504fe0
// Address Range: [[00504fe0, 00505050]]
// Convention: unknown
// Signature: int * FUN_00504fe0(int param_1,int param_2)

#include "nocturne.h"

int * FUN_00504fe0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x5f0 + param_2 * 100);
  if (*piVar1 == 0) {
    return piVar1;
  }
  FUN_00483850(DAT_00612560,piVar1 + 6,piVar1 + 3);
  FUN_004688a0(param_1 + 0x158,0,0xffffffff);
  piVar1 = (int *)thunk_FUN_005084b0(DAT_00612560);
  return piVar1;
}
