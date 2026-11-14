// Name: engine_special.cpp_setVideoModeX_FUN_00582c10
// Address: 00582c10
// Address Range: [[00582c10, 00582c5d]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setVideoModeX_FUN_00582c10(int width,int height,int bits_per_pixel,int flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_setVideoModeX_FUN_00582c10(int width,int height,int bits_per_pixel,int flags)

{
  int iVar1;
  
  _DAT_02c834d4 = 0;
  if ((_DAT_02c83430 != (code *)0x0) &&
     (iVar1 = (*_DAT_02c83430)(width,height,bits_per_pixel,flags), iVar1 != 0)) {
    _DAT_02c834d4 = bits_per_pixel;
    return 1;
  }
  return 0;
}
