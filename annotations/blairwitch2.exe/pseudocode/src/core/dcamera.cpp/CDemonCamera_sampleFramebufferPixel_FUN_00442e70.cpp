// Name: core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_00442e70
// Address: 00442e70
// Address Range: [[00442e70, 00442ef4]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_sampleFramebufferPixel_FUN_00442e70(CDemonCamera *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_sampleFramebufferPixel_FUN_00442e70(CDemonCamera *this_ptr,int param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  
  bVar3 = DAT_01c3582c;
  if ((*(byte *)(param_2 + 0x13) & 0x80) != 0) {
    *(uint *)(param_2 + 0x28) = 0;
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x28);
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x28);
    return;
  }
  uVar1 = *(uint *)((int)this_ptr->framebuffer_aligned +
                   ((*(int *)(param_2 + 0x10) >> 0x10) +
                   (*(int *)(param_2 + 0x14) >> 0x10) * this_ptr->framebuffer_width) * 4);
  bVar2 = DAT_01c35820 & 0x1f;
  *(uint *)(param_2 + 0x20) = (uVar1 >> (DAT_01c35814 & 0x1f) & 0xff) << 8;
  *(uint *)(param_2 + 0x24) = (uVar1 >> bVar2 & 0xff) << 8;
  *(uint *)(param_2 + 0x28) = (uVar1 >> (bVar3 & 0x1f) & 0xff) << 8;
  return;
}
