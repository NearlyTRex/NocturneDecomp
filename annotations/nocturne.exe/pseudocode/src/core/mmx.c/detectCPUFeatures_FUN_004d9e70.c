// Name: core_mmx.c_detectCPUFeatures_FUN_004d9e70
// Address: 004d9e70
// Address Range: [[004d9e70, 004d9ea0]]
// Convention: __cdecl
// Signature: void __cdecl core_mmx_c_detectCPUFeatures_FUN_004d9e70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mmx_c_detectCPUFeatures_FUN_004d9e70(void)

{
  core_mmx_c_detectIntelProcessor_FUN_004d9eac();
  core_mmx_c_detectMMXSupport_FUN_004d9f59();
  _DAT_01c03948 = (uint)DAT_005bb121;
  DAT_005b7638 = (uint)DAT_005bb118;
  _DAT_01c0394c = (uint)DAT_005bb11c;
  return;
}
