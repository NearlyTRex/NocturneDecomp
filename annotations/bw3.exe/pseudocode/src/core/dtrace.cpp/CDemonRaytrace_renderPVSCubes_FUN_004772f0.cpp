// Name: core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004772f0
// Address: 004772f0
// Address Range: [[004772f0, 00477360]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_004772f0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_004772f0(CDemonRaytrace *this_ptr)

{
  CVector3f *world_position;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0046d3d0(0x01BDD7E4,0xff,0xff,0xff);
  if (0 < _DAT_01c0b7b4) {
    world_position = (CVector3f *)&DAT_01c1f03c;
    iVar2 = 0;
    do {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                (0x01BDD7E4,world_position);
      core_dcube_cpp_CDemonCube_rotateVertices_FUN_004540c0(*(CDemonCube **)(iVar2 + 0x1c0b7bc),0);
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 1;
      engine_special_cpp_sync_FUN_005661f0();
      world_position = world_position + 1;
    } while (iVar1 < _DAT_01c0b7b4);
  }
  return;
}
