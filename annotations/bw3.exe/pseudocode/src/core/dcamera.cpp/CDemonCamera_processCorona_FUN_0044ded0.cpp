// Name: core_dcamera.cpp_CDemonCamera_processCorona_FUN_0044ded0
// Address: 0044ded0
// Address Range: [[0044ded0, 0044df5f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_0044ded0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_0044ded0(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this_ptr->corona_blend_factor >> 0x1f;
  iVar1 = (this_ptr->corona_blend_factor + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  g_CoronaBlurFillValue = (int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  _memset(g_CoronaBlurOutputBuffer,g_CoronaBlurFillValue & 0xff,0x12c00);
  if (1 < g_ImageBytesPerPixel) {
    core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_0044ff10
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
