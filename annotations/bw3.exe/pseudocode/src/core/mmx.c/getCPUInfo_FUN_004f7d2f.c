// Name: core_mmx.c_getCPUInfo_FUN_004f7d2f
// Address: 004f7d2f
// Address Range: [[004f7d2f, 004f7d82]]
// Convention: __cdecl
// Signature: bool __cdecl core_mmx_c_getCPUInfo_FUN_004f7d2f(uint *param_1)

#include "nocturne.h"

bool __cdecl core_mmx_c_getCPUInfo_FUN_004f7d2f(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    core_mmx_c_detectIntelProcessor_FUN_004f7c6c();
    core_mmx_c_detectMMXSupport_FUN_004f7d19();
    *param_1 = (uint)DAT_00600698;
    param_1[1] = (uint)DAT_00600699;
    param_1[2] = (uint)DAT_0060069a;
    param_1[3] = (uint)DAT_0060069c;
    param_1[4] = (uint)DAT_006006a1;
  }
  return param_1 != (uint *)0x0;
}
