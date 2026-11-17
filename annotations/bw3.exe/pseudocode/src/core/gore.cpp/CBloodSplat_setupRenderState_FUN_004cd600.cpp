// Name: core_gore.cpp_CBloodSplat_setupRenderState_FUN_004cd600
// Address: 004cd600
// Address Range: [[004cd600, 004cd685]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_setupRenderState_FUN_004cd600(CBloodSplat *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodSplat_setupRenderState_FUN_004cd600(CBloodSplat *this_ptr)

{
  g_SMRGLPrimitiveQuadIndex_01d22e48.base.base.count = 4;
  g_SMRGLPrimitiveQuadIndex_01d22e48.vertices[0] = 0;
  g_SMRGLPrimitiveQuadIndex_01d22e48.vertices[1] = 1;
  g_SMRGLPrimitiveQuadIndex_01d22e48.vertices[2] = 2;
  g_SMRGLPrimitiveQuadIndex_01d22e48.vertices[3] = 3;
  g_SRenderVertex_ARRAY_0060b014[0].u = 0x80000;
  g_SRenderVertex_ARRAY_0060b014[0].v = 0xf80000;
  g_SRenderVertex_ARRAY_0060b014[1].u = 0xf80000;
  g_SRenderVertex_ARRAY_0060b014[1].v = 0xf80000;
  g_SRenderVertex_ARRAY_0060b014[2].u = 0xf80000;
  g_SRenderVertex_ARRAY_0060b014[2].v = 0x80000;
  g_SRenderVertex_ARRAY_0060b014[3].u = 0x80000;
  g_SRenderVertex_ARRAY_0060b014[3].v = 0x80000;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
            (g_CDemonRenderer_PTR_005f2afc,0xffff);
  return;
}
