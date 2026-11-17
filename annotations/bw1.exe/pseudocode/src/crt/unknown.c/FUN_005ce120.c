// Name: crt_unknown.c_FUN_005ce120
// Address: 005ce120
// Address Range: [[005ce120, 005ce141]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005ce120(uint param_1)

#include "nocturne.h"

int FUN_005ce120(uint param_1)

{
  if (3 < param_1) {
    return 0;
  }
  return (int)&g_FILE_PTR_006262d4 + param_1 * 0x1a;
}
