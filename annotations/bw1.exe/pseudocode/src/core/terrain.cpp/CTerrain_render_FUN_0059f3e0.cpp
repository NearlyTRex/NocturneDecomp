// Name: core_terrain.cpp_CTerrain_render_FUN_0059f3e0
// Address: 0059f3e0
// Address Range: [[0059f3e0, 0059f4e3]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_render_FUN_0059f3e0(CTerrain *this_ptr,int render_pass)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_terrain_cpp_CTerrain_render_FUN_0059f3e0(CTerrain *this_ptr,int render_pass)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float afStackY_1020 [1013];
  float local_38;
  float local_34;
  float local_30;
  CVector3f local_2c;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar4 = 0;
  if (_DAT_02c8ae6c == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00483ae0(DAT_00612560,&local_2c);
  local_38 = local_2c.x;
  *(uint *)((int)&stack0xffffffcc + (uint)bVar4 * -8) =
       *(uint *)((int)&local_2c + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&local_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  local_20 = 0x40800;
  local_18 = 0;
  iVar3 = core_ground_cpp_CGround_getHeightAtPosition_FUN_004e8020(g_CGroundPtr,0,0x40800);
  iVar2 = local_18;
  iVar1 = local_20;
  dVar6 = (double)local_34 * _DAT_005f88a5;
  dVar7 = (double)local_30 * _DAT_005f88a5;
  local_1c = iVar3;
  dVar5 = round((double)local_38 * _DAT_005f88a5);
  dVar6 = round(dVar6);
  local_1c = (int)ROUND(dVar6);
  dVar7 = round(dVar7);
  local_2c.y = (float)((int)ROUND(dVar6) + iVar3);
  local_20 = (int)ROUND(dVar7);
  local_2c.z = (float)((iVar2 + local_20) - this_ptr->animation_counter);
  local_2c.x = (float)(iVar1 + (int)ROUND(dVar5));
  engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_00483490
            (DAT_00612560,(CVector3i *)&local_2c);
  core_ground_cpp_CGround_render_FUN_004e7f80(g_CGroundPtr);
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
            (DAT_00612560,(CVector3f *)&stack0xffffffbc);
  return;
}
