// Name: FUN_004d20c0
// Address: 004d20c0
// Address Range: [[004d20c0, 004d2121]]
// Convention: unknown
// Signature: undefined4 FUN_004d20c0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_004d20c0(int param_1,int param_2)

{
  uint uVar1;
  
  if (0 < *(int *)(param_1 + 0x2d4)) {
    *(float *)(param_2 + 0x2538) = *(float *)(param_1 + 0x2d8) + *(float *)(param_2 + 0x2538);
    if (0x42c80000 < *(int *)(param_2 + 0x2538)) {
      *(uint *)(param_2 + 0x2538) = 0x42c80000;
    }
    uVar1 = 0x01D2130C;
    *(int *)(param_1 + 0x2d4) = *(int *)(param_1 + 0x2d4) + -1;
    FUN_004bd910(uVar1);
  }
  return *(uint *)(param_1 + 0x2d4);
}
