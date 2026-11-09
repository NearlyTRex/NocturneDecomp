// Name: crt_unknown.c_FUN_005abb64
// Address: 005abb64
// Address Range: [[005abb64, 005abb8f]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005abb64(int param_1)

#include "nocturne.h"

void FUN_005abb64(int param_1)

{
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079d4)();
  if ((0 < param_1) && (param_1 < DAT_00607be0)) {
    *(uint *)(DAT_00607bdc + param_1 * 4) = 0;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079d8)();
  return;
}
