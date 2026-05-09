// Name: core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020
// Address: 00453020
// MANUAL RECONSTRUCTION
// Address Range: [[00453020, 00453152]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020(CDemonCamera *this_ptr,int plane_index)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020(CDemonCamera *this_ptr,int plane_index)

{
  int row;
  int col;

  for (row = 1; row < this_ptr->display_height + -1; row = row + 1) {
    for (col = 1; col < this_ptr->display_width + -1; col = col + 1) {
      g_CameraImageDecompressBuffer[plane_index].pixels[row][col] =
           g_CameraPlaneWorkBuffer.pixels[row][col];
    }
  }
  for (row = 0; row < this_ptr->display_height; row = row + 1) {
    g_CameraImageDecompressBuffer[plane_index].pixels[row][0] =
         g_CameraPlaneWorkBuffer.pixels[row][0];
    g_CameraImageDecompressBuffer[plane_index].pixels[row][this_ptr->display_width + -1] =
         g_CameraPlaneWorkBuffer.pixels[row][this_ptr->display_width + -1];
  }
  for (col = 1; col < this_ptr->display_width + -1; col = col + 1) {
    g_CameraImageDecompressBuffer[plane_index].pixels[0][col] =
         g_CameraPlaneWorkBuffer.pixels[0][col];
    g_CameraImageDecompressBuffer[plane_index].pixels[this_ptr->display_height + -1][col] =
         g_CameraPlaneWorkBuffer.pixels[this_ptr->display_height + -1][col];
  }
  return;
}
