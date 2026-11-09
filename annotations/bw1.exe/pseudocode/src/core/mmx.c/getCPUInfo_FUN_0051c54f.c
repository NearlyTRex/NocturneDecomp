// Name: core_mmx.c_getCPUInfo_FUN_0051c54f
// Address: 0051c54f
// Address Range: [[0051c54f, 0051c5a2]]
// Convention: __cdecl
// Signature: bool __cdecl core_mmx_c_getCPUInfo_FUN_0051c54f(uint *param_1)

#include "nocturne.h"

bool __cdecl core_mmx_c_getCPUInfo_FUN_0051c54f(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    core_mmx_c_detectIntelProcessor_FUN_0051c48c();
    core_mmx_c_detectMMXSupport_FUN_0051c539();
    *param_1 = (uint)DAT_0061f7b8;
    param_1[1] = (uint)DAT_0061f7b9;
    param_1[2] = (uint)DAT_0061f7ba;
    param_1[3] = (uint)DAT_0061f7bc;
    param_1[4] = (uint)DAT_0061f7c1;
  }
  return param_1 != (uint *)0x0;
}
