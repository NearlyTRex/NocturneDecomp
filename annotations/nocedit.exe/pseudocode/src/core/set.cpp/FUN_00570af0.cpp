// Name: core_set.cpp_FUN_00570af0
// Address: 00570af0
// Address Range: [[00570af0, 00570b63]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_00570af0(void)

#include "nocturne.h"

void core_set_cpp_FUN_00570af0(void)

{
  int in_stack_00000004;
  
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr2,(CVector3i *)&g_SavedCameraOrigin);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
            (g_CDemonRendererPtr2,g_SavedProjectionFactor);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr2);
  engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0(g_CDemonRendererPtr2,0);
  *(uint *)(in_stack_00000004 + 0x161650) = 0;
  return;
}
