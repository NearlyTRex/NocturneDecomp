// Name: engine_special.cpp_setVideoModeX_FUN_00582c10
// Address: 00582c10
// Address Range: [[00582c10, 00582c5d]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setVideoModeX_FUN_00582c10(int width,int height,int bits_per_pixel,int flags)

#include "nocturne.h"

int __cdecl engine_special_cpp_setVideoModeX_FUN_00582c10(int width,int height,int bits_per_pixel,int flags)

{
  int iVar1;
  
  g_INT_02c834d4 = 0;
  if ((g_PTR_02c83430 != (byte *)0x0) &&
     (iVar1 = (*(code *)g_PTR_02c83430)(width,height,bits_per_pixel,flags), iVar1 != 0)) {
    g_INT_02c834d4 = bits_per_pixel;
    return 1;
  }
  return 0;
}
