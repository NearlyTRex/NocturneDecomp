// Name: core_platfrm.cpp_FUN_0054d720
// Address: 0054d720
// Address Range: [[0054d720, 0054d9a1]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054d720()

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_FUN_0054d720(uint param_1) */

int core_platfrm_cpp_FUN_0054d720(void)

{
  float fVar1;
  CDemonActor *pCVar2;
  float fVar3;
  int iVar4;
  CBoundingBox3D *pCVar5;
  int iVar6;
  CVector3f *pCVar7;
  CDemonActor *in_stack_00000004;
  float fStack_64;
  float in_stack_ffffffa4;
  float in_stack_ffffffa8;
  float in_stack_ffffffac;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  byte auStack_28 [24];
  float fStack_10;
  
  iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if ((iVar4 != 0) && (in_stack_00000004[3].scale.z == 0)) {
    return 0;
  }
  if ((2 < *(int *)(in_stack_00000004[3].create_event + 0x40)) &&
     (iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar4 == 0)) {
    return 0;
  }
  if (((((*(int *)(in_stack_00000004[3].create_event + 0x48) != 0) &&
        (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0)) &&
       (fVar1 = in_stack_00000004[2].location.position.y, fVar1 != 4.2039e-45)) &&
      ((fVar1 != 5.60519e-45 && (in_stack_00000004[5].was_created != 0)))) &&
     (iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar4 == 0)) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  pCVar5 = (*in_stack_00000004->vtable->getBoundingBox)
                     (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffac);
  iVar4 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar5);
  if (iVar4 != 0) {
    if (in_stack_00000004[3].field17_0x104 != 0) {
      iVar6 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
      if (iVar6 != 0) {
        pCVar5 = (*in_stack_00000004->vtable->getBoundingBox)
                           (in_stack_00000004,(CBoundingBox3D *)&fStack_64);
        fStack_64 = 7.791666e-39;
        core_box_cpp_CBoundingBox3D_render_FUN_004210b0
                  (pCVar5,(int)in_stack_ffffffa4,(int)in_stack_ffffffa8,(int)in_stack_ffffffac);
        goto LAB_0054d802;
      }
    }
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
  }
LAB_0054d802:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  if (((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
      (iVar6 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
      iVar6 == 0)) &&
     ((pCVar2 = *(CDemonActor **)(g_CDemonMissionPtr->field2_0xc + 0x1c),
      in_stack_00000004 == pCVar2 && (*(char *)&pCVar2[2].orient_matrix.m[0].y == '\0')))) {
    fStack_10 = (pCVar2->location).position.x;
    fVar1 = (pCVar2->location).position.y;
    fVar3 = (pCVar2->location).position.z;
    fStack_34 = (pCVar2->orient).pitch;
    fStack_30 = (pCVar2->orient).bank;
    fStack_2c = (pCVar2->orient).heading;
    (pCVar2->location).position.x = (float)in_stack_00000004[2].field7_0x6c;
    (pCVar2->location).position.y = (float)in_stack_00000004[2].was_created;
    (pCVar2->location).position.z = in_stack_00000004[2].create_prob;
    pCVar7 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                       ((CQuaternion4f *)auStack_28,
                        (CVector3f *)(in_stack_00000004[2].create_event + 0xc));
    if (&pCVar2->orient != (COrientation *)pCVar7) {
      (pCVar2->orient).pitch = pCVar7->x;
      (pCVar2->orient).bank = pCVar7->y;
      (pCVar2->orient).heading = pCVar7->z;
    }
    core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(in_stack_00000004,0xfa);
    (in_stack_00000004->location).position.x = *(float *)in_stack_00000004[2].create_event;
    (in_stack_00000004->location).position.y = *(float *)(in_stack_00000004[2].create_event + 4);
    (in_stack_00000004->location).position.z = *(float *)(in_stack_00000004[2].create_event + 8);
    pCVar7 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                       ((CQuaternion4f *)(auStack_28 + 0xc),
                        (CVector3f *)(in_stack_00000004[2].create_event + 0x1c));
    if (&in_stack_00000004->orient != (COrientation *)pCVar7) {
      (in_stack_00000004->orient).pitch = pCVar7->x;
      (in_stack_00000004->orient).bank = pCVar7->y;
      (in_stack_00000004->orient).heading = pCVar7->z;
    }
    core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(in_stack_00000004,0xf9);
    (in_stack_00000004->location).position.x = fStack_10;
    (in_stack_00000004->location).position.y = fVar1;
    (in_stack_00000004->location).position.z = fVar3;
    if (&in_stack_00000004->orient != (COrientation *)&fStack_34) {
      (in_stack_00000004->orient).pitch = fStack_34;
      (in_stack_00000004->orient).bank = fStack_30;
      (in_stack_00000004->orient).heading = fStack_2c;
    }
  }
  return iVar4;
}
