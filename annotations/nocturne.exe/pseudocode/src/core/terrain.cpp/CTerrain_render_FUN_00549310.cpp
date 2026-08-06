// Name: core_terrain.cpp_CTerrain_render_FUN_00549310
// Address: 00549310
// Address Range: [[00549310, 00549407]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_render_FUN_00549310(CTerrain *this_ptr,int render_pass)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_terrain_cpp_CTerrain_render_FUN_00549310(CTerrain *this_ptr,int render_pass)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  CVector3f local_30;
  int local_24;
  int local_20;
  int local_1c;
  
  if (_DAT_02dd10cc == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
            (g_CDemonRenderer_PTR_005ae704,&local_30);
  local_24 = 0x40800;
  local_1c = 0;
  iVar3 = core_ground_cpp_CGround_getHeightAtPosition_FUN_004b21b0
                    ((CGround *)INT_005ba8ec,0,0x40800);
  iVar2 = local_1c;
  iVar1 = local_24;
  dVar5 = (double)local_30.y * 256;
  dVar6 = (double)local_30.z * 256;
  local_20 = iVar3;
  dVar4 = round((double)local_30.x * 256);
  dVar5 = round(dVar5);
  local_20 = (int)ROUND(dVar5);
  dVar6 = round(dVar6);
  local_30.y = (float)((int)ROUND(dVar5) + iVar3);
  local_24 = (int)ROUND(dVar6);
  local_30.z = (float)((iVar2 + local_24) - this_ptr->animation_counter);
  local_30.x = (float)(iVar1 + (int)ROUND(dVar4));
  engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_004606e0
            (g_CDemonRenderer_PTR_005ae704,(CVector3i *)&local_30);
  core_ground_cpp_CGround_render_FUN_004b2110((CGround *)INT_005ba8ec);
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
            (g_CDemonRenderer_PTR_005ae704,(CVector3f *)&stack0xffffffc4);
  return;
}
