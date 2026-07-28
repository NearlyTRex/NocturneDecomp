// Name: core_mmx.c_detectMMXSupport_FUN_004d9f59
// Address: 004d9f59
// Address Range: [[004d9f59, 004d9f6e]]
// Convention: __cdecl
// Signature: void __cdecl core_mmx_c_detectMMXSupport_FUN_004d9f59(void)

#include "nocturne.h"

void __cdecl core_mmx_c_detectMMXSupport_FUN_004d9f59(void)

{
  if ((DAT_005bb11d & 0x800000) != 0) {
    DAT_005bb121 = 1;
  }
  return;
}
