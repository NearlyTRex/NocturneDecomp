// Name: core_mmx.c_detectMMXSupport_FUN_00524ff9
// Address: 00524ff9
// Address Range: [[00524ff9, 0052500e]]
// Convention: __cdecl
// Signature: void core_mmx.c_detectMMXSupport_FUN_00524ff9(void)

#include "nocturne.h"

void __cdecl core_mmx_c_detectMMXSupport_FUN_00524ff9(void)

{
  if ((g_CPUFeatureFlags & 0x800000) != 0) {
    g_CPUInfoMMXSupported = 1;
  }
  return;
}
