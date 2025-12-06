// Name: core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00453160
// Address: 00453160
// Address Range: [[00453160, 0045326a]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00453160(CDemonCamera * this_ptr, int plane_index, uint blend_alpha)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_00453160
          (CDemonCamera *this_ptr,int plane_index,uint blend_alpha)

{
  char (*source2_buffer) [320];
  char (*source1_buffer) [320];
  int iVar1;
  SFogImagePlane *output_buffer;
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
    source1_buffer = (char (*) [320])(g_CameraImageDecompressBuffer + plane_index);
    output_buffer = &g_CameraPlaneWorkBuffer;
    source2_buffer = (char (*) [320])(g_CameraImageDecompressBuffer + iVar1);
    do {
      core_dstrender_cpp_alphaBlendPixelsMMX_FUN_00492e8a
                ((uint *)output_buffer,(uint *)source1_buffer,(uint *)source2_buffer,
                 blend_alpha | blend_alpha << 0x10,
                 0xffff - blend_alpha | (0xffff - blend_alpha) * 0x10000,this_ptr->display_width);
      iVar2 = iVar2 + 1;
      source2_buffer = source2_buffer + 1;
      source1_buffer = source1_buffer + 1;
      output_buffer = (SFogImagePlane *)((int)output_buffer + 0x140);
    } while (iVar2 < *(int *)(plane_index + 0x154));
  }
  return;
}
