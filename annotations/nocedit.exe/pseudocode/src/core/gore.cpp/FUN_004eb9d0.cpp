// Name: core_gore.cpp_FUN_004eb9d0
// Address: 004eb9d0
// Address Range: [[004eb9d0, 004ebab2]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004eb9d0(void)

#include "nocturne.h"

void core_gore_cpp_FUN_004eb9d0(void)

{
  int iVar1;
  CMatrix3x3i *pCVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  double dVar9;
  int aiStackY_1000 [997];
  float local_60;
  float local_54;
  float local_48;
  int local_40 [10];
  CVector3i local_18;
  
  bVar5 = 0;
  DAT_02d83368.base.count = 4;
  DAT_02d83368.surface_normal.A = 0;
  DAT_02d83368.surface_normal.B = 0;
  DAT_02d83368.surface_normal.C = 0;
  DAT_02d83368.surface_normal.D = 0;
  INT_02d83380 = 0;
  INT_02d83384 = 1;
  INT_02d83388 = 2;
  INT_02d8338c = 3;
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
  fVar6 = (float10)-65536;
  fVar7 = (float10)local_48 * fVar6;
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)((float10)local_60 * fVar6));
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)((float10)local_54 * fVar6));
  fVar6 = (float10)dVar9;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar7);
  INT_02d8339c = (int)ROUND(dVar8);
  INT_02d833a0 = (int)ROUND(fVar6);
  INT_02d833a4 = (int)ROUND(dVar9);
  return;
}
