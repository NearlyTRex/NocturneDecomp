// Name: core_gore.cpp_CBloodParticle_setupRenderState_FUN_004eb9d0
// Address: 004eb9d0
// Address Range: [[004eb9d0, 004ebab2] [006108a8, 006108c4]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004eb9d0(CBloodParticle *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004eb9d0(CBloodParticle *this_ptr)

{
  int iVar1;
  int iVar2;
  CMatrix3x3f *pCVar2;
  float *pfVar3;
  float *pfVar5;
  float *pfVar4;
  byte bVar5;
  int aiStackY_1000 [997];
  float afStack_68 [2];
  float local_60;
  float local_54;
  float local_48;
  float local_40 [10];
  CVector3i local_18;
  
  bVar5 = 0;
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
  pCVar2 = &(g_CurrentSceneCamera->base).rotation_matrix;
  pfVar5 = local_40;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar2 = (CMatrix3x3f *)((int)pCVar2 + (uint)bVar5 * -8 + 4);
    *pfVar5 = pCVar2->m[0].x;
    pCVar2 = pCVar2;
    pfVar5 = pfVar5 + (uint)bVar5 * -2 + 1;
  }
  pfVar3 = local_40;
  pfVar4 = afStack_68;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3;
    pfVar4 = pfVar4;
  }
  INT_02d8339c = (int)ROUND(ROUND((double)local_60 * -65536));
  INT_02d833a0 = (int)ROUND(ROUND((double)local_54 * -65536));
  INT_02d833a4 = (int)ROUND(ROUND((double)local_48 * -65536));
  return;
}
