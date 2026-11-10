// Name: core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00450ac0
// Address: 00450ac0
// Address Range: [[00450ac0, 00450b54]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_blendLightmapPixel32_FUN_00450ac0(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_blendLightmapPixel32_FUN_00450ac0(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)

{
  int iVar1;
  int iVar2;
  
  iVar1 = screen_x / this_ptr->scale_factor;
  iVar2 = (screen_y / this_ptr->scale_factor) * 0x140;
  core_dstrendr_cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00471200
            ((uint *)(*(int *)(&DAT_01c5faec + screen_y * 4) + screen_x * 4),
             (uint *)((int)this_ptr->framebuffer_aligned +
                     screen_x * 4 + this_ptr->framebuffer_width * screen_y * 4),
             (byte *)(iVar1 + iVar2 + 0xb3fd08 + offset),&DAT_0135ead0 + offset + iVar1 + iVar2);
  return;
}
