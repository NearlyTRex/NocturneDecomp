// Name: core_fire.cpp_CBulletHole_setupRenderState_FUN_00482ed0
// Address: 00482ed0
// Address Range: [[00482ed0, 00482f4f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_setupRenderState_FUN_00482ed0(CBulletHole *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletHole_setupRenderState_FUN_00482ed0(CBulletHole *this_ptr)

{
  g_SMRGLPrimitiveQuadIndex_01c08d20.base.base.count = 4;
  g_SMRGLPrimitiveQuadIndex_01c08d20.vertices[0] = 0;
  g_SMRGLPrimitiveQuadIndex_01c08d20.vertices[1] = 1;
  g_SMRGLPrimitiveQuadIndex_01c08d20.vertices[2] = 2;
  g_SMRGLPrimitiveQuadIndex_01c08d20.vertices[3] = 3;
  g_SMRGLPrimitiveQuadIndex_01c08d20.base.surface_normal.A.i = 0;
  g_SMRGLPrimitiveQuadIndex_01c08d20.base.surface_normal.B.i = 0;
  g_SMRGLPrimitiveQuadIndex_01c08d20.base.surface_normal.D.i = 0;
  g_SMRGLPrimitiveQuadIndex_01c08d20.base.surface_normal.C.i = 0xffff;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (g_CDemonRenderer_PTR_005ae704,&g_SMRGLTextureBasic_005b84b4);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (g_CDemonRenderer_PTR_005ae704,0xffff);
  return;
}
