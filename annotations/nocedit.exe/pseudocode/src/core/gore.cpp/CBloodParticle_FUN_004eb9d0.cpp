// Name: core_gore.cpp_CBloodParticle_FUN_004eb9d0
// Address: 004eb9d0
// Address Range: [[004eb9d0, 004ebab2]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodParticle_FUN_004eb9d0(CBloodParticle *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodParticle_FUN_004eb9d0(CBloodParticle *this_ptr)

{
  int iVar1;
  CMatrix3x3i *pCVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int aiStackY_1000 [997];
  float local_60;
  float local_54;
  float local_48;
  int local_40 [10];
  CVector3i local_18;
  
  bVar5 = 0;
  SMRGLPrimitiveQuadIndex_02d83368.base.base.count = 4;
  SMRGLPrimitiveQuadIndex_02d83368.base.surface_normal.A = 0;
  SMRGLPrimitiveQuadIndex_02d83368.base.surface_normal.B = 0;
  SMRGLPrimitiveQuadIndex_02d83368.base.surface_normal.C = 0;
  SMRGLPrimitiveQuadIndex_02d83368.base.surface_normal.D = 0;
  SMRGLPrimitiveQuadIndex_02d83368.vertices[0] = 0;
  SMRGLPrimitiveQuadIndex_02d83368.vertices[1] = 1;
  SMRGLPrimitiveQuadIndex_02d83368.vertices[2] = 2;
  SMRGLPrimitiveQuadIndex_02d83368.vertices[3] = 3;
  engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
            (g_CDemonRendererPtr2,&local_18);
  INT_02d83390 = local_18.x;
  (&INT_02d83394)[(uint)bVar5 * -2] = *(int *)((int)&local_18 + (uint)bVar5 * -8 + 4);
  (&INT_02d83398)[(uint)bVar5 * -2 + (uint)bVar5 * -2] =
       *(int *)((int)&local_18 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  INT_02d83394 = 0;
  pCVar2 = &(g_CurrentSceneCamera->base).rotation_matrix;
  piVar3 = local_40;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = pCVar2->m[0].x;
    pCVar2 = (CMatrix3x3i *)((int)pCVar2 + (uint)bVar5 * -8 + 4);
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
  }
  piVar3 = local_40;
  piVar4 = (int *)&stack0xffffff98;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  dVar7 = (double)local_54 * -65536;
  dVar8 = (double)local_48 * -65536;
  dVar6 = round((double)local_60 * -65536);
  dVar7 = round(dVar7);
  dVar8 = round(dVar8);
  INT_02d8339c = (int)ROUND(dVar6);
  INT_02d833a0 = (int)ROUND(dVar7);
  INT_02d833a4 = (int)ROUND(dVar8);
  return;
}
