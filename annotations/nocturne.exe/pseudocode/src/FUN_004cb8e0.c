// Name: FUN_004cb8e0
// Address: 004cb8e0
// Address Range: [[004cb8e0, 004cb8ec]]
// Convention: unknown
// Signature: int FUN_004cb8e0(undefined4 param_1,int param_2)

#include "nocturne.h"

int FUN_004cb8e0(uint param_1,int param_2)

{
  param_2 = param_2 + 1;
  if (0xb < param_2) {
    param_2 = 0;
  }
  return param_2;
}
