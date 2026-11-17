// Name: core_gore.cpp_CBloodPool_setupRenderState_FUN_004e50e0
// Address: 004e50e0
// Address Range: [[004e50e0, 004e517f]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004e50e0(CBloodPool *this_ptr)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004e50e0(CBloodPool *this_ptr)

{
  int iVar1;
  
  g_SMRGLPrimitiveQuadIndex_01cd0e40.base.base.count = 4;
  g_SMRGLPrimitiveQuadIndex_01cd0e40.vertices[0] = 0;
  g_SMRGLPrimitiveQuadIndex_01cd0e40.vertices[1] = 1;
  g_SMRGLPrimitiveQuadIndex_01cd0e40.vertices[2] = 2;
  g_SMRGLPrimitiveQuadIndex_01cd0e40.vertices[3] = 3;
  g_SRenderVertex_ARRAY_00629014[0].u = 0x80000;
  g_SRenderVertex_ARRAY_00629014[0].v = 0xf80000;
  g_SRenderVertex_ARRAY_00629014[1].u = 0xf80000;
  g_SRenderVertex_ARRAY_00629014[1].v = 0xf80000;
  g_SRenderVertex_ARRAY_00629014[2].u = 0xf80000;
  g_SRenderVertex_ARRAY_00629014[2].v = 0x80000;
  g_SRenderVertex_ARRAY_00629014[3].u = 0x80000;
  g_SRenderVertex_ARRAY_00629014[3].v = 0x80000;
  g_SMRGLPrimitiveQuadIndex_01cd0e40.base.surface_normal.A.i = 0;
  g_SMRGLPrimitiveQuadIndex_01cd0e40.base.surface_normal.C.i = 0;
  g_SMRGLPrimitiveQuadIndex_01cd0e40.base.surface_normal.D.i = 0;
  g_SMRGLPrimitiveQuadIndex_01cd0e40.base.surface_normal.B.i = 0xffff;
  iVar1 = engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
                    (g_CDemonRenderer_PTR_00612560,0xffff);
  return iVar1;
}
