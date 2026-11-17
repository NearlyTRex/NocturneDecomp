// Name: core_gore.cpp_CBloodSplat_setupRenderState_FUN_004c7f80
// Address: 004c7f80
// Address Range: [[004c7f80, 004c8005]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_setupRenderState_FUN_004c7f80(CBloodSplat *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodSplat_setupRenderState_FUN_004c7f80(CBloodSplat *this_ptr)

{
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
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
            (g_CDemonRenderer_PTR_0060b280,0x8000);
  return;
}
