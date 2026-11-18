// Name: core_terrain.cpp_CTerrain_render_FUN_005723d0
// Address: 005723d0
// Address Range: [[005723d0, 005724d3]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_render_FUN_005723d0(CTerrain *this_ptr,int render_pass)

#include "nocturne.h"

void __cdecl core_terrain_cpp_CTerrain_render_FUN_005723d0(CTerrain *this_ptr,int render_pass)

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
  if (g_CTerrainInstance.initialized == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_0046d1c0
            (g_CDemonRenderer_PTR_005f2afc,&local_2c);
  local_38 = local_2c.x;
  *(uint *)((int)&stack0xffffffcc + (uint)bVar4 * -8) =
       *(uint *)((int)&local_2c + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&local_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  local_20 = 0x40800;
  local_18 = 0;
  iVar3 = core_ground_cpp_CGround_getHeightAtPosition_FUN_004d09b0(g_CGroundPtr,0,0x40800);
  iVar2 = local_18;
  iVar1 = local_20;
  dVar6 = (double)local_34 * 256;
  dVar7 = (double)local_30 * 256;
  local_1c = iVar3;
  dVar5 = round((double)local_38 * 256);
  dVar6 = round(dVar6);
  local_1c = (int)ROUND(dVar6);
  dVar7 = round(dVar7);
  local_2c.y = (float)((int)ROUND(dVar6) + iVar3);
  local_20 = (int)ROUND(dVar7);
  local_2c.z = (float)((iVar2 + local_20) - this_ptr->animation_counter);
  local_2c.x = (float)(iVar1 + (int)ROUND(dVar5));
  engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_0046cb70
            (g_CDemonRenderer_PTR_005f2afc,(CVector3i *)&local_2c);
  core_ground_cpp_CGround_render_FUN_004d0910(g_CGroundPtr);
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
            (g_CDemonRenderer_PTR_005f2afc,(CVector3f *)&stack0xffffffbc);
  return;
}
