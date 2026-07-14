// Name: FUN_1000a900
// Address: 1000a900
// Address Range: [[1000a900, 1000a92e]]
// Convention: unknown
// Signature: uint FUN_1000a900(int param_1,int *param_2)

#include "nocturne.h"

uint FUN_1000a900(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  do {
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 3;
  } while (piVar1 < param_2 + 0x0000000A * 3);
  return -(uint)(*piVar1 == param_1) & (uint)piVar1;
}
