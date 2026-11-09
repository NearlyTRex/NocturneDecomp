// Name: core_mmx.c_detectMMXSupport_FUN_004f7d19
// Address: 004f7d19
// Address Range: [[004f7d19, 004f7d2e]]
// Convention: __cdecl
// Signature: void __cdecl core_mmx_c_detectMMXSupport_FUN_004f7d19(void)

#include "nocturne.h"

void __cdecl core_mmx_c_detectMMXSupport_FUN_004f7d19(void)

{
  if ((DAT_0060069d & 0x800000) != 0) {
    DAT_006006a1 = 1;
  }
  return;
}
