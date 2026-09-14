// Name: core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451130
// Address: 00451130
// MANUAL RECONSTRUCTION
// Address Range: [[00451130, 004511bf]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_00451130(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_00451130(CDemonCamera *this_ptr)

{
#if !NOCTURNE_AUTHENTIC_FOG_PLANE_SCALE
  int fog_row;
  int fog_col;
  int src_row;
#endif

  INT_00c199f8 = this_ptr->corona_blend_factor / 0x100 / 4;
  _memset(g_CoronaBlurOutputBuffer,INT_00c199f8 & 0xff,0x12c00);
  if (1 < g_ImageBytesPerPixel) {
    core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_00453160
              (this_ptr,g_ImageProcessingState1,g_ImageProcessingState2);
    return;
  }
  if (g_BackdropSaveActive == 0) {
    return;
  }
#if NOCTURNE_AUTHENTIC_FOG_PLANE_SCALE
  _memcpy(&g_CameraPlaneWorkBuffer,g_CameraImageDecompressBuffer,0x12c00);
#else
  if ((this_ptr->display_width == 320) && (this_ptr->display_height == 240)) {
    _memcpy(&g_CameraPlaneWorkBuffer,g_CameraImageDecompressBuffer,0x12c00);
  }
  else {
    for (fog_row = 0; fog_row < this_ptr->display_height; fog_row = fog_row + 1) {
      src_row = (fog_row * 240) / this_ptr->display_height;
      for (fog_col = 0; fog_col < this_ptr->display_width; fog_col = fog_col + 1) {
        g_CameraPlaneWorkBuffer.pixels[fog_row][fog_col] =
             g_CameraImageDecompressBuffer[0].pixels[src_row]
                                                   [(fog_col * 320) / this_ptr->display_width];
      }
    }
  }
#endif
  g_BackdropSaveActive = 0;
  return;
}
