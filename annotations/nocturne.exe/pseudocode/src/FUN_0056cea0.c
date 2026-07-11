// Name: FUN_0056cea0
// Address: 0056cea0
// Address Range: [[0056cea0, 0056ced7]]
// Convention: unknown
// Signature: undefined4 FUN_0056cea0(uint param_1)

#include "nocturne.h"

uint FUN_0056cea0(uint param_1)

{
  if ((param_1 & 3) == 0) {
    if ((int)((ulonglong)param_1 % 100) != 0) {
      return 1;
    }
    if ((int)(((ulonglong)param_1 % 100 << 0x20 | (ulonglong)param_1) % 400) == 0) {
      return 1;
    }
  }
  return 0;
}
