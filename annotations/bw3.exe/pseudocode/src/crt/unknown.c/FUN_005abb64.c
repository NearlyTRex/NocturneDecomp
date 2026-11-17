// Name: crt_unknown.c_FUN_005abb64
// Address: 005abb64
// Address Range: [[005abb64, 005abb8f]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005abb64(int param_1)

#include "nocturne.h"

void FUN_005abb64(int param_1)

{
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079d4)();
  if ((0 < param_1) && (param_1 < g_INT_00607be0)) {
    g_SIOControlBlock_PTR_00607bdc->standard_handles[param_1] = (HANDLE)0x0;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079d8)();
  return;
}
