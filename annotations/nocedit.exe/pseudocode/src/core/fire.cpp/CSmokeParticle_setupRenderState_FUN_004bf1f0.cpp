// Name: core_fire.cpp_CSmokeParticle_setupRenderState_FUN_004bf1f0
// Address: 004bf1f0
// Address Range: [[004bf1f0, 004bf2d2] [00610903, 0061091f] [03fc553f, 03fc55e3]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CSmokeParticle_setupRenderState_FUN_004bf1f0(CSmokeParticle *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_fire_cpp_CSmokeParticle_setupRenderState_FUN_004bf1f0(CSmokeParticle *this_ptr)

{
  CVector3i *pCVar1;
  int iVar2;
  CMatrix3x3f *pCVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1000 [997];
  float local_60;
  float local_54;
  float local_48;
  CVector3i local_18;
  
  g_BillboardPrimitive.base.base.count = 4;
  g_BillboardPrimitive.base.surface_normal.A = 0;
  g_BillboardPrimitive.base.surface_normal.B = 0;
  g_BillboardPrimitive.base.surface_normal.C = 0;
  g_BillboardPrimitive.base.surface_normal.D = 0;
  g_BillboardPrimitive.vertices[0] = 0;
  g_BillboardPrimitive.vertices[1] = 1;
  g_BillboardPrimitive.vertices[2] = 2;
  g_BillboardPrimitive.vertices[3] = 3;
  pCVar1 = engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
                     (g_CDemonRendererPtr2,&local_18);
  g_BillboardCameraRight.x = local_18.x;
  g_BillboardCameraRight.z = local_18.z;
  g_BillboardCameraRight.y = 0;
  g_BillboardCameraUp.x =
       (int)ROUND(ROUND((double)(g_CurrentSceneCamera->base).rotation_matrix.m[0].z *
                        -65536));
  g_BillboardCameraUp.y =
       (int)ROUND(ROUND((double)(g_CurrentSceneCamera->base).rotation_matrix.m[1].z *
                        -65536));
  g_BillboardCameraUp.z =
       (int)ROUND(ROUND((double)(g_CurrentSceneCamera->base).rotation_matrix.m[2].z *
                        -65536));
  return (int)pCVar1;
}
