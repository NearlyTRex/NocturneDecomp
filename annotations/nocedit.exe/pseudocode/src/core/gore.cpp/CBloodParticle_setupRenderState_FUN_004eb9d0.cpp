// Name: core_gore.cpp_CBloodParticle_setupRenderState_FUN_004eb9d0
// Address: 004eb9d0
// Address Range: [[004eb9d0, 004ebab2] [006108a8, 006108c4] [03fc5333, 03fc53d7]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004eb9d0(CBloodParticle *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004eb9d0(CBloodParticle *this_ptr)

{
  int iVar1;
  CMatrix3x3f *pCVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  int aiStackY_1000 [997];
  float afStack_68 [2];
  float local_60;
  float local_54;
  float local_48;
  float local_40 [10];
  CVector3i local_18;
  
  g_GoreQuadPrimitive.base.base.count = 4;
  g_GoreQuadPrimitive.base.surface_normal.A = 0;
  g_GoreQuadPrimitive.base.surface_normal.B = 0;
  g_GoreQuadPrimitive.base.surface_normal.C = 0;
  g_GoreQuadPrimitive.base.surface_normal.D = 0;
  g_GoreQuadPrimitive.vertices[0] = 0;
  g_GoreQuadPrimitive.vertices[1] = 1;
  g_GoreQuadPrimitive.vertices[2] = 2;
  g_GoreQuadPrimitive.vertices[3] = 3;
  engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
            (g_CDemonRendererPtr2,&local_18);
  g_ParticleCameraRotation = local_18.x;
  INT_02d83398 = local_18.z;
  INT_02d83394 = 0;
  INT_02d8339c = (int)ROUND(ROUND((double)(g_CurrentSceneCamera->base).rotation_matrix.m[0].z *
                                  -65536));
  INT_02d833a0 = (int)ROUND(ROUND((double)(g_CurrentSceneCamera->base).rotation_matrix.m[1].z *
                                  -65536));
  INT_02d833a4 = (int)ROUND(ROUND((double)(g_CurrentSceneCamera->base).rotation_matrix.m[2].z *
                                  -65536));
  return;
}
