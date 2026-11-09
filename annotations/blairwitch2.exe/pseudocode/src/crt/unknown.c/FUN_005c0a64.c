// Name: crt_unknown.c_FUN_005c0a64
// Address: 005c0a64
// Address Range: [[005c0a64, 005c0a8f]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c0a64(int param_1)

#include "nocturne.h"

void FUN_005c0a64(int param_1)

{
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2d8)();
  if ((0 < param_1) && (param_1 < DAT_0061f4dc)) {
    *(uint *)(DAT_0061f4d8 + param_1 * 4) = 0;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2dc)();
  return;
}
