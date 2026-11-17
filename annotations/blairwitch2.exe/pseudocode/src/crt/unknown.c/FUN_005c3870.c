// Name: crt_unknown.c_FUN_005c3870
// Address: 005c3870
// Address Range: [[005c3870, 005c38cc]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c3870(uint param_1)

#include "nocturne.h"

uint FUN_005c3870(uint param_1)

{
  BOOL BVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((-1 < (int)param_1) && (param_1 <= g_UINT_0061f480)) {
    (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2a8)(param_1);
    BVar1 = FlushFileBuffers(g_SIOControlBlock_PTR_0061f4d8->standard_handles[param_1]);
    if (BVar1 == 0) {
      FUN_005c036c();
      uVar2 = 0xffffffff;
    }
    (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2ac)(param_1);
    return uVar2;
  }
  setErrno(4);
  return 0xffffffff;
}
