// Name: core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00443360
// Address: 00443360
// Address Range: [[00443360, 004433fa]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00443360(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00443360(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (screen_y / this_ptr->scale_factor) * 0x140;
  iVar1 = screen_x / this_ptr->scale_factor;
  core_dstrendr_cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_004719b6
            ((ushort *)(*(int *)(&DAT_01c2a38c + screen_y * 4) + screen_x * 2),
             (uint *)((int)this_ptr->framebuffer_aligned +
                     screen_x * 4 + this_ptr->framebuffer_width * screen_y * 4),
             (byte *)(iVar2 + 0xb07f58 + iVar1 + offset),&DAT_01326d20 + offset + iVar1 + iVar2);
  return;
}
