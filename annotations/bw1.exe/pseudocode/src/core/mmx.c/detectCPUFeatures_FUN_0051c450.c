// Name: core_mmx.c_detectCPUFeatures_FUN_0051c450
// Address: 0051c450
// Address Range: [[0051c450, 0051c480]]
// Convention: __cdecl
// Signature: void __cdecl core_mmx_c_detectCPUFeatures_FUN_0051c450(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mmx_c_detectCPUFeatures_FUN_0051c450(void)

{
  core_mmx_c_detectIntelProcessor_FUN_0051c48c();
  core_mmx_c_detectMMXSupport_FUN_0051c539();
  _DAT_01c51d00 = (uint)DAT_0061f7c1;
  _DAT_0061b4b4 = (uint)DAT_0061f7b8;
  _DAT_01c51d04 = (uint)DAT_0061f7bc;
  return;
}
