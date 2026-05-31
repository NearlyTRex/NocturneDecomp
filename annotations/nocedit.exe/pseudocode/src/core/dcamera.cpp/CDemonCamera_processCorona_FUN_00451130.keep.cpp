// Name: core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451130
// Address: 00451130
// MANUAL RECONSTRUCTION
// Address Range: [[00451130, 004511bf]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_00451130(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_00451130(CDemonCamera *this_ptr)

{
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
  _memcpy(&g_CameraPlaneWorkBuffer,g_CameraImageDecompressBuffer,0x12c00);
  g_BackdropSaveActive = 0;
  return;
}
