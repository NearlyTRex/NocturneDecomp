// Name: FUN_005ab978
// Address: 005ab978
// Address Range: [[005ab978, 005ab9a0]]
// Convention: unknown
// Signature: void FUN_005ab978(int param_1,uint param_2)

#include "nocturne.h"

void FUN_005ab978(int param_1,uint param_2)

{
  if (param_2 != 0) {
    *(uint *)(PTR_DAT_00607bd8 + param_1 * 4) = param_2 | 0x4000;
    return;
  }
  *(uint *)(PTR_DAT_00607bd8 + param_1 * 4) = 0;
  return;
}
