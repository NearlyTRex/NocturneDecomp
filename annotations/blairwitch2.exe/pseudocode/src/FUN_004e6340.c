// Name: FUN_004e6340
// Address: 004e6340
// Address Range: [[004e6340, 004e63b0]]
// Convention: unknown
// Signature: int * FUN_004e6340(int param_1,int param_2)

#include "nocturne.h"

int * FUN_004e6340(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x74c + param_2 * 100);
  if (*piVar1 == 0) {
    return piVar1;
  }
  FUN_0046b350(DAT_0060b280,piVar1 + 6,piVar1 + 3);
  FUN_0044fcc0(param_1 + 0x2b4,0,0xffffffff);
  piVar1 = (int *)thunk_FUN_004e9810(DAT_0060b280);
  return piVar1;
}
