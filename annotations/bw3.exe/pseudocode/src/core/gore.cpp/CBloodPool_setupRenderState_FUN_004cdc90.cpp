// Name: core_gore.cpp_CBloodPool_setupRenderState_FUN_004cdc90
// Address: 004cdc90
// Address Range: [[004cdc90, 004cdd2f]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004cdc90(CBloodPool *this_ptr)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004cdc90(CBloodPool *this_ptr)

{
  int iVar1;
  
  g_SMRGLHeaderPrimitive_01d22e48.base.count = 4;
  g_INT_01d22e60 = 0;
  g_INT_01d22e64 = 1;
  g_INT_01d22e68 = 2;
  g_INT_01d22e6c = 3;
  g_SRenderVertex_ARRAY_0060b014[0].u = 0x80000;
  g_SRenderVertex_ARRAY_0060b014[0].v = 0xf80000;
  g_SRenderVertex_ARRAY_0060b014[1].u = 0xf80000;
  g_SRenderVertex_ARRAY_0060b014[1].v = 0xf80000;
  g_SRenderVertex_ARRAY_0060b014[2].u = 0xf80000;
  g_SRenderVertex_ARRAY_0060b014[2].v = 0x80000;
  g_SRenderVertex_ARRAY_0060b014[3].u = 0x80000;
  g_SRenderVertex_ARRAY_0060b014[3].v = 0x80000;
  g_SMRGLHeaderPrimitive_01d22e48.surface_normal.A.i = 0;
  g_SMRGLHeaderPrimitive_01d22e48.surface_normal.C.i = 0;
  g_SMRGLHeaderPrimitive_01d22e48.surface_normal.D.i = 0;
  g_SMRGLHeaderPrimitive_01d22e48.surface_normal.B.i = 0xffff;
  iVar1 = engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
                    (g_CDemonRenderer_PTR_005f2afc,0xffff);
  return iVar1;
}
