// Name: core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_00476280
// Address: 00476280
// Address Range: [[00476280, 004762f0]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_00476280(CDemonRaytrace *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_00476280(CDemonRaytrace *this_ptr)

{
  CVector3f *world_position;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0(0x01BA5C50,0xff,0xff,0xff);
  if (0 < _DAT_01bd3c5c) {
    world_position = (CVector3f *)&DAT_01be74e4;
    iVar2 = 0;
    do {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                (0x01BA5C50,world_position);
      core_dcube_cpp_CDemonCube_rotateVertices_FUN_004468c0(*(CDemonCube **)(iVar2 + 0x1bd3c64),0);
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 1;
      engine_special_cpp_sync_FUN_0055fed0();
      world_position = world_position + 1;
    } while (iVar1 < _DAT_01bd3c5c);
  }
  return;
}
