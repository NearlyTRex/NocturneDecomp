// Name: core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_00450670
// Address: 00450670
// Address Range: [[00450670, 004506f4]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_sampleFramebufferPixel_FUN_00450670(CDemonCamera *this_ptr,int vertex)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_sampleFramebufferPixel_FUN_00450670(CDemonCamera *this_ptr,int vertex)

{
  uint uVar1;
  byte bVar2;
  byte uVar3;
  
  uVar3 = g_BIT_INTEGER32_01c6af8c.bytes[0];
  if ((*(byte *)(vertex + 0x13) & 0x80) != 0) {
    *(uint *)(vertex + 0x28) = 0;
    *(uint *)(vertex + 0x24) = *(uint *)(vertex + 0x28);
    *(uint *)(vertex + 0x20) = *(uint *)(vertex + 0x28);
    return;
  }
  uVar1 = *(uint *)((int)this_ptr->framebuffer_aligned +
                   ((*(int *)(vertex + 0x10) >> 0x10) +
                   (*(int *)(vertex + 0x14) >> 0x10) * this_ptr->framebuffer_width) * 4);
  bVar2 = g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f;
  *(uint *)(vertex + 0x20) = (uVar1 >> (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f) & 0xff) << 8;
  *(uint *)(vertex + 0x24) = (uVar1 >> bVar2 & 0xff) << 8;
  *(uint *)(vertex + 0x28) = (uVar1 >> (uVar3 & 0x1f) & 0xff) << 8;
  return;
}
