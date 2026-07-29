// Name: engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00460f20
// Address: 00460f20
// Address Range: [[00460f20, 00460f9b]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00460f20(CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00460f20(CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component)

{
  uint uVar1;
  
  uVar1 = blue_component << (DAT_01c0063c & 0x1f) |
          red_component << (DAT_01c00624 & 0x1f) | green_component << (DAT_01c00630 & 0x1f);
  _DAT_01c00c70 = blue_component | red_component << 0x10 | green_component << 8;
  if (_DAT_01c02594 == 0) {
    if (DAT_005b7624 == 0x20) {
      _DAT_01c00c70 = uVar1;
    }
    _DAT_01c00c70 = _DAT_01c00c70 | this_ptr->alpha_mask;
    return;
  }
  if (DAT_005b7624 == 0x20) {
    _DAT_01c00c70 = uVar1;
  }
  return;
}
