// Name: core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10
// Address: 00453d10
// MANUAL RECONSTRUCTION
// Address Range: [[00453d10, 00453da4]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)

{
  int iVar1;
  int iVar2;
  
  iVar1 = screen_y / this_ptr->scale_factor;
  iVar2 = screen_x / this_ptr->scale_factor;
  core_dstrender_cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00491f90
            ((uint *)((int)g_ScreenBufferArray[screen_y] + screen_x * 4),
             (uint *)((int)this_ptr->framebuffer_aligned +
                     screen_x * 4 + this_ptr->framebuffer_width * screen_y * 4),
             (byte *)((char *)g_CoronaBlurWorkBuffer + iVar1 * 320 + offset + iVar2),
             (byte *)((char *)g_CameraPlaneWorkBuffer.pixels + iVar1 * 320 + offset + iVar2));
  return;
}
