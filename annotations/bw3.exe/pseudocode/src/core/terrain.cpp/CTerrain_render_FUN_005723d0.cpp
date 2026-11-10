// Name: core_terrain.cpp_CTerrain_render_FUN_005723d0
// Address: 005723d0
// Address Range: [[005723d0, 005724d3]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_render_FUN_005723d0(CTerrain *this_ptr,int render_pass)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_terrain_cpp_CTerrain_render_FUN_005723d0(CTerrain *this_ptr,int render_pass)

{
  int iVar1;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  ulonglong uVar5;
  int aiStackY_1020 [1015];
  CVector3f local_38;
  float local_2c;
  int aiStack_28 [2];
  CVector3i local_20;
  int local_14;
  
  bVar2 = 0;
  if (_DAT_02cfd8bc == 0) {
    return;
  }
  engine_matrix_c_FUN_0046d1c0(DAT_005f2afc);
  local_38.x = local_2c;
  *(int *)((int)&local_38 + (uint)bVar2 * -8 + 4) = aiStack_28[(uint)bVar2 * -2];
  *(int *)((int)&local_38 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       aiStack_28[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  local_20.x = 0x40800;
  local_20.z = 0;
  local_20.y = core_ground_cpp_CGround_getHeightAtPosition_FUN_004d09b0(g_CGroundPtr,0,0x40800);
  iVar1 = local_20.z;
  fVar3 = (float10)local_38.y * (float10)_DAT_005d6e14;
  fVar4 = (float10)local_38.z * (float10)_DAT_005d6e14;
  round();
  round();
  local_14 = (int)ROUND(fVar3);
  uVar5 = round();
  local_20.y = (int)uVar5 + (int)((ulonglong)uVar5 >> 0x20);
  local_14 = (int)ROUND(fVar4);
  local_20.z = (iVar1 + local_14) - *(int *)this_ptr;
  engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_0046cb70(DAT_005f2afc,&local_20);
  core_ground_cpp_CGround_render_FUN_004d0910(g_CGroundPtr);
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
            (DAT_005f2afc,&local_38);
  return;
}
