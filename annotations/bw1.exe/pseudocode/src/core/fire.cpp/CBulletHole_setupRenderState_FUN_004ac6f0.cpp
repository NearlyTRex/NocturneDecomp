// Name: core_fire.cpp_CBulletHole_setupRenderState_FUN_004ac6f0
// Address: 004ac6f0
// Address Range: [[004ac6f0, 004ac76f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_setupRenderState_FUN_004ac6f0(CBulletHole *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletHole_setupRenderState_FUN_004ac6f0(CBulletHole *this_ptr)

{
  g_SMRGLPrimitiveQuadIndex_01c57090.base.base.count = 4;
  g_SMRGLPrimitiveQuadIndex_01c57090.vertices[0] = 0;
  g_SMRGLPrimitiveQuadIndex_01c57090.vertices[1] = 1;
  g_SMRGLPrimitiveQuadIndex_01c57090.vertices[2] = 2;
  g_SMRGLPrimitiveQuadIndex_01c57090.vertices[3] = 3;
  g_SMRGLPrimitiveQuadIndex_01c57090.base.surface_normal.A.i = 0;
  g_SMRGLPrimitiveQuadIndex_01c57090.base.surface_normal.B.i = 0;
  g_SMRGLPrimitiveQuadIndex_01c57090.base.surface_normal.D.i = 0;
  g_SMRGLPrimitiveQuadIndex_01c57090.base.surface_normal.C.i = 0xffff;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (g_CDemonRenderer_PTR_00612560,&g_SMRGLTextureBasic_0061c3d4);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
            (g_CDemonRenderer_PTR_00612560,0x8000);
  return;
}
