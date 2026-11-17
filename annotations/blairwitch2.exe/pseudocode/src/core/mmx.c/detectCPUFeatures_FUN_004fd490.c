// Name: core_mmx.c_detectCPUFeatures_FUN_004fd490
// Address: 004fd490
// Address Range: [[004fd490, 004fd4c0]]
// Convention: __cdecl
// Signature: void __cdecl core_mmx_c_detectCPUFeatures_FUN_004fd490(void)

#include "nocturne.h"

void __cdecl core_mmx_c_detectCPUFeatures_FUN_004fd490(void)

{
  core_mmx_c_detectIntelProcessor_FUN_004fd4cc();
  core_mmx_c_detectMMXSupport_FUN_004fd579();
  g_MMXSupported = (uint)g_CPUInfoMMXSupported;
  g_CPUFamily = (uint)g_CPUInfoFamily;
  g_CPUModel = (uint)g_CPUInfoIntelCPU;
  return;
}
