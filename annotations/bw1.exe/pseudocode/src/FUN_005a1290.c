// Name: FUN_005a1290
// Address: 005a1290
// Address Range: [[005a1290, 005a12c4]]
// Convention: unknown
// Signature: undefined4 FUN_005a1290(int param_1,int param_2)

#include "nocturne.h"

uint FUN_005a1290(int param_1,int param_2)

{
  if ((((-1 < param_2) && (param_2 < 0x100)) && (*(int *)(param_1 + 4) != 0)) &&
     (0 < *(int *)(param_1 + 0xc))) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    return 1;
  }
  return 0;
}
