// Name: engine_3d.c_setActiveRenderColor_FUN_00404560
// Address: 00404560
// Address Range: [[00404560, 0040458e]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_setActiveRenderColor_FUN_00404560(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_setActiveRenderColor_FUN_00404560(void)

{
  if (-1 < DAT_0070ca5c) {
    _DAT_01c35e60 = *(uint *)(&DAT_006094d0 + DAT_0070ca5c * 4);
    return;
  }
  _DAT_01c35e60 = -DAT_0070ca5c;
  return;
}
