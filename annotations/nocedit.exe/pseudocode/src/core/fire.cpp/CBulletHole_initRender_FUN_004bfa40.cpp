// Name: core_fire.cpp_CBulletHole_initRender_FUN_004bfa40
// Address: 004bfa40
// Address Range: [[004bfa40, 004bfabf]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_initRender_FUN_004bfa40(CBulletHole *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletHole_initRender_FUN_004bfa40(CBulletHole *this_ptr)

{
  g_BillboardPrimitive.base.base.count = 4;
  g_BillboardPrimitive.vertices[0] = 0;
  g_BillboardPrimitive.vertices[1] = 1;
  g_BillboardPrimitive.vertices[2] = 2;
  g_BillboardPrimitive.vertices[3] = 3;
  g_BillboardPrimitive.base.surface_normal.A = 0;
  g_BillboardPrimitive.base.surface_normal.B = 0;
  g_BillboardPrimitive.base.surface_normal.D = 0;
  g_BillboardPrimitive.base.surface_normal.C = 0xffff;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_FireEffectBlackHoleTexture);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0x8000);
  return;
}
