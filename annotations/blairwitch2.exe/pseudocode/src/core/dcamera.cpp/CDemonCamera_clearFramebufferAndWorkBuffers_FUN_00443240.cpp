// Name: core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00443240
// Address: 00443240
// Address Range: [[00443240, 004432bf]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00443240(CDemonCamera *this_ptr,int clear_color)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00443240(CDemonCamera *this_ptr,int clear_color)

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
      *(byte *)(iVar3 + 0x1339920) = 0;
      (&DAT_01326d20)[iVar3] = 0;
      iVar3 = iVar2;
    } while (iVar2 != iVar1);
    iVar4 = iVar4 + 1;
    iVar1 = iVar1 + 0x140;
  } while (iVar4 < 0xf0);
  return;
}
