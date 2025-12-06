// Name: core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0
// Address: 004990f0
// Address Range: [[004990f0, 00499160]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0(CDemonRaytrace * this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0(CDemonRaytrace *this_ptr)

{
  CVector3f *world_position;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr,0xff,0xff,0xff);
  if (0 < g_PVSDrawnCubeCount) {
    world_position = g_PVSCubePositions;
    iVar2 = 0;
    do {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr,world_position);
      core_dcube_cpp_CDemonCube_rotateVertices_FUN_00457650
                (*(CDemonCube **)((int)g_PVSCubePointers + iVar2),0);
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 1;
      wincore_windll_cpp_sync_FUN_005b7bc0();
      world_position = world_position + 1;
    } while (iVar1 < g_PVSDrawnCubeCount);
  }
  return;
}
