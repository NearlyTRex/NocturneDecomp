// Name: crt_unknown.c_FUN_005c1690
// Address: 005c1690
// Address Range: [[005c1690, 005c16c7]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c1690(uint param_1)

#include "nocturne.h"

uint FUN_005c1690(uint param_1)

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
