// Name: core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00454970
// Address: 00454970
// Address Range: [[00454970, 00454a04]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_blendLightmapPixel32_FUN_00454970(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_blendLightmapPixel32_FUN_00454970(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)

{
  int iVar1;
  int iVar2;
  
  iVar1 = screen_y / this_ptr->scale_factor;
  iVar2 = screen_x / this_ptr->scale_factor;
  core_dstrendr_cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00488680
            ((uint *)(g_ScreenBufferArray[screen_y] + screen_x * 4),
             (uint *)((int)this_ptr->framebuffer_aligned +
                     screen_x * 4 + this_ptr->framebuffer_width * screen_y * 4),
             (byte *)(g_CoronaBlurWorkBuffer[iVar1] + offset + iVar2),
             (byte *)(g_SFogImagePlane_01342220.pixels[iVar1] + offset + iVar2));
  return;
}
