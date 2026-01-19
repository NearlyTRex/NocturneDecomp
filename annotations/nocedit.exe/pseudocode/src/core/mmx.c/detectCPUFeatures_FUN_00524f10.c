// Name: core_mmx.c_detectCPUFeatures_FUN_00524f10
// Address: 00524f10
// Address Range: [[00524f10, 00524f40]]
// Convention: __cdecl
// Signature: void core_mmx.c_detectCPUFeatures_FUN_00524f10(void)

#include "nocturne.h"

void __cdecl core_mmx_c_detectCPUFeatures_FUN_00524f10(void)

{
  core_mmx_c_detectIntelProcessor_FUN_00524f4c();
  core_mmx_c_detectMMXSupport_FUN_00524ff9();
  g_MMXSupported = (uint)(byte)g_CPUInfoMMXSupported;
  g_CPUFamily = (uint)g_CPUInfoFamily;
  g_CPUModel = (uint)(byte)g_CPUInfoIntelCPU;
  return;
}
