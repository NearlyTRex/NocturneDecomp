// Name: core_glass.cpp_FUN_004ca770
// Address: 004ca770
// Address Range: [[004ca770, 004ca934]]
// Convention: unknown
// Signature: undefined4 core_glass_cpp_FUN_004ca770(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_glass_cpp_FUN_004ca770(CDemonActor *param_1)

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
  if ((((*(int *)&param_1[2].field_0xf0 == 0) && (*(int *)&param_1[1].field_0x54 != 0)) &&
      (*(int *)&param_1[1].field_0x58 == 0)) &&
     (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc), iVar2 == 0)
     ) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(param_1);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
    puVar6 = auStack_28;
    puVar7 = auStack_40;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    uStack_10 = core_box_cpp_FUN_0041daf0(auStack_40);
    iVar2 = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,(SMRGLTextureBasic *)&param_1[1].field_0xc);
    pfVar3 = (float *)&param_1[2].field_0x10c;
    input_vertices = &param_1[3].field_0xe0;
    piVar4 = (int *)input_vertices;
    if (0 < *(int *)&param_1[8].field_0xa4) {
      do {
        *piVar4 = (int)ROUND(*pfVar3 * _DAT_005e0bc0);
        piVar4[1] = (int)ROUND(pfVar3[1] * _DAT_005e0bc0);
        piVar4[2] = (int)ROUND(pfVar3[2] * _DAT_005e0bc0);
        iVar2 = iVar2 + 1;
        pfVar3 = pfVar3 + 3;
        piVar4 = piVar4 + 3;
      } while (iVar2 < *(int *)&param_1[8].field_0xa4);
    }
    core_set_cpp_CDemonSet_rotateVerticies_FUN_00538ad0
              (g_CDemonSetPtr,*(int *)&param_1[8].field_0xa4,(CVector3i *)input_vertices);
    lVar1 = (longlong)(0xffff - _DAT_01c6e24c) * (longlong)*(int *)&param_1[1].field_0x54;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
              (DAT_005f2afc,(uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    poly = (SMRGLPrimitivePoly *)&param_1[5].field_0x24;
    core_set_cpp_CDemonSet_lightVerticies_FUN_00538dd0
              (g_CDemonSetPtr,*(int *)&param_1[8].field_0xa4,*(int *)&param_1[8].field_0xa8,poly,
               (CVector3i *)input_vertices,4,(CVector3i *)0x0);
    iVar2 = 0;
    pCVar5 = param_1;
    if (0 < *(int *)&param_1[8].field_0xa8) {
      do {
        this_ptr = DAT_005f2afc;
        *(uint *)&pCVar5[5].field_0x2c = 0;
        *(uint *)&pCVar5[5].field_0x30 = 0;
        iVar2 = iVar2 + 1;
        *(uint *)&pCVar5[5].field_0x34 = 0;
        *(uint *)&pCVar5[5].field_0x38 = 0;
        engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_0046c800(this_ptr,poly);
        poly = poly + 0x48;
        pCVar5 = (CDemonActor *)&pCVar5->field_0x48;
      } while (iVar2 < *(int *)&param_1[8].field_0xa8);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
    return uStack_10;
  }
  return 0;
}
