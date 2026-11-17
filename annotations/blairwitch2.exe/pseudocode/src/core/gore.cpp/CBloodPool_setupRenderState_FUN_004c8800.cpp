// Name: core_gore.cpp_CBloodPool_setupRenderState_FUN_004c8800
// Address: 004c8800
// Address Range: [[004c8800, 004c889f]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004c8800(CBloodPool *this_ptr)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004c8800(CBloodPool *this_ptr)

{
  int iVar1;
  
  g_SMRGLHeaderPrimitive_01cb8288.base.count = 4;
  g_INT_01cb82a0 = 0;
  g_INT_01cb82a4 = 1;
  g_INT_01cb82a8 = 2;
  g_INT_01cb82ac = 3;
  g_SRenderVertex_ARRAY_00622014[0].u = 0x80000;
  g_SRenderVertex_ARRAY_00622014[0].v = 0xf80000;
  g_SRenderVertex_ARRAY_00622014[1].u = 0xf80000;
  g_SRenderVertex_ARRAY_00622014[1].v = 0xf80000;
  g_SRenderVertex_ARRAY_00622014[2].u = 0xf80000;
  g_SRenderVertex_ARRAY_00622014[2].v = 0x80000;
  g_SRenderVertex_ARRAY_00622014[3].u = 0x80000;
  g_SRenderVertex_ARRAY_00622014[3].v = 0x80000;
  g_SMRGLHeaderPrimitive_01cb8288.surface_normal.A.i = 0;
  g_SMRGLHeaderPrimitive_01cb8288.surface_normal.C.i = 0;
  g_SMRGLHeaderPrimitive_01cb8288.surface_normal.D.i = 0;
  g_SMRGLHeaderPrimitive_01cb8288.surface_normal.B.i = 0xffff;
  iVar1 = engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
                    (g_CDemonRenderer_PTR_0060b280,0xffff);
  return iVar1;
}
