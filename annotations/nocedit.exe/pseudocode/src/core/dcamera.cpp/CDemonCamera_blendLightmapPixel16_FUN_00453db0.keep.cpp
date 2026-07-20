// Name: core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0
// Address: 00453db0
// MANUAL RECONSTRUCTION
// Address Range: [[00453db0, 00453e4a]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)

{
  int iVar1;
  int iVar2;
  
  iVar1 = screen_y / this_ptr->scale_factor;
  iVar2 = screen_x / this_ptr->scale_factor;
  core_dstrender_cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_004937b6
            ((ushort *)g_ScreenBufferArray[screen_y] + screen_x,
             (uint *)this_ptr->framebuffer_aligned +
                     screen_y * this_ptr->framebuffer_width + screen_x,
             (byte *)((char *)g_CoronaBlurWorkBuffer +
                      iVar1 * (int)sizeof(g_CoronaBlurWorkBuffer[0]) + offset + iVar2),
             (byte *)((char *)g_CameraPlaneWorkBuffer.pixels +
                      iVar1 * (int)sizeof(g_CameraPlaneWorkBuffer.pixels[0]) + offset + iVar2));
  return;
}
