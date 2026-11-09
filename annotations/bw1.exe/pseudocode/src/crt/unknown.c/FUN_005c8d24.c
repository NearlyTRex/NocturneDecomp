// Name: crt_unknown.c_FUN_005c8d24
// Address: 005c8d24
// Address Range: [[005c8d24, 005c8d4f]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c8d24(int param_1)

#include "nocturne.h"

void FUN_005c8d24(int param_1)

{
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626630)();
  if ((0 < param_1) && (param_1 < DAT_0062683c)) {
    *(uint *)(DAT_00626838 + param_1 * 4) = 0;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626634)();
  return;
}
