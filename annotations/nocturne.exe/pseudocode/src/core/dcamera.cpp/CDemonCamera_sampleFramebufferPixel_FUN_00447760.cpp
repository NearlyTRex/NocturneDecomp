// Name: core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_00447760
// Address: 00447760
// Address Range: [[00447760, 004477e4]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_sampleFramebufferPixel_FUN_00447760(CDemonCamera *this_ptr,SRenderVertex *vertex)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_sampleFramebufferPixel_FUN_00447760(CDemonCamera *this_ptr,SRenderVertex *vertex)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  
  bVar3 = DAT_01c0063c;
  if ((int)((vertex->projected_vertex).screen_x & -0x80000000) != 0) {
    vertex->b = 0;
    vertex->g = vertex->b;
    vertex->r = vertex->b;
    return;
  }
  uVar1 = *(uint *)((int)this_ptr->framebuffer_aligned +
                   (((vertex->projected_vertex).screen_x >> 0x10) +
                   ((vertex->projected_vertex).screen_y >> 0x10) *
                   *(int *)(this_ptr->camera_name + 0xfc)) * 4);
  bVar2 = DAT_01c00630 & 0x1f;
  vertex->r = (uVar1 >> (DAT_01c00624 & 0x1f) & 0xff) << 8;
  vertex->g = (uVar1 >> bVar2 & 0xff) << 8;
  vertex->b = (uVar1 >> (bVar3 & 0x1f) & 0xff) << 8;
  return;
}
