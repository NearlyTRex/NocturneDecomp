// Name: engine_3d.c_setActiveRenderColor_FUN_00405840
// Address: 00405840
// Address Range: [[00405840, 0040586e]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_setActiveRenderColor_FUN_00405840(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_setActiveRenderColor_FUN_00405840(void)

{
  if (-1 < DAT_006b0260) {
    _DAT_01c00c70 = *(uint *)(&DAT_005acbc4 + DAT_006b0260 * 4);
    return;
  }
  _DAT_01c00c70 = -DAT_006b0260;
  return;
}
