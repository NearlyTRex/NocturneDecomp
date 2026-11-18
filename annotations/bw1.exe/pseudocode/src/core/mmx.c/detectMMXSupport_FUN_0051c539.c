// Name: core_mmx.c_detectMMXSupport_FUN_0051c539
// Address: 0051c539
// Address Range: [[0051c539, 0051c54e]]
// Convention: __cdecl
// Signature: void __cdecl core_mmx_c_detectMMXSupport_FUN_0051c539(void)

#include "nocturne.h"

void __cdecl core_mmx_c_detectMMXSupport_FUN_0051c539(void)

{
  if ((g_CPUFeatureFlags & 0x800000) != 0) {
    g_CPUInfoMMXSupported = '\x01';
  }
  return;
}
