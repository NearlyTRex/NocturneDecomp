// Name: core_terrain.cpp_CTerrain_render_FUN_005e1f50
// Address: 005e1f50
// Address Range: [[005e1f50, 005e2047]]
// Convention: __cdecl
// Signature: void core_terrain.cpp_CTerrain_render_FUN_005e1f50(CTerrain * this_ptr)

#include "nocturne.h"

void __cdecl core_terrain_cpp_CTerrain_render_FUN_005e1f50(CTerrain *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float10 fVar2;
  double dVar3;
  float in_stack_ffffffdc;
  
  if (g_CTerrainInstance.initialized == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
            (g_CDemonRendererPtr,(float *)&stack0xffffffd0);
  iVar1 = core_ground_cpp_CGround_getHeightAtPosition_FUN_004efd30(g_CGroundPtr,0,0x40800);
  fVar2 = (float10)in_stack_ffffffdc * (float10)256;
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar1,iVar1));
  dVar3 = crt_math_c_round_FUN_005fe6b0(dVar3);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar3 >> 0x20),(int)ROUND(fVar2)))
  ;
  engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130
            (g_CDemonRendererPtr,(CVector3i *)&stack0xfffffff0);
  core_ground_cpp_CGround_render_FUN_004efc90(g_CGroundPtr);
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr,(CVector3i *)&stack0xffffffec);
  return;
}
