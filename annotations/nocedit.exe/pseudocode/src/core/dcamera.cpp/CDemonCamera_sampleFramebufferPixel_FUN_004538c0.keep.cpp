// Name: core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_004538c0
// Address: 004538c0
// MANUAL RECONSTRUCTION
// Address Range: [[004538c0, 00453944]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_sampleFramebufferPixel_FUN_004538c0(CDemonCamera *this_ptr,SRenderVertex *vertex)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_sampleFramebufferPixel_FUN_004538c0(CDemonCamera *this_ptr,SRenderVertex *vertex)

{
  uint uVar1;
  byte bVar2;
  byte uVar3;
  
  uVar3 = g_BlueBitPosition.bytes[0];
  if ((int)((vertex->projected_vertex).screen_x & -0x80000000) != 0) {
    vertex->b = 0;
    vertex->g = vertex->b;
    vertex->r = vertex->b;
    return;
  }
  uVar1 = ((uint *)this_ptr->framebuffer_aligned)
          [((vertex->projected_vertex).screen_x >> 0x10) +
           ((vertex->projected_vertex).screen_y >> 0x10) * this_ptr->framebuffer_width];
  bVar2 = g_GreenBitPosition.bytes[0] & 0x1f;
  vertex->r = (uVar1 >> (g_RedBitPosition.bytes[0] & 0x1f) & 0xff) << 8;
  vertex->g = (uVar1 >> bVar2 & 0xff) << 8;
  vertex->b = (uVar1 >> (uVar3 & 0x1f) & 0xff) << 8;
  return;
}
