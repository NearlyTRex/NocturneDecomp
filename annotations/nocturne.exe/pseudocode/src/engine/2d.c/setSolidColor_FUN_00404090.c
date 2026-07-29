// Name: engine_2d.c_setSolidColor_FUN_00404090
// Address: 00404090
// Address Range: [[00404090, 00404112]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_setSolidColor_FUN_00404090(int red_component,int green_component,int blue_component)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_setSolidColor_FUN_00404090(int red_component,int green_component,int blue_component)

{
  _DAT_01c039b0 = green_component;
  _DAT_01c039b4 = blue_component;
  _DAT_01c039ac = red_component;
  _DAT_01c039a8 = red_component << 0x10 | green_component << 8 | blue_component;
  if ((DAT_005b7624 != 0x10) && (DAT_005b7624 == 0x20)) {
    _DAT_01c039a8 =
         blue_component << (DAT_01c0063c & 0x1f) |
         red_component << (DAT_01c00624 & 0x1f) | green_component << (DAT_01c00630 & 0x1f);
  }
  if (_DAT_01c02594 == 0) {
    return;
  }
  engine_special_cpp_setFogColor_FUN_00532af0(red_component,green_component,blue_component);
  return;
}
