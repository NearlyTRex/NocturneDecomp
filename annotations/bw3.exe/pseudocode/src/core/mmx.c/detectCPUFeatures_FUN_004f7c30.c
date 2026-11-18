// Name: core_mmx.c_detectCPUFeatures_FUN_004f7c30
// Address: 004f7c30
// Address Range: [[004f7c30, 004f7c60]]
// Convention: __cdecl
// Signature: void __cdecl core_mmx_c_detectCPUFeatures_FUN_004f7c30(void)

#include "nocturne.h"

void __cdecl core_mmx_c_detectCPUFeatures_FUN_004f7c30(void)

{
  core_mmx_c_detectIntelProcessor_FUN_004f7c6c();
  core_mmx_c_detectMMXSupport_FUN_004f7d19();
  g_MMXSupported = (uint)g_CPUInfoMMXSupported;
  g_CPUFamily = (uint)g_CPUInfoFamily;
  g_CPUModel = (uint)g_CPUInfoIntelCPU;
  return;
}
