// Name: engine_special.cpp_setVideoModeX_FUN_005664e0
// Address: 005664e0
// Address Range: [[005664e0, 0056652d]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setVideoModeX_FUN_005664e0(int width,int height,int bits_per_pixel,int flags)

#include "nocturne.h"

int __cdecl engine_special_cpp_setVideoModeX_FUN_005664e0(int width,int height,int bits_per_pixel,int flags)

{
  int iVar1;
  
  g_INT_02cf6130 = 0;
  if ((g_APIDLL_setVideoModeX != (byte *)0x0) &&
     (iVar1 = (*(code *)g_APIDLL_setVideoModeX)(width,height,bits_per_pixel,flags), iVar1 != 0)) {
    g_INT_02cf6130 = bits_per_pixel;
    return 1;
  }
  return 0;
}
