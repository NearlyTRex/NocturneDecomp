// Name: core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_0048e770
// Address: 0048e770
// Address Range: [[0048e770, 0048e7e0]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_0048e770(CDemonRaytrace *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_0048e770(CDemonRaytrace *this_ptr)

{
  CVector3f *world_position;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0(0x01BC120C,0xff,0xff,0xff);
  if (0 < _DAT_01bef218) {
    world_position = (CVector3f *)&DAT_01c02aa0;
    iVar2 = 0;
    do {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                (0x01BC120C,world_position);
      core_dcube_cpp_CDemonCube_rotateVertices_FUN_00457f70(*(CDemonCube **)(iVar2 + 0x1bef220),0);
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 1;
      engine_special_cpp_sync_FUN_00582920();
      world_position = world_position + 1;
    } while (iVar1 < _DAT_01bef218);
  }
  return;
}
