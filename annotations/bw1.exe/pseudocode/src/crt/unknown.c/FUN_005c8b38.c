// Name: crt_unknown.c_FUN_005c8b38
// Address: 005c8b38
// Address Range: [[005c8b38, 005c8b60]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c8b38(int param_1,uint param_2)

#include "nocturne.h"

void FUN_005c8b38(int param_1,uint param_2)

{
  if (param_2 != 0) {
    *(uint *)(PTR_DAT_00626834 + param_1 * 4) = param_2 | 0x4000;
    return;
  }
  *(uint *)(PTR_DAT_00626834 + param_1 * 4) = 0;
  return;
}
