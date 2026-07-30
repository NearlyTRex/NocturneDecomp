// Name: core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_0046af70
// Address: 0046af70
// Address Range: [[0046af70, 0046afe0]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_0046af70(CDemonRaytrace *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_0046af70(CDemonRaytrace *this_ptr)

{
  CVector3f *world_position;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00460f20(0x01B4D738,0xff,0xff,0xff);
  if (0 < _DAT_01b7b744) {
    world_position = CVector3f_ARRAY_01b8efcc;
    iVar2 = 0;
    do {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                (0x01B4D738,world_position);
      core_dcube_cpp_CDemonCube_rotateVertices_FUN_0044aff0(*(CDemonCube **)(iVar2 + 0x1b7b74c),0);
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 1;
      engine_special_cpp_sync_FUN_00532b30();
      world_position = world_position + 1;
    } while (iVar1 < _DAT_01b7b744);
  }
  return;
}
