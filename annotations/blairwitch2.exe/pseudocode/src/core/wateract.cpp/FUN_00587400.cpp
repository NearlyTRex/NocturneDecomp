// Name: core_wateract.cpp_FUN_00587400
// Address: 00587400
// Address Range: [[00587400, 00587645]]
// Convention: unknown
// Signature: int core_wateract_cpp_FUN_00587400(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_wateract_cpp_FUN_00587400(CDemonActor *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  SMRGLPrimitivePoly *poly;
  uint *puVar6;
  CVector3f *vertex_position;
  uint *puVar7;
  int iVar8;
  byte bVar9;
  uint auStack_38 [6];
  uint auStack_20 [6];
  int iStack_8;
  
  bVar9 = 0;
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
    puVar6 = auStack_20;
    puVar7 = auStack_38;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    }
    iStack_8 = core_box_cpp_FUN_0041a840(auStack_38);
    if (iStack_8 != 0) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
                (DAT_0060b280,*(int *)&param_1[1].field_0xc);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
      iVar3 = 0;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                (DAT_0060b280,
                 (SMRGLTextureBasic *)(*(int *)&param_1[0xff].field_0x238 * 0x18 + 0x61e704));
      if (0 < *(int *)&param_1[1].field_0x140) {
        piVar4 = (int *)0x265cc48;
        pfVar5 = (float *)&param_1[1].field_0x144;
        do {
          *piVar4 = (int)ROUND(*pfVar5 * _DAT_005fdca0);
          piVar4[1] = (int)ROUND(pfVar5[1] * _DAT_005fdca0);
          piVar4[2] = (int)ROUND(pfVar5[2] * _DAT_005fdca0);
          iVar3 = iVar3 + 1;
          pfVar5 = pfVar5 + 8;
          piVar4 = piVar4 + 3;
        } while (iVar3 < *(int *)&param_1[1].field_0x140);
      }
      iVar3 = 0;
      core_set_cpp_CDemonSet_rotateVerticies_FUN_00531e90
                (g_CDemonSetPtr,*(int *)&param_1[1].field_0x140,(CVector3i *)0x265cc48);
      if (0 < *(int *)&param_1[1].field_0x140) {
        vertex_position = (CVector3f *)&param_1[1].field_0x150;
        iVar8 = 0;
        do {
          core_set_cpp_FUN_00531a90(g_CDemonSetPtr,vertex_position,(CVector3f *)&DAT_0265370c,iVar3)
          ;
          iVar1 = *(int *)DAT_0060b280;
          lVar2 = (longlong)(*(int *)&param_1[1].field_0x134 << 8) *
                  (longlong)*(int *)(iVar1 + 0x20 + iVar8);
          *(uint *)(iVar1 + 0x20 + iVar8) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)(*(int *)&param_1[1].field_0x138 << 8) *
                  (longlong)*(int *)(iVar1 + 0x24 + iVar8);
          *(uint *)(iVar1 + 0x24 + iVar8) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          piVar4 = (int *)(iVar1 + 0x28 + iVar8);
          iVar8 = iVar8 + 0x30;
          lVar2 = (longlong)(*(int *)&param_1[1].field_0x13c << 8) * (longlong)*piVar4;
          *(uint *)(iVar1 + -8 + iVar8) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          iVar3 = iVar3 + 1;
          vertex_position = (CVector3f *)&vertex_position[2].field_0x8;
        } while (iVar3 < *(int *)&param_1[1].field_0x140);
      }
      poly = (SMRGLPrimitivePoly *)&param_1[0x2f].field_0x1f8;
      if (*(int *)&param_1[1].field_0xc < 0xfde9) {
        iVar3 = 0;
        if (0 < *(int *)&param_1[0xff].field_0x244) {
          do {
            iVar3 = iVar3 + 1;
            engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00
                      (DAT_0060b280,poly,0x267);
            poly = poly + 0x48;
          } while (iVar3 < *(int *)&param_1[0xff].field_0x244);
        }
      }
      else {
        core_set_cpp_FUN_00533f40
                  (g_CDemonSetPtr,(SMRGLPrimitiveQuad *)poly,*(int *)&param_1[0xff].field_0x244,-1);
      }
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
    return iStack_8;
  }
  return 0;
}
