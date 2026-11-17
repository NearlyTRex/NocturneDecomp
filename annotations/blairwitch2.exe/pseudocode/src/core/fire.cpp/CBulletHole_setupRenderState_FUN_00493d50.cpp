// Name: core_fire.cpp_CBulletHole_setupRenderState_FUN_00493d50
// Address: 00493d50
// Address Range: [[00493d50, 00493dcf]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_setupRenderState_FUN_00493d50(CBulletHole *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletHole_setupRenderState_FUN_00493d50(CBulletHole *this_ptr)

{
  g_SMRGLPrimitiveQuadIndex_01c3ded0.base.base.count = 4;
  g_SMRGLPrimitiveQuadIndex_01c3ded0.vertices[0] = 0;
  g_SMRGLPrimitiveQuadIndex_01c3ded0.vertices[1] = 1;
  g_SMRGLPrimitiveQuadIndex_01c3ded0.vertices[2] = 2;
  g_SMRGLPrimitiveQuadIndex_01c3ded0.vertices[3] = 3;
  g_SMRGLPrimitiveQuadIndex_01c3ded0.base.surface_normal.A.i = 0;
  g_SMRGLPrimitiveQuadIndex_01c3ded0.base.surface_normal.B.i = 0;
  g_SMRGLPrimitiveQuadIndex_01c3ded0.base.surface_normal.D.i = 0;
  g_SMRGLPrimitiveQuadIndex_01c3ded0.base.surface_normal.C.i = 0xffff;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (g_CDemonRenderer_PTR_0060b280,&g_SMRGLTextureBasic_006150f4);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
            (g_CDemonRenderer_PTR_0060b280,0x8000);
  return;
}
