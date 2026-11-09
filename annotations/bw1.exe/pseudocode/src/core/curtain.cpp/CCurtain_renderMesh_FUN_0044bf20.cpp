// Name: core_curtain.cpp_CCurtain_renderMesh_FUN_0044bf20
// Address: 0044bf20
// Address Range: [[0044bf20, 0044c21d]]
// Convention: __cdecl
// Signature: int __cdecl core_curtain_cpp_CCurtain_renderMesh_FUN_0044bf20(CCurtain *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_curtain_cpp_CCurtain_renderMesh_FUN_0044bf20(CCurtain *this_ptr)

{
  bool bVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  SMRGLPrimitivePoly *pSVar5;
  uint *puVar6;
  uint *puVar7;
  CBoundingBox3D *pCVar8;
  byte bVar9;
  uint auStack_70 [6];
  uint auStack_58 [6];
  uint auStack_40 [6];
  CBoundingBox3D CStack_28;
  int iStack_10;
  
  bVar9 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr,0);
  puVar6 = auStack_70;
  puVar7 = auStack_58;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
  }
  iStack_10 = core_box_cpp_FUN_004207b0(auStack_58);
  this_ptr_00 = DAT_00612560;
  if (iStack_10 == 0) goto LAB_0044c20a;
  *(uint *)&this_ptr->field_0x65b30 = 1;
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(this_ptr_00);
  if (((iVar2 != 0) && (*(int *)&this_ptr->field_0x180 != 0)) &&
     (*(int *)&this_ptr->field_0x65b34 == 0)) {
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr);
    puVar6 = auStack_40;
    pCVar8 = &CStack_28;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pCVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      pCVar8 = (CBoundingBox3D *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_box_cpp_FUN_00421670(&CStack_28);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    return 1;
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
            (DAT_00612560,*(int *)&this_ptr->field_0x17c);
  iVar2 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&this_ptr->field_0x164);
  pfVar4 = (float *)&this_ptr->field_0x208;
  piVar3 = (int *)&this_ptr->field_0x1c734;
  if (0 < *(int *)&this_ptr->field_0x204) {
    do {
      *piVar3 = (int)ROUND(*pfVar4 * _DAT_005fe490);
      piVar3[1] = (int)ROUND(pfVar4[1] * _DAT_005fe490);
      piVar3[2] = (int)ROUND(pfVar4[2] * _DAT_005fe490);
      iVar2 = iVar2 + 1;
      pfVar4 = pfVar4 + 0x1d;
      piVar3 = piVar3 + 3;
    } while (iVar2 < *(int *)&this_ptr->field_0x204);
  }
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00553140
            (g_CDemonSetPtr,*(int *)&this_ptr->field_0x204,(CVector3i *)&this_ptr->field_0x1c734);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
  bVar1 = 0 < _DAT_01c51d34;
  if (*(int *)&this_ptr->field_0x180 == 0) {
    bVar1 = true;
LAB_0044c074:
    pSVar5 = (SMRGLPrimitivePoly *)&this_ptr->field_0x1f614;
    core_set_cpp_CDemonSet_lightVerticies_FUN_00553440
              (g_CDemonSetPtr,*(int *)&this_ptr->field_0x204,
               *(int *)&this_ptr->field_0x1c72c * *(int *)&this_ptr->field_0x1c730 * 2,pSVar5,
               (CVector3i *)&this_ptr->field_0x1c734,4,(CVector3i *)0x0);
    if (*(int *)&this_ptr->field_0x17c < 0xfde9) {
      for (iVar2 = 0;
          iVar2 < *(int *)&this_ptr->field_0x1c72c * *(int *)&this_ptr->field_0x1c730 * 2;
          iVar2 = iVar2 + 1) {
        engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120(DAT_00612560,pSVar5);
        pSVar5 = pSVar5 + 0x48;
      }
    }
    else {
      core_set_cpp_FUN_005551f0
                (g_CDemonSetPtr,(SMRGLPrimitiveQuad *)pSVar5,
                 *(int *)&this_ptr->field_0x1c72c * *(int *)&this_ptr->field_0x1c730 * 2,-1);
    }
  }
  else if (_DAT_01c51d34 < 0) goto LAB_0044c074;
  if (bVar1) {
    pSVar5 = (SMRGLPrimitivePoly *)&this_ptr->field_0x42894;
    core_set_cpp_CDemonSet_lightVerticies_FUN_00553440
              (g_CDemonSetPtr,*(int *)&this_ptr->field_0x204,
               *(int *)&this_ptr->field_0x1c72c * *(int *)&this_ptr->field_0x1c730 * 2,pSVar5,
               (CVector3i *)&this_ptr->field_0x1c734,4,(CVector3i *)0x0);
    if (*(int *)&this_ptr->field_0x17c < 0xfde9) {
      for (iVar2 = 0;
          iVar2 < *(int *)&this_ptr->field_0x1c72c * *(int *)&this_ptr->field_0x1c730 * 2;
          iVar2 = iVar2 + 1) {
        engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120(DAT_00612560,pSVar5);
        pSVar5 = pSVar5 + 0x48;
      }
    }
    else {
      core_set_cpp_FUN_005551f0
                (g_CDemonSetPtr,(SMRGLPrimitiveQuad *)pSVar5,
                 *(int *)&this_ptr->field_0x1c72c * *(int *)&this_ptr->field_0x1c730 * 2,-1);
    }
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
LAB_0044c20a:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  return iStack_10;
}
