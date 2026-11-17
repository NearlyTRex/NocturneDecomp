// Name: core_gore.cpp_CBloodPool_setupRenderState_FUN_004c8800
// Address: 004c8800
// Address Range: [[004c8800, 004c889f]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004c8800(CBloodPool *this_ptr)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004c8800(CBloodPool *this_ptr)

{
  int iVar1;
  
  g_GoreQuadPrimitive.base.base.count = 4;
  g_GoreQuadPrimitive.vertices[0] = 0;
  g_GoreQuadPrimitive.vertices[1] = 1;
  g_GoreQuadPrimitive.vertices[2] = 2;
  g_GoreQuadPrimitive.vertices[3] = 3;
  g_SRenderVertex_ARRAY_00622014[0].u = 0x80000;
  g_SRenderVertex_ARRAY_00622014[0].v = 0xf80000;
  g_SRenderVertex_ARRAY_00622014[1].u = 0xf80000;
  g_SRenderVertex_ARRAY_00622014[1].v = 0xf80000;
  g_SRenderVertex_ARRAY_00622014[2].u = 0xf80000;
  g_SRenderVertex_ARRAY_00622014[2].v = 0x80000;
  g_SRenderVertex_ARRAY_00622014[3].u = 0x80000;
  g_SRenderVertex_ARRAY_00622014[3].v = 0x80000;
  g_GoreQuadPrimitive.base.surface_normal.A.i = 0;
  g_GoreQuadPrimitive.base.surface_normal.C.i = 0;
  g_GoreQuadPrimitive.base.surface_normal.D.i = 0;
  g_GoreQuadPrimitive.base.surface_normal.B.i = 0xffff;
  iVar1 = engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
                    (g_CDemonRenderer_PTR_0060b280,0xffff);
  return iVar1;
}
