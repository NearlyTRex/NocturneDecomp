// Name: core_fire.cpp_CSmokeParticle_setupRenderState_FUN_004bf1f0
// Address: 004bf1f0
// MANUAL RECONSTRUCTION
// Address Range: [[004bf1f0, 004bf2d2] [00610903, 0061091f] [03fc553f, 03fc55e3]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSmokeParticle_setupRenderState_FUN_004bf1f0(CSmokeParticle *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CSmokeParticle_setupRenderState_FUN_004bf1f0(CSmokeParticle *this_ptr)

{
  CVector3i local_18;
  
  g_BillboardPrimitive.base.base.count = 4;
  g_BillboardPrimitive.base.surface_normal.A.i = 0;
  g_BillboardPrimitive.base.surface_normal.B.i = 0;
  g_BillboardPrimitive.base.surface_normal.C.i = 0;
  g_BillboardPrimitive.base.surface_normal.D.i = 0;
  g_BillboardPrimitive.vertices[0] = 0;
  g_BillboardPrimitive.vertices[1] = 1;
  g_BillboardPrimitive.vertices[2] = 2;
  g_BillboardPrimitive.vertices[3] = 3;
  engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
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
}
