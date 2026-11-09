// Name: engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0
// Address: 00483cf0
// Address Range: [[00483cf0, 00483d6b]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0(CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0(CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component)

{
  uint uVar1;
  
  uVar1 = blue_component << (DAT_01c4e9ec & 0x1f) |
          red_component << (DAT_01c4e9d4 & 0x1f) | green_component << (DAT_01c4e9e0 & 0x1f);
  _DAT_01c4f020 = blue_component | red_component << 0x10 | green_component << 8;
  if (_DAT_01c50948 == 0) {
    if (DAT_0061b4a0 == 0x20) {
      _DAT_01c4f020 = uVar1;
    }
    _DAT_01c4f020 = _DAT_01c4f020 | *(uint *)(this_ptr + 0x14);
    return;
  }
  if (DAT_0061b4a0 == 0x20) {
    _DAT_01c4f020 = uVar1;
  }
  return;
}
