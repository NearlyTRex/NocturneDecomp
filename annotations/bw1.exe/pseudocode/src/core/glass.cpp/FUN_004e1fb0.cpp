// Name: core_glass.cpp_FUN_004e1fb0
// Address: 004e1fb0
// Address Range: [[004e1fb0, 004e2168]]
// Convention: unknown
// Signature: void core_glass_cpp_FUN_004e1fb0(CGlass *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_glass_cpp_FUN_004e1fb0(CGlass *param_1,int param_2)

{
  CDemonRenderer *this_ptr;
  int iVar1;
  float *pfVar2;
  int *piVar3;
  CGlass *pCVar4;
  uint *puVar5;
  SMRGLPrimitivePoly *poly;
  uint *puVar6;
  byte bVar7;
  SMRGLTextureBasic *texture;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar7 = 0;
  if (*(int *)&param_1->field_0x370 == 0) {
    if (((param_2 != 0) && (*(int *)&param_1->field_0x180 != 0)) &&
       (*(int *)&param_1->field_0x1e8 != 0)) {
      core_glass_cpp_FUN_004e1db0(param_1);
      return;
    }
  }
  else if ((param_2 != 0) || (*(int *)&param_1->field_0xb3c != 0)) {
    *(uint *)&param_1->field_0xb3c = 0;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)param_1);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
    puVar5 = auStack_24;
    puVar6 = auStack_3c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_box_cpp_FUN_004207b0(auStack_3c);
    if (*(int *)&param_1->field_0x180 == 0) {
      texture = (SMRGLTextureBasic *)&param_1->field_0x164;
    }
    else {
      texture = (SMRGLTextureBasic *)&param_1->field_0x374;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00(DAT_00612560,texture);
    pfVar2 = (float *)&param_1->field_0x38c;
    iVar1 = 0;
    piVar3 = (int *)&param_1->field_0x4b8;
    if (0 < *(int *)&param_1->field_0xb34) {
      do {
        *piVar3 = (int)ROUND(*pfVar2 * _DAT_00601450);
        piVar3[1] = (int)ROUND(pfVar2[1] * _DAT_00601450);
        piVar3[2] = (int)ROUND(pfVar2[2] * _DAT_00601450);
        iVar1 = iVar1 + 1;
        pfVar2 = pfVar2 + 3;
        piVar3 = piVar3 + 3;
      } while (iVar1 < *(int *)&param_1->field_0xb34);
    }
    iVar1 = 0;
    core_set_cpp_CDemonSet_rotateVerticies_FUN_00553140
              (g_CDemonSetPtr,*(int *)&param_1->field_0xb34,(CVector3i *)&param_1->field_0x4b8);
    if (0 < *(int *)&param_1->field_0xb38) {
      poly = (SMRGLPrimitivePoly *)&param_1->field_0x6ac;
      pCVar4 = param_1;
      do {
        *(uint *)&pCVar4->field_0x6b4 = 0;
        this_ptr = DAT_00612560;
        *(uint *)&pCVar4->field_0x6b8 = 0;
        iVar1 = iVar1 + 1;
        *(uint *)&pCVar4->field_0x6bc = 0;
        *(uint *)&pCVar4->field_0x6c0 = 0;
        pCVar4 = (CGlass *)&pCVar4->field_0x48;
        engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210(this_ptr,poly,0xc1);
        poly = poly + 0x48;
      } while (iVar1 < *(int *)&param_1->field_0xb38);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)param_1);
  }
  return;
}
