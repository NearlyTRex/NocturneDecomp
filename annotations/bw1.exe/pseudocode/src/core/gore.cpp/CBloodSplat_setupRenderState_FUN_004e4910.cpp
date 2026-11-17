// Name: core_gore.cpp_CBloodSplat_setupRenderState_FUN_004e4910
// Address: 004e4910
// Address Range: [[004e4910, 004e4995]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_setupRenderState_FUN_004e4910(CBloodSplat *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodSplat_setupRenderState_FUN_004e4910(CBloodSplat *this_ptr)

{
  g_SMRGLHeaderPrimitive_01cd0e40.base.count = 4;
  g_INT_01cd0e58 = 0;
  g_INT_01cd0e5c = 1;
  g_INT_01cd0e60 = 2;
  g_INT_01cd0e64 = 3;
  g_SRenderVertex_ARRAY_00629014[0].u = 0x80000;
  g_SRenderVertex_ARRAY_00629014[0].v = 0xf80000;
  g_SRenderVertex_ARRAY_00629014[1].u = 0xf80000;
  g_SRenderVertex_ARRAY_00629014[1].v = 0xf80000;
  g_SRenderVertex_ARRAY_00629014[2].u = 0xf80000;
  g_SRenderVertex_ARRAY_00629014[2].v = 0x80000;
  g_SRenderVertex_ARRAY_00629014[3].u = 0x80000;
  g_SRenderVertex_ARRAY_00629014[3].v = 0x80000;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
            (g_CDemonRenderer_PTR_00612560,0xffff);
  return;
}
