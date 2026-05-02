// Name: core_terrain.cpp_CTerrain_render_FUN_005e1f50
// Address: 005e1f50
// MANUAL RECONSTRUCTION
// Address Range: [[005e1f50, 005e2047]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_render_FUN_005e1f50(CTerrain *this_ptr,int render_pass)

#include "nocturne.h"

void __cdecl core_terrain_cpp_CTerrain_render_FUN_005e1f50(CTerrain *this_ptr,int render_pass)

{
  int iVar1;
  CVector3i local_30;
  CVector3i local_24;
  
  if (g_CTerrainInstance.initialized == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
            (g_CDemonRendererPtr2,(CVector3f *)&local_30);
  local_24.x = 0x40800;
  local_24.z = 0;
  iVar1 = core_ground_cpp_CGround_getHeightAtPosition_FUN_004efd30(g_CGroundPtr,0,0x40800);
  local_24.x = local_24.x + (int)ROUND(ROUND((double)(float)local_30.x * 256));
  local_24.y = (int)ROUND(ROUND((double)(float)local_30.y * 256)) + iVar1;
  local_24.z = (local_24.z + (int)ROUND(ROUND((double)(float)local_30.z * 256))) -
               this_ptr->animation_counter;
  engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130(g_CDemonRendererPtr2,&local_24);
  core_ground_cpp_CGround_render_FUN_004efc90(g_CGroundPtr);
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr2,(CVector3f *)&local_30);
  return;
}
