// Name: engine_3d.c_setActiveRenderColor_FUN_00404410
// Address: 00404410
// Address Range: [[00404410, 0040443e]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_setActiveRenderColor_FUN_00404410(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_setActiveRenderColor_FUN_00404410(void)

{
  if (-1 < DAT_00713a5c) {
    _DAT_01c4f020 = *(uint *)(&DAT_00610600 + DAT_00713a5c * 4);
    return;
  }
  _DAT_01c4f020 = -DAT_00713a5c;
  return;
}
