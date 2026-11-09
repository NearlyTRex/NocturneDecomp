// Name: core_mmx.c_detectCPUFeatures_FUN_004fd490
// Address: 004fd490
// Address Range: [[004fd490, 004fd4c0]]
// Convention: __cdecl
// Signature: void __cdecl core_mmx_c_detectCPUFeatures_FUN_004fd490(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mmx_c_detectCPUFeatures_FUN_004fd490(void)

{
  core_mmx_c_detectIntelProcessor_FUN_004fd4cc();
  core_mmx_c_detectMMXSupport_FUN_004fd579();
  _DAT_01c38b40 = (uint)DAT_006182e1;
  _DAT_006141d4 = (uint)DAT_006182d8;
  _DAT_01c38b44 = (uint)DAT_006182dc;
  return;
}
