// Name: core_terrain.cpp_CTerrain_render_FUN_005e1f50
// Address: 005e1f50
// Address Range: [[005e1f50, 005e2047]]
// Convention: __cdecl
// Signature: void core_terrain.cpp_CTerrain_render_FUN_005e1f50(CTerrain * this_ptr)

#include "nocturne.h"

void __cdecl core_terrain_cpp_CTerrain_render_FUN_005e1f50(CTerrain *this_ptr)

{
  int extraout_EAX;
  int extraout_EDX;
  BADSPACEBASE *in_ESP;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  byte local_2c [8];
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  if (g_CTerrainInstance.initialized == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
            (g_CDemonRendererPtr,(float *)&stack0xffffffd0);
  local_20 = 3.70212e-40;
  local_18 = 0;
  local_18 = core_ground_cpp_CGround_getHeightAtPosition_FUN_004efd30(g_CGroundPtr,0,0x40800);
  fVar1 = (float10)256;
  fVar2 = (float10)local_24 * fVar1;
  fVar3 = (float10)local_20 * fVar1;
  local_2c._0_4_ = 0x5e1fca;
  crt_math_c_round_FUN_005fe6b0((double)((float10)(float)local_2c._4_4_ * fVar1));
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)fVar2);
  local_18 = (int)ROUND(dVar4);
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)fVar3);
  local_24 = (float)(extraout_EAX + extraout_EDX);
  local_1c = (int)ROUND(dVar4);
  local_20 = (float)((iStack_14 + local_1c) - this_ptr->animation_counter);
  engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130
            (g_CDemonRendererPtr,(CVector3i *)(local_2c + 4));
  core_ground_cpp_CGround_render_FUN_004efc90(g_CGroundPtr);
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr,(CVector3i *)local_2c);
  return;
}
