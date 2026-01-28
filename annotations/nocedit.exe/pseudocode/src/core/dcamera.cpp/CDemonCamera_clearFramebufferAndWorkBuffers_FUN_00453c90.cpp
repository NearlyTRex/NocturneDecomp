// Name: core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90
// Address: 00453c90
// Address Range: [[00453c90, 00453d0f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90 (CDemonCamera *this_ptr,int clear_color)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90
          (CDemonCamera *this_ptr,int clear_color)

{
  int iVar1;
  int iVar2;
  int iVar4;
  int iVar3;
  
  iVar4 = 0;
  if (0 < this_ptr->framebuffer_height) {
    do {
      iVar1 = 0;
      if (0 < this_ptr->framebuffer_width) {
        do {
          *(int *)((int)this_ptr->framebuffer_aligned +
                  (this_ptr->framebuffer_width * iVar4 + iVar1) * 4) = clear_color;
          iVar1 = iVar1 + 1;
        } while (iVar1 < this_ptr->framebuffer_width);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < this_ptr->framebuffer_height);
  }
  iVar1 = 0x140;
  iVar4 = 0;
  do {
    iVar3 = iVar4 * 0x140;
    do {
      iVar2 = iVar3 + 1;
      g_CameraImageDecompressBuffer[0].pixels[0][iVar3] = '\0';
      g_CameraPlaneWorkBuffer.pixels[0][iVar3] = '\0';
      iVar3 = iVar2;
    } while (iVar2 != iVar1);
    iVar4 = iVar4 + 1;
    iVar1 = iVar1 + 0x140;
  } while (iVar4 < 0xf0);
  return;
}
