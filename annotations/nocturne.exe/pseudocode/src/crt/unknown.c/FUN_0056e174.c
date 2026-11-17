// Name: crt_unknown.c_FUN_0056e174
// Address: 0056e174
// Address Range: [[0056e174, 0056e19f]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056e174(int param_1)

#include "nocturne.h"

void FUN_0056e174(int param_1)

{
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1af0)();
  if ((0 < param_1) && (param_1 < g_INT_005c1f58)) {
    g_SIOControlBlock_PTR_005c1f54->standard_handles[param_1] = (HANDLE)0x0;
  }
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1af4)();
  return;
}
