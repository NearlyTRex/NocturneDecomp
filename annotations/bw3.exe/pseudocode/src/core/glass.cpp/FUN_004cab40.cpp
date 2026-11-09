// Name: core_glass.cpp_FUN_004cab40
// Address: 004cab40
// Address Range: [[004cab40, 004cacf8]]
// Convention: unknown
// Signature: void core_glass_cpp_FUN_004cab40(CGlass *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_glass_cpp_FUN_004cab40(CGlass *param_1,int param_2)

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
  if (*(int *)&param_1->field_0x3a0 == 0) {
    if (((param_2 != 0) && (*(int *)&param_1->field_0x1b0 != 0)) &&
       (*(int *)&param_1->field_0x218 != 0)) {
      core_glass_cpp_FUN_004ca940(param_1);
      return;
    }
  }
  else if ((param_2 != 0) || (*(int *)&param_1->field_0xb6c != 0)) {
    *(uint *)&param_1->field_0xb6c = 0;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)param_1);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
    puVar5 = auStack_24;
    puVar6 = auStack_3c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_box_cpp_FUN_0041daf0(auStack_3c);
    if (*(int *)&param_1->field_0x1b0 == 0) {
      texture = (SMRGLTextureBasic *)&param_1->field_0x164;
    }
    else {
      texture = (SMRGLTextureBasic *)&param_1->field_0x3a4;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    pfVar2 = (float *)&param_1->field_0x3bc;
    iVar1 = 0;
    piVar3 = (int *)&param_1->field_0x4e8;
    if (0 < *(int *)&param_1->field_0xb64) {
      do {
        *piVar3 = (int)ROUND(*pfVar2 * _DAT_005e0bc0);
        piVar3[1] = (int)ROUND(pfVar2[1] * _DAT_005e0bc0);
        piVar3[2] = (int)ROUND(pfVar2[2] * _DAT_005e0bc0);
        iVar1 = iVar1 + 1;
        pfVar2 = pfVar2 + 3;
        piVar3 = piVar3 + 3;
      } while (iVar1 < *(int *)&param_1->field_0xb64);
    }
    iVar1 = 0;
    core_set_cpp_CDemonSet_rotateVerticies_FUN_00538ad0
              (g_CDemonSetPtr,*(int *)&param_1->field_0xb64,(CVector3i *)&param_1->field_0x4e8);
    if (0 < *(int *)&param_1->field_0xb68) {
      poly = (SMRGLPrimitivePoly *)&param_1->field_0x6dc;
      pCVar4 = param_1;
      do {
        *(uint *)&pCVar4->field_0x6e4 = 0;
        this_ptr = DAT_005f2afc;
        *(uint *)&pCVar4->field_0x6e8 = 0;
        iVar1 = iVar1 + 1;
        *(uint *)&pCVar4->field_0x6ec = 0;
        *(uint *)&pCVar4->field_0x6f0 = 0;
        pCVar4 = (CGlass *)&pCVar4->field_0x48;
        engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0(this_ptr,poly,0xc1);
        poly = poly + 0x48;
      } while (iVar1 < *(int *)&param_1->field_0xb68);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)param_1);
  }
  return;
}
