// Name: core_terrain.cpp_CTerrain_render_FUN_005e1f50
// Address: 005e1f50
// Address Range: [[005e1f50, 005e2047]]
// Convention: __cdecl
// Signature: void core_terrain.cpp_CTerrain_render_FUN_005e1f50(CTerrain * this_ptr)

#include "nocturne.h"

void __cdecl core_terrain_cpp_CTerrain_render_FUN_005e1f50(CTerrain *this_ptr)

{
  int iVar1;
  int extraout_EAX;
  int extraout_EDX;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  CVector3i local_2c;
  int local_20;
  int local_1c;
  int local_18;
  
  if (g_CTerrainInstance.initialized == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
            (g_CDemonRendererPtr,(float *)&local_2c);
  local_20 = 0x40800;
  local_18 = 0;
  local_1c = core_ground_cpp_CGround_getHeightAtPosition_FUN_004efd30(g_CGroundPtr,0,0x40800);
  iVar1 = local_18;
  fVar2 = (float10)256;
  fVar3 = (float10)(float)local_2c.y * fVar2;
  fVar4 = (float10)(float)local_2c.z * fVar2;
  crt_math_c_round_FUN_005fe6b0((double)((float10)(float)local_2c.x * fVar2));
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)fVar3);
  local_1c = (int)ROUND(dVar5);
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)fVar4);
  local_2c.y = extraout_EAX + extraout_EDX;
  local_20 = (int)ROUND(dVar5);
  local_2c.z = (iVar1 + local_20) - this_ptr->animation_counter;
  engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130(g_CDemonRendererPtr,&local_2c);
  core_ground_cpp_CGround_render_FUN_004efc90(g_CGroundPtr);
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr,&local_2c);
  return;
}
