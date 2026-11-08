// Name: FUN_005abdf0
// Address: 005abdf0
// Address Range: [[005abdf0, 005abe27]]
// Convention: unknown
// Signature: undefined4 FUN_005abdf0(uint param_1)

#include "nocturne.h"

uint FUN_005abdf0(uint param_1)

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
