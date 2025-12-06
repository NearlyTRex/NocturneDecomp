// Name: core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020
// Address: 00453020
// Address Range: [[00453020, 00453152]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020(CDemonCamera * this_ptr, int plane_index)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020
          (CDemonCamera *this_ptr,int plane_index)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = plane_index * 0x12c00;
  for (iVar5 = 1; iVar4 = iVar4 + 0x140, iVar5 < this_ptr->display_height + -1; iVar5 = iVar5 + 1) {
    iVar3 = 1;
    iVar2 = iVar5 * 0x140;
    iVar1 = iVar4;
    while( true ) {
      if (this_ptr->display_width + -1 <= iVar3) break;
      iVar3 = iVar3 + 1;
      g_CameraImageDecompressBuffer[0].pixels[0][iVar1 + 1] =
           g_CameraPlaneWorkBuffer.pixels[0][iVar2 + 1];
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 1;
    }
  }
  iVar4 = 0;
  if (0 < this_ptr->display_height) {
    iVar5 = plane_index * 0x12c00;
    do {
      g_CameraImageDecompressBuffer[0].pixels[0][iVar5] = g_CameraPlaneWorkBuffer.pixels[iVar4][0];
      *(byte *)(this_ptr->display_width + 0x13ed377 + iVar5) =
           *(byte *)(this_ptr->display_width + 0x13da777 + iVar4 * 0x140);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x140;
    } while (iVar4 < this_ptr->display_height);
  }
  iVar5 = 1;
  iVar4 = plane_index * 0x12c00;
  while (iVar5 < this_ptr->display_width + -1) {
    g_CameraImageDecompressBuffer[0].pixels[0][iVar4 + 1] = g_CameraPlaneWorkBuffer.pixels[0][iVar5]
    ;
    iVar2 = (this_ptr->display_height + -1) * 0x140;
    iVar1 = iVar2 + iVar5;
    iVar5 = iVar5 + 1;
    *(byte *)(iVar2 + plane_index * 0x12c00 + 0x13ed377 + iVar5) =
         *(byte *)((int)&g_CameraPlaneWorkBuffer + iVar1);
    iVar4 = iVar4 + 1;
  }
  return;
}
