// Name: core_mmx.c_detectMMXSupport_FUN_004fd579
// Address: 004fd579
// Address Range: [[004fd579, 004fd58e]]
// Convention: __cdecl
// Signature: void __cdecl core_mmx_c_detectMMXSupport_FUN_004fd579(void)

#include "nocturne.h"

void __cdecl core_mmx_c_detectMMXSupport_FUN_004fd579(void)

{
  if ((DAT_006182dd & 0x800000) != 0) {
    DAT_006182e1 = 1;
  }
  return;
}
