// Name: crt_unknown.c_FUN_00570a70
// Address: 00570a70
// Address Range: [[00570a70, 00570ac1]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_00570a70(uint param_1)

#include "nocturne.h"

int FUN_00570a70(uint param_1)

{
  int iVar1;
  
  if ((-1 < (int)param_1) && (param_1 <= 0x00000014)) {
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(param_1);
    iVar1 = close(param_1);
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(param_1);
    (*(code *)PTR_crt_io_c_invalidate_handle_wrapper_FUN_005671f8_005c1acc)(param_1);
    return iVar1;
  }
  setErrno(4);
  return -1;
}
