// Name: core_mmx.c_detectCPUFeatures_FUN_004d9e70
// Address: 004d9e70
// Address Range: [[004d9e70, 004d9ea0]]
// Convention: __cdecl
// Signature: void __cdecl core_mmx_c_detectCPUFeatures_FUN_004d9e70(void)

#include "nocturne.h"

void __cdecl core_mmx_c_detectCPUFeatures_FUN_004d9e70(void)

{
  core_mmx_c_detectIntelProcessor_FUN_004d9eac();
  core_mmx_c_detectMMXSupport_FUN_004d9f59();
  g_MMXSupported = (uint)g_CPUInfoMMXSupported;
  g_CPUFamily = (uint)g_CPUInfoFamily;
  g_CPUModel = (uint)g_CPUInfoIntelCPU;
  return;
}
