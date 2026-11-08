// Name: FUN_004e25c0
// Address: 004e25c0
// Address Range: [[004e25c0, 004e25e1]]
// Convention: unknown
// Signature: void FUN_004e25c0(int param_1)

#include "nocturne.h"

void FUN_004e25c0(int param_1)

{
  if (-1 < param_1) {
    if (0xffff < param_1) {
      param_1 = 0xffff;
    }
    DAT_00617e40 = param_1;
    return;
  }
  DAT_00617e40 = 0;
  return;
}
