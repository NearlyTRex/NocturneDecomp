// Name: core_dcamera.cpp_CDemonCamera_FUN_00447bb0
// Address: 00447bb0
// Address Range: [[00447bb0, 00447c57]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_FUN_00447bb0(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_FUN_00447bb0(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)

{
  int iVar1;
  int iVar2;
  
  iVar1 = screen_x / this_ptr->scale_factor;
  iVar2 = (screen_y / this_ptr->scale_factor) * 0x140;
  core_dstrender_cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_004652d0
            ((uint *)(this_ptr->framebuffer_width * 4 +
                      *(int *)(&DAT_01bd2fa0 + (this_ptr->framebuffer_height + screen_y) * 4) +
                     screen_x * 4),
             (uint *)((int)this_ptr->framebuffer_aligned +
                     screen_x * 4 + this_ptr->screen_width * screen_y * 4),
             (byte *)(iVar1 + iVar2 + 0xaafdb8 + offset),&DAT_012ceb78 + offset + iVar1 + iVar2);
  return;
}
