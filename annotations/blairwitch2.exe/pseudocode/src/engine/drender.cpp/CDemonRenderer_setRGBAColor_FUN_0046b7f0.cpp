// Name: engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0
// Address: 0046b7f0
// Address Range: [[0046b7f0, 0046b86b]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0(CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0(CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component)

{
  uint uVar1;
  
  uVar1 = blue_component << (DAT_01c3582c & 0x1f) |
          red_component << (DAT_01c35814 & 0x1f) | green_component << (DAT_01c35820 & 0x1f);
  _DAT_01c35e60 = blue_component | red_component << 0x10 | green_component << 8;
  if (_DAT_01c37788 == 0) {
    if (DAT_006141c0 == 0x20) {
      _DAT_01c35e60 = uVar1;
    }
    _DAT_01c35e60 = _DAT_01c35e60 | *(uint *)(this_ptr + 0x14);
    return;
  }
  if (DAT_006141c0 == 0x20) {
    _DAT_01c35e60 = uVar1;
  }
  return;
}
