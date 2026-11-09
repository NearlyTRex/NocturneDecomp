// Name: core_wateract.cpp_FUN_005787f0
// Address: 005787f0
// Address Range: [[005787f0, 00578a68]]
// Convention: unknown
// Signature: int core_wateract_cpp_FUN_005787f0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_wateract_cpp_FUN_005787f0(CDemonActor *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  SMRGLTextureBasic *texture;
  int *piVar4;
  float *pfVar5;
  SMRGLPrimitivePoly *poly;
  uint *puVar6;
  byte *puVar7;
  uint *puVar8;
  int iVar9;
  byte bVar10;
  uint auStack_38 [6];
  uint auStack_20 [6];
  int iStack_8;
  
  bVar10 = 0;
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(param_1);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
    puVar6 = auStack_38;
    puVar8 = auStack_20;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    iStack_8 = core_box_cpp_FUN_0041daf0(auStack_20);
    if (iStack_8 != 0) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
                (DAT_005f2afc,*(int *)&param_1[1].field_0xc);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
      if (*(int *)&param_1[1].field_0x140 == 0) {
        texture = (SMRGLTextureBasic *)(*(int *)&param_1[0x201].field_0xd4 * 0x18 + 0x606e84);
      }
      else {
        texture = (SMRGLTextureBasic *)(*(int *)&param_1[0x201].field_0xd4 * 0x18 + 0x607004);
      }
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
      iVar3 = 0;
      if (0 < *(int *)&param_1[1].field_0x144) {
        piVar4 = (int *)0x2d06e08;
        pfVar5 = (float *)&param_1[1].field_0x148;
        do {
          *piVar4 = (int)ROUND(*pfVar5 * _DAT_005e5ec0);
          piVar4[1] = (int)ROUND(pfVar5[1] * _DAT_005e5ec0);
          piVar4[2] = (int)ROUND(pfVar5[2] * _DAT_005e5ec0);
          iVar3 = iVar3 + 1;
          pfVar5 = pfVar5 + 8;
          piVar4 = piVar4 + 3;
        } while (iVar3 < *(int *)&param_1[1].field_0x144);
      }
      iVar3 = 0;
      core_set_cpp_CDemonSet_rotateVerticies_FUN_00538ad0
                (g_CDemonSetPtr,*(int *)&param_1[1].field_0x144,(CVector3i *)0x2d06e08);
      if (0 < *(int *)&param_1[1].field_0x144) {
        puVar7 = &param_1[1].field_0x154;
        iVar9 = 0;
        do {
          core_set_cpp_FUN_005386d0(g_CDemonSetPtr,puVar7,&DAT_02cfd900,iVar3);
          iVar1 = *(int *)DAT_005f2afc;
          lVar2 = (longlong)(*(int *)&param_1[1].field_0x134 << 8) *
                  (longlong)*(int *)(iVar1 + 0x20 + iVar9);
          *(uint *)(iVar1 + 0x20 + iVar9) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)(*(int *)&param_1[1].field_0x138 << 8) *
                  (longlong)*(int *)(iVar1 + 0x24 + iVar9);
          *(uint *)(iVar1 + 0x24 + iVar9) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          piVar4 = (int *)(iVar1 + 0x28 + iVar9);
          iVar9 = iVar9 + 0x30;
          lVar2 = (longlong)(*(int *)&param_1[1].field_0x13c << 8) * (longlong)*piVar4;
          *(uint *)(iVar1 + -8 + iVar9) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          iVar3 = iVar3 + 1;
          puVar7 = puVar7 + 0x20;
        } while (iVar3 < *(int *)&param_1[1].field_0x144);
      }
      poly = (SMRGLPrimitivePoly *)&param_1[0x5f].field_0x4;
      if (*(int *)&param_1[1].field_0xc < 0xfde9) {
        iVar3 = 0;
        if (0 < *(int *)&param_1[0x201].field_0xe0) {
          do {
            iVar3 = iVar3 + 1;
            engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0
                      (DAT_005f2afc,poly,0x267);
            poly = poly + 0x48;
          } while (iVar3 < *(int *)&param_1[0x201].field_0xe0);
        }
      }
      else {
        core_set_cpp_FUN_0053ab80
                  (g_CDemonSetPtr,(SMRGLPrimitiveQuad *)poly,*(int *)&param_1[0x201].field_0xe0,-1);
      }
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
    return iStack_8;
  }
  return 0;
}
