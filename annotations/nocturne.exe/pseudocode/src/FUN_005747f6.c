// Name: FUN_005747f6
// Address: 005747f6
// Address Range: [[005747f6, 00574816]]
// Convention: unknown
// Signature: undefined4 FUN_005747f6(int param_1)

#include "nocturne.h"

uint FUN_005747f6(int param_1)

{
  if ((*(uint *)(param_1 + 0x10) <= *(uint *)(param_1 + 0x14)) &&
     (*(uint *)(param_1 + 0x20) <= *(uint *)(param_1 + 0x18))) {
    return 0;
  }
  return 0xffffffff;
}
