// Name: core_mmx.c_getCPUInfo_FUN_004d9f6f
// Address: 004d9f6f
// Address Range: [[004d9f6f, 004d9fc2]]
// Convention: unknown
// Signature: bool core_mmx_c_getCPUInfo_FUN_004d9f6f(uint *param_1)

#include "nocturne.h"

bool core_mmx_c_getCPUInfo_FUN_004d9f6f(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    core_mmx_c_detectIntelProcessor_FUN_004d9eac();
    core_mmx_c_detectMMXSupport_FUN_004d9f59();
    *param_1 = (uint)DAT_005bb118;
    param_1[1] = (uint)DAT_005bb119;
    param_1[2] = (uint)DAT_005bb11a;
    param_1[3] = (uint)DAT_005bb11c;
    param_1[4] = (uint)DAT_005bb121;
  }
  return param_1 != (uint *)0x0;
}
