// Name: crt_unknown.c_FUN_005b0eb0
// Address: 005b0eb0
// Address Range: [[005b0eb0, 005b0ed1]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005b0eb0(uint param_1)

#include "nocturne.h"

int FUN_005b0eb0(uint param_1)

{
  if (3 < param_1) {
    return 0;
  }
  return (int)&g_StaticFilePoolStart + param_1 * 0x1a;
}
