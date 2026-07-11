// Name: FUN_00454490
// Address: 00454490
// Address Range: [[00454490, 004544af]]
// Convention: unknown
// Signature: int FUN_00454490(int param_1)

#include "nocturne.h"

int FUN_00454490(int param_1)

{
  *(byte *)(param_1 + 0x78) = 0;
  *(uint *)(param_1 + 0x178) = 0;
  FUN_004544b0(param_1);
  return param_1;
}
