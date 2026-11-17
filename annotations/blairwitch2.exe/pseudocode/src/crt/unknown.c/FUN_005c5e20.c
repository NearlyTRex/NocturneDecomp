// Name: crt_unknown.c_FUN_005c5e20
// Address: 005c5e20
// Address Range: [[005c5e20, 005c5e41]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c5e20(uint param_1)

#include "nocturne.h"

int FUN_005c5e20(uint param_1)

{
  if (3 < param_1) {
    return 0;
  }
  return (int)&g_FILE_PTR_0061ef54 + param_1 * 0x1a;
}
