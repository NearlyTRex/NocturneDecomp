// Name: core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00450b60
// Address: 00450b60
// Address Range: [[00450b60, 00450bfa]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00450b60(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00450b60(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (screen_y / this_ptr->scale_factor) * 0x140;
  iVar1 = screen_x / this_ptr->scale_factor;
  core_dstrendr_cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00472a26
            ((ushort *)(*(int *)(&DAT_01c5faec + screen_y * 4) + screen_x * 2),
             (uint *)((int)this_ptr->framebuffer_aligned +
                     screen_x * 4 + this_ptr->framebuffer_width * screen_y * 4),
             (byte *)(iVar2 + 0xb3fd08 + iVar1 + offset),&DAT_0135ead0 + offset + iVar1 + iVar2);
  return;
}
