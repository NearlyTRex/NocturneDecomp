// Name: core_terrain.cpp_CTerrain_render_FUN_005e1f50
// Address: 005e1f50
// Address Range: [[005e1f50, 005e2047]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_render_FUN_005e1f50(CTerrain *this_ptr)

#include "nocturne.h"

void __cdecl core_terrain_cpp_CTerrain_render_FUN_005e1f50(CTerrain *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  CVector3i local_30;
  int local_24;
  int local_20;
  int local_1c;
  
  if (g_CTerrainInstance.initialized == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
            (g_CDemonRendererPtr2,(float *)&local_30);
  local_24 = 0x40800;
  local_1c = 0;
  iVar3 = core_ground_cpp_CGround_getHeightAtPosition_FUN_004efd30(g_CGroundPtr,0,0x40800);
  iVar2 = local_1c;
  iVar1 = local_24;
  dVar5 = (double)(float)local_30.y * 256;
  dVar6 = (double)(float)local_30.z * 256;
  local_20 = iVar3;
  dVar4 = round((double)(float)local_30.x * 256);
  dVar5 = round(dVar5);
  local_20 = (int)ROUND(dVar5);
  dVar6 = round(dVar6);
  local_30.y = (int)ROUND(dVar5) + iVar3;
  local_24 = (int)ROUND(dVar6);
  local_30.z = (iVar2 + local_24) - this_ptr->animation_counter;
  local_30.x = iVar1 + (int)ROUND(dVar4);
  engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130(g_CDemonRendererPtr2,&local_30);
  core_ground_cpp_CGround_render_FUN_004efc90(g_CGroundPtr);
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr2,(CVector3i *)&stack0xffffffc4);
  return;
}
