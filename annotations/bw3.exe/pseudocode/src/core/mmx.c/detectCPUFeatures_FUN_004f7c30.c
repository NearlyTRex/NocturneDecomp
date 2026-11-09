// Name: core_mmx.c_detectCPUFeatures_FUN_004f7c30
// Address: 004f7c30
// Address Range: [[004f7c30, 004f7c60]]
// Convention: __cdecl
// Signature: void __cdecl core_mmx_c_detectCPUFeatures_FUN_004f7c30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mmx_c_detectCPUFeatures_FUN_004f7c30(void)

{
  core_mmx_c_detectIntelProcessor_FUN_004f7c6c();
  core_mmx_c_detectMMXSupport_FUN_004f7d19();
  _DAT_01c6e2a0 = (uint)DAT_006006a1;
  _DAT_005fba34 = (uint)DAT_00600698;
  _DAT_01c6e2a4 = (uint)DAT_0060069c;
  return;
}
