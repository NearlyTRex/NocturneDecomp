// Name: core_gore.cpp_CBloodParticle_setupRenderState_FUN_004eb9d0
// Address: 004eb9d0
// MANUAL RECONSTRUCTION
// Address Range: [[004eb9d0, 004ebab2] [006108a8, 006108c4] [03fc5333, 03fc53d7]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004eb9d0(CBloodParticle *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004eb9d0(CBloodParticle *this_ptr)

{
  CVector3i local_18;

  g_GoreQuadPrimitive.base.base.count = 4;
  g_GoreQuadPrimitive.base.surface_normal.A.i = 0;
  g_GoreQuadPrimitive.base.surface_normal.B.i = 0;
  g_GoreQuadPrimitive.base.surface_normal.C.i = 0;
  g_GoreQuadPrimitive.base.surface_normal.D.i = 0;
  g_GoreQuadPrimitive.vertices[0] = 0;
  g_GoreQuadPrimitive.vertices[1] = 1;
  g_GoreQuadPrimitive.vertices[2] = 2;
  g_GoreQuadPrimitive.vertices[3] = 3;
  engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
            (g_CDemonRendererPtr2,&local_18);
  g_ParticleCameraRotation.x = local_18.x;
  g_ParticleCameraRotation.z = local_18.z;
  g_ParticleCameraRotation.y = 0;
  CVector3i_02d8339c.x =
       (int)ROUND(ROUND((double)(g_CurrentSceneCamera->base).rotation_matrix.m[0].z *
                        -65536));
  CVector3i_02d8339c.y =
       (int)ROUND(ROUND((double)(g_CurrentSceneCamera->base).rotation_matrix.m[1].z *
                        -65536));
  CVector3i_02d8339c.z =
       (int)ROUND(ROUND((double)(g_CurrentSceneCamera->base).rotation_matrix.m[2].z *
                        -65536));
  return;
}
