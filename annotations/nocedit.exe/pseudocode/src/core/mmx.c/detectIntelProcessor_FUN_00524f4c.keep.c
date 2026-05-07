// Name: core_mmx.c_detectIntelProcessor_FUN_00524f4c
// Address: 00524f4c
// MANUAL RECONSTRUCTION
// Address Range: [[00524f4c, 00524ff8]]
// Convention: __cdecl
// Signature: void __cdecl core_mmx_c_detectIntelProcessor_FUN_00524f4c(void)

#include "nocturne.h"

void __cdecl core_mmx_c_detectIntelProcessor_FUN_00524f4c(void)
{
  g_CPUIDSupported = 1;
  g_CPUInfoIntelCPU = 1;
  g_CPUInfoFamily = 6;
  g_CPUInfoModel = 0;
  g_CPUInfoStepping = 0;
  g_CPUInfoBasicInfo2 = 0;
  g_CPUInfoBaseInfo3 = 0;
  g_CPUFeatureFlags = 0x800000;
}
