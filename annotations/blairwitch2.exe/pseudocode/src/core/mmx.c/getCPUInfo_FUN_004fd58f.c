// Name: core_mmx.c_getCPUInfo_FUN_004fd58f
// Address: 004fd58f
// Address Range: [[004fd58f, 004fd5e2]]
// Convention: __cdecl
// Signature: bool __cdecl core_mmx_c_getCPUInfo_FUN_004fd58f(uint *param_1)

#include "nocturne.h"

bool __cdecl core_mmx_c_getCPUInfo_FUN_004fd58f(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    core_mmx_c_detectIntelProcessor_FUN_004fd4cc();
    core_mmx_c_detectMMXSupport_FUN_004fd579();
    *param_1 = (uint)DAT_006182d8;
    param_1[1] = (uint)DAT_006182d9;
    param_1[2] = (uint)DAT_006182da;
    param_1[3] = (uint)DAT_006182dc;
    param_1[4] = (uint)DAT_006182e1;
  }
  return param_1 != (uint *)0x0;
}
