// Name: core_gore.cpp_CBloodSplat_setupRenderState_FUN_004aeae0
// Address: 004aeae0
// Address Range: [[004aeae0, 004aeb65]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_setupRenderState_FUN_004aeae0(CBloodSplat *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodSplat_setupRenderState_FUN_004aeae0(CBloodSplat *this_ptr)

{
  g_GoreQuadPrimitive.base.base.count = 4;
  g_GoreQuadPrimitive.vertices[0] = 0;
  g_GoreQuadPrimitive.vertices[1] = 1;
  g_GoreQuadPrimitive.vertices[2] = 2;
  g_GoreQuadPrimitive.vertices[3] = 3;
  g_SRenderVertex_ARRAY_005c5014[0].u = 0x80000;
  g_SRenderVertex_ARRAY_005c5014[0].v = 0xf80000;
  g_SRenderVertex_ARRAY_005c5014[1].u = 0xf80000;
  g_SRenderVertex_ARRAY_005c5014[1].v = 0xf80000;
  g_SRenderVertex_ARRAY_005c5014[2].u = 0xf80000;
  g_SRenderVertex_ARRAY_005c5014[2].v = 0x80000;
  g_SRenderVertex_ARRAY_005c5014[3].u = 0x80000;
  g_SRenderVertex_ARRAY_005c5014[3].v = 0x80000;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (g_CDemonRenderer_PTR_005ae704,0xffff);
  return;
}
