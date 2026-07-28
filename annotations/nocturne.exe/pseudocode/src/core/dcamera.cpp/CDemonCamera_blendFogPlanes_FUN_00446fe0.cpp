// Name: core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00446fe0
// Address: 00446fe0
// Address Range: [[00446fe0, 004470ea]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_00446fe0(CDemonCamera *this_ptr,int plane_index,uint blend_alpha)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_00446fe0(CDemonCamera *this_ptr,int plane_index,uint blend_alpha)

{
  uint *source2_buffer;
  uint *source1_buffer;
  int iVar1;
  uint *output_buffer;
  int iVar2;
  
  iVar1 = plane_index + 1;
  if (0xf < iVar1) {
    iVar1 = 0;
  }
  if ((int)blend_alpha < 0x10000) {
    if ((int)blend_alpha < 0) {
      blend_alpha = 0;
    }
  }
  else {
    blend_alpha = 0xffff;
  }
  iVar2 = 0;
  if (0 < this_ptr->display_height) {
    source1_buffer = (uint *)(plane_index * 0x12c00 + 0x12e1778);
    output_buffer = (uint *)&DAT_012ceb78;
    source2_buffer = (uint *)(iVar1 * 0x12c00 + 0x12e1778);
    do {
      core_dstrender_cpp_alphaBlendPixelsMMX_FUN_00465f50
                (output_buffer,source1_buffer,source2_buffer,blend_alpha | blend_alpha << 0x10,
                 0xffff - blend_alpha | (0xffff - blend_alpha) * 0x10000,this_ptr->display_width);
      iVar2 = iVar2 + 1;
      source2_buffer = source2_buffer + 0x50;
      source1_buffer = source1_buffer + 0x50;
      output_buffer = output_buffer + 0x50;
    } while (iVar2 < this_ptr->display_height);
  }
  return;
}
