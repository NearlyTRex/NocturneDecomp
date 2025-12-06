// Name: wincore_windll.cpp_setVideoModeX_FUN_005b7e8b
// Address: 005b7e8b
// Address Range: [[005b7e8b, 005b7edd]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_setVideoModeX_FUN_005b7e8b(int width, int height, int bits_per_pixel, int flags)

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_setVideoModeX_FUN_005b7e8b(int width,int height,int bits_per_pixel,int flags)

{
  int iVar1;
  
  g_VideoModeXBPP = 0;
  if (g_APIDLL_setVideoModeX == (APIDLL_setVideoModeX *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*g_APIDLL_setVideoModeX)(width,height,bits_per_pixel,flags);
    if (iVar1 != 0) {
      g_VideoModeXBPP = bits_per_pixel;
      return 1;
    }
  }
  return iVar1;
}
