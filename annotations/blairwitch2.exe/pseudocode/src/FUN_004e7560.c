// Name: FUN_004e7560
// Address: 004e7560
// Address Range: [[004e7560, 004e756c]]
// Convention: unknown
// Signature: int FUN_004e7560(undefined4 param_1,int param_2)

#include "nocturne.h"

int FUN_004e7560(uint param_1,int param_2)

{
  param_2 = param_2 + 1;
  if (0xb < param_2) {
    param_2 = 0;
  }
  return param_2;
}
