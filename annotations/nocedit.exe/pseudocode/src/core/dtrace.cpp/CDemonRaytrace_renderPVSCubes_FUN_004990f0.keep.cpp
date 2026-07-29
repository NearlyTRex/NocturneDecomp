// Name: core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0
// Address: 004990f0
// MANUAL RECONSTRUCTION
// Address Range: [[004990f0, 00499160]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0(CDemonRaytrace *this_ptr)

{
  int iVar1;

  engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr1,0xff,0xff,0xff);
  for (iVar1 = 0; iVar1 < g_PVSDrawnCubeCount; iVar1 = iVar1 + 1) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr1,&g_PVSCubePositions[iVar1]);
    core_dcube_cpp_CDemonCube_rotateVertices_FUN_00457650
              (g_PVSCubePointers[iVar1],0);
    engine_special_cpp_sync_FUN_005b7bc0();
  }
  return;
}
