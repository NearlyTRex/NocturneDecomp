// Name: FUN_0056e174
// Address: 0056e174
// Address Range: [[0056e174, 0056e19f]]
// Convention: unknown
// Signature: void FUN_0056e174(int param_1)

#include "nocturne.h"

void FUN_0056e174(int param_1)

{
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1af0)();
  if ((0 < param_1) && (param_1 < DAT_005c1f58)) {
    *(uint *)(DAT_005c1f54 + param_1 * 4) = 0;
  }
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1af4)();
  return;
}
