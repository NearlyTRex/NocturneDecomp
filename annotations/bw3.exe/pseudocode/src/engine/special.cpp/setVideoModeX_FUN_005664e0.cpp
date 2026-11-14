// Name: engine_special.cpp_setVideoModeX_FUN_005664e0
// Address: 005664e0
// Address Range: [[005664e0, 0056652d]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setVideoModeX_FUN_005664e0(int width,int height,int bits_per_pixel,int flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_setVideoModeX_FUN_005664e0(int width,int height,int bits_per_pixel,int flags)

{
  int iVar1;
  
  _DAT_02cf6130 = 0;
  if ((_DAT_02cf608c != (code *)0x0) &&
     (iVar1 = (*_DAT_02cf608c)(width,height,bits_per_pixel,flags), iVar1 != 0)) {
    _DAT_02cf6130 = bits_per_pixel;
    return 1;
  }
  return 0;
}
