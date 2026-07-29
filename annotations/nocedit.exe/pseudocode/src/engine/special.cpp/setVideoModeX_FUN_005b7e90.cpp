// Name: engine_special.cpp_setVideoModeX_FUN_005b7e90
// Address: 005b7e90
// Address Range: [[005b7e90, 005b7edd]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setVideoModeX_FUN_005b7e90(int width,int height,int bits_per_pixel,int flags)

#include "nocturne.h"

int __cdecl engine_special_cpp_setVideoModeX_FUN_005b7e90(int width,int height,int bits_per_pixel,int flags)

{
  int iVar1;
  
  g_VideoModeXBPP = 0;
  if ((g_APIDLL_setVideoModeX != (APIDLL_setVideoModeX *)0x0) &&
     (iVar1 = (*g_APIDLL_setVideoModeX)(width,height,bits_per_pixel,flags), iVar1 != 0)) {
    g_VideoModeXBPP = bits_per_pixel;
    return 1;
  }
  return 0;
}
