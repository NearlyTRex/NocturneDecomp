// Name: core_glass.cpp_FUN_004c5840
// Address: 004c5840
// Address Range: [[004c5840, 004c59f8]]
// Convention: unknown
// Signature: void core_glass_cpp_FUN_004c5840(CGlass *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_glass_cpp_FUN_004c5840(CGlass *param_1,int param_2)

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
  if (*(int *)&param_1->field_0x4cc == 0) {
    if (((param_2 != 0) && (*(int *)&param_1->field_0x2dc != 0)) &&
       (*(int *)&param_1->field_0x344 != 0)) {
      core_glass_cpp_FUN_004c5640(param_1);
      return;
    }
  }
  else if ((param_2 != 0) || (*(int *)&param_1->field_0xc98 != 0)) {
    *(uint *)&param_1->field_0xc98 = 0;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)param_1);
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
    puVar5 = auStack_24;
    puVar6 = auStack_3c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_box_cpp_FUN_0041a840(auStack_3c);
    if (*(int *)&param_1->field_0x2dc == 0) {
      texture = (SMRGLTextureBasic *)&param_1->field_0x2c0;
    }
    else {
      texture = (SMRGLTextureBasic *)&param_1->field_0x4d0;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(DAT_0060b280,texture);
    pfVar2 = (float *)&param_1->field_0x4e8;
    iVar1 = 0;
    piVar3 = (int *)&param_1->field_0x614;
    if (0 < *(int *)&param_1->field_0xc90) {
      do {
        *piVar3 = (int)ROUND(*pfVar2 * _DAT_005f7a60);
        piVar3[1] = (int)ROUND(pfVar2[1] * _DAT_005f7a60);
        piVar3[2] = (int)ROUND(pfVar2[2] * _DAT_005f7a60);
        iVar1 = iVar1 + 1;
        pfVar2 = pfVar2 + 3;
        piVar3 = piVar3 + 3;
      } while (iVar1 < *(int *)&param_1->field_0xc90);
    }
    iVar1 = 0;
    core_set_cpp_CDemonSet_rotateVerticies_FUN_00531e90
              (g_CDemonSetPtr,*(int *)&param_1->field_0xc90,(CVector3i *)&param_1->field_0x614);
    if (0 < *(int *)&param_1->field_0xc94) {
      poly = (SMRGLPrimitivePoly *)&param_1->field_0x808;
      pCVar4 = param_1;
      do {
        *(uint *)&pCVar4->field_0x810 = 0;
        this_ptr = DAT_0060b280;
        *(uint *)&pCVar4->field_0x814 = 0;
        iVar1 = iVar1 + 1;
        *(uint *)&pCVar4->field_0x818 = 0;
        *(uint *)&pCVar4->field_0x81c = 0;
        pCVar4 = (CGlass *)&pCVar4->field_0x48;
        engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00(this_ptr,poly,0xc1);
        poly = poly + 0x48;
      } while (iVar1 < *(int *)&param_1->field_0xc94);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)param_1);
  }
  return;
}
