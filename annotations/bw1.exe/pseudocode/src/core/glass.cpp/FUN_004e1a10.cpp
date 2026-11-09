// Name: core_glass.cpp_FUN_004e1a10
// Address: 004e1a10
// Address Range: [[004e1a10, 004e1bd4]]
// Convention: unknown
// Signature: undefined4 core_glass_cpp_FUN_004e1a10(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_glass_cpp_FUN_004e1a10(CDemonActor *param_1)

{
  byte *input_vertices;
  longlong lVar1;
  CDemonRenderer *this_ptr;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  CDemonActor *pCVar5;
  uint *puVar6;
  uint *puVar7;
  SMRGLPrimitivePoly *poly;
  byte bVar8;
  uint auStack_40 [6];
  uint auStack_28 [6];
  uint uStack_10;
  
  bVar8 = 0;
  if ((((*(int *)&param_1[2].field_0xc0 == 0) && (*(int *)&param_1->field_0xfc == 0)) &&
      (64999 < *(int *)&param_1[1].field_0x24)) &&
     ((*(int *)&param_1[1].field_0x28 == 0 &&
      (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560), iVar2 == 0
      )))) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(param_1);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
    puVar6 = auStack_28;
    puVar7 = auStack_40;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    uStack_10 = core_box_cpp_FUN_004207b0(auStack_40);
    iVar2 = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,(SMRGLTextureBasic *)&param_1[1].field_0xc);
    pfVar3 = (float *)&param_1[2].field_0xdc;
    input_vertices = &param_1[3].field_0xb0;
    piVar4 = (int *)input_vertices;
    if (0 < *(int *)&param_1[8].field_0x74) {
      do {
        *piVar4 = (int)ROUND(*pfVar3 * _DAT_00601450);
        piVar4[1] = (int)ROUND(pfVar3[1] * _DAT_00601450);
        piVar4[2] = (int)ROUND(pfVar3[2] * _DAT_00601450);
        iVar2 = iVar2 + 1;
        pfVar3 = pfVar3 + 3;
        piVar4 = piVar4 + 3;
      } while (iVar2 < *(int *)&param_1[8].field_0x74);
    }
    core_set_cpp_CDemonSet_rotateVerticies_FUN_00553140
              (g_CDemonSetPtr,*(int *)&param_1[8].field_0x74,(CVector3i *)input_vertices);
    lVar1 = (longlong)(0xffff - _DAT_01c51cac) * (longlong)*(int *)&param_1[1].field_0x24;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
              (DAT_00612560,(uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    poly = (SMRGLPrimitivePoly *)&param_1[4].field_0x14c;
    iVar2 = 0;
    core_set_cpp_CDemonSet_lightVerticies_FUN_00553440
              (g_CDemonSetPtr,*(int *)&param_1[8].field_0x74,*(int *)&param_1[8].field_0x78,poly,
               (CVector3i *)input_vertices,4,(CVector3i *)0x0);
    pCVar5 = param_1;
    if (0 < *(int *)&param_1[8].field_0x78) {
      do {
        this_ptr = DAT_00612560;
        *(uint *)&pCVar5[4].field_0x154 = 0;
        *(uint *)(pCVar5 + 5) = 0;
        iVar2 = iVar2 + 1;
        *(uint *)&pCVar5[5].field_0x4 = 0;
        *(uint *)&pCVar5[5].field_0x8 = 0;
        engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120(this_ptr,poly);
        poly = poly + 0x48;
        pCVar5 = (CDemonActor *)&pCVar5->field_0x48;
      } while (iVar2 < *(int *)&param_1[8].field_0x78);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(param_1);
    return uStack_10;
  }
  return 0;
}
