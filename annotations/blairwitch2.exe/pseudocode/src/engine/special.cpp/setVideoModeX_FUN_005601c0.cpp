// Name: engine_special.cpp_setVideoModeX_FUN_005601c0
// Address: 005601c0
// Address Range: [[005601c0, 0056020d]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setVideoModeX_FUN_005601c0(int width,int height,int bits_per_pixel,int flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_setVideoModeX_FUN_005601c0(int width,int height,int bits_per_pixel,int flags)

{
  int iVar1;
  
  _DAT_0264bd04 = 0;
  if ((_DAT_0264bc60 != (code *)0x0) &&
     (iVar1 = (*_DAT_0264bc60)(width,height,bits_per_pixel,flags), iVar1 != 0)) {
    _DAT_0264bd04 = bits_per_pixel;
    return 1;
  }
  return 0;
}
