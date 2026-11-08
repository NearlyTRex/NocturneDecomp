// Name: FUN_004b1160
// Address: 004b1160
// Address Range: [[004b1160, 004b1190]]
// Convention: unknown
// Signature: undefined4 FUN_004b1160(int param_1)

#include "nocturne.h"

uint FUN_004b1160(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4);
  (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x1c))(iVar1);
  FUN_004268b0(param_1);
  return 1;
}
