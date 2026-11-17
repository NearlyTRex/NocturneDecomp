// Name: core_mmx.c_detectCPUFeatures_FUN_0051c450
// Address: 0051c450
// Address Range: [[0051c450, 0051c480]]
// Convention: __cdecl
// Signature: void __cdecl core_mmx_c_detectCPUFeatures_FUN_0051c450(void)

#include "nocturne.h"

void __cdecl core_mmx_c_detectCPUFeatures_FUN_0051c450(void)

{
  core_mmx_c_detectIntelProcessor_FUN_0051c48c();
  core_mmx_c_detectMMXSupport_FUN_0051c539();
  g_MMXSupported = (uint)g_CPUInfoMMXSupported;
  g_CPUFamily = (uint)g_CPUInfoFamily;
  g_CPUModel = (uint)g_CPUInfoIntelCPU;
  return;
}
