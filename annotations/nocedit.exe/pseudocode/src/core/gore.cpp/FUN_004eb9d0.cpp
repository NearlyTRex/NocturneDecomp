// Name: core_gore.cpp_FUN_004eb9d0
// Address: 004eb9d0
// Address Range: [[004eb9d0, 004ebab2]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004eb9d0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_gore.cpp_FUN_004eb9d0() */

double core_gore_cpp_FUN_004eb9d0(void)

{
  uint extraout_EAX;
  int iVar1;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  CMatrix3x3i *pCVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  int aiStackY_ffc [996];
  CVector3i *in_stack_ffffff98;
  int iStack_64;
  uint local_60;
  float fStack_5c;
  float fStack_50;
  float fStack_44;
  int aiStack_3c [10];
  uint uStack_14;
  uint uStack_10;
  
  bVar5 = 0;
  DAT_02d83368.base.count = 4;
  DAT_02d83368.surface_normal.A = 0;
  DAT_02d83368.surface_normal.B = 0;
  DAT_02d83368.surface_normal.C = 0;
  DAT_02d83368.surface_normal.D = 0;
  _DAT_02d83380 = 0;
  _DAT_02d83384 = 1;
  _DAT_02d83388 = 2;
  _DAT_02d8338c = 3;
  engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
            (g_CDemonRendererPtr,in_stack_ffffff98);
  _DAT_02d83390 = uStack_14;
  *(uint *)(&DAT_02d83394 + (uint)bVar5 * -8) = (&uStack_10)[(uint)bVar5 * -2];
  *(uint *)(&DAT_02d83398 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xfffffff4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  _DAT_02d83394 = 0;
  pCVar2 = &(g_CurrentSceneCamera->base).rotation_matrix;
  piVar3 = aiStack_3c;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = pCVar2->m[0].x;
    pCVar2 = (CMatrix3x3i *)((int)pCVar2 + (uint)bVar5 * -8 + 4);
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
  }
  piVar3 = aiStack_3c;
  piVar4 = &stack0xffffff9c;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  fVar6 = (float10)-65536;
  fVar7 = (float10)fStack_5c * fVar6;
  fVar8 = (float10)fStack_50 * fVar6;
  fVar6 = (float10)fStack_44 * fVar6;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
  iStack_64 = 0x4eba8f;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  local_60 = 0x4eba96;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  _DAT_02d8339c = (int)ROUND(fVar7);
  _DAT_02d833a0 = (int)ROUND(fVar8);
  _DAT_02d833a4 = (int)ROUND(fVar6);
  return dVar9;
}
