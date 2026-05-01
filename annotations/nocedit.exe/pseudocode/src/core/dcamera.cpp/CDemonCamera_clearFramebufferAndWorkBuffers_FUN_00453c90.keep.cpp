// Name: core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90
// Address: 00453c90
// MANUAL RECONSTRUCTION
// Address Range: [[00453c90, 00453d0f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90(CDemonCamera *this_ptr,int clear_color)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90(CDemonCamera *this_ptr,int clear_color)

{
  int iVar1;
  int iVar4;

  iVar4 = 0;
  if (0 < this_ptr->framebuffer_height) {
    do {
      iVar1 = 0;
      if (0 < this_ptr->framebuffer_width) {
        do {
          ((int *)this_ptr->framebuffer_aligned)
              [this_ptr->framebuffer_width * iVar4 + iVar1] = clear_color;
          iVar1 = iVar1 + 1;
        } while (iVar1 < this_ptr->framebuffer_width);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < this_ptr->framebuffer_height);
  }
  memset(&g_CameraImageDecompressBuffer[0], 0, sizeof(SFogImagePlane));
  memset(&g_CameraPlaneWorkBuffer, 0, sizeof(SFogImagePlane));
  return;
}
