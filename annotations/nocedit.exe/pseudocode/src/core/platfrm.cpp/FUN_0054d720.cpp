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
  int iVar3;
  CBoundingBox3D *pCVar4;
  int iVar5;
  CVector3f *pCVar6;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_0000001c;
  float in_stack_00000020;
  float in_stack_00000024;
  float in_stack_00000030;
  float in_stack_00000034;
  float in_stack_00000038;
  float in_stack_00000040;
  float in_stack_00000044;
  float in_stack_00000048;
  float fStack_40;
  float in_stack_ffffffd0;
  int in_stack_ffffffd4;
  int in_stack_ffffffd8;
  
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if ((iVar3 != 0) && (in_stack_00000004[3].scale.z == 0)) {
    return 0;
  }
  if ((2 < *(int *)(in_stack_00000004[3].create_event + 0x40)) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar3 == 0)) {
    return 0;
  }
  if (((((*(int *)(in_stack_00000004[3].create_event + 0x48) != 0) &&
        (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0)) &&
       (fVar1 = in_stack_00000004[2].location.position.y, fVar1 != 4.2039e-45)) &&
      ((fVar1 != 5.60519e-45 && (in_stack_00000004[5].was_created != 0)))) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar3 == 0)) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  pCVar4 = (*in_stack_00000004->vtable->getBoundingBox)
                     (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffb8);
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar4);
  if (iVar3 != 0) {
    if (in_stack_00000004[3].field17_0x104 != 0) {
      iVar5 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
      if (iVar5 != 0) {
        pCVar4 = (*in_stack_00000004->vtable->getBoundingBox)
                           (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffbc);
        core_box_cpp_CBoundingBox3D_render_FUN_004210b0
                  (pCVar4,(int)in_stack_ffffffd0,in_stack_ffffffd4,in_stack_ffffffd8);
        goto LAB_0054d802;
      }
    }
    fStack_40 = 7.792242e-39;
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
  }
LAB_0054d802:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  if (((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
      (iVar5 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
      iVar5 == 0)) &&
     ((pCVar2 = *(CDemonActor **)(g_CDemonMissionPtr->field2_0xc + 0x1c),
      in_stack_00000004 == pCVar2 && (*(char *)&pCVar2[2].orient_matrix.m[0].y == '\0')))) {
    in_stack_00000030 = (pCVar2->location).position.x;
    in_stack_00000034 = (pCVar2->location).position.y;
    in_stack_00000038 = (pCVar2->location).position.z;
    (pCVar2->location).position.x = (float)in_stack_00000004[2].field7_0x6c;
    (pCVar2->location).position.y = (float)in_stack_00000004[2].was_created;
    (pCVar2->location).position.z = in_stack_00000004[2].create_prob;
    pCVar6 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                       ((CVector3f *)&stack0x00000018,
                        (CQuaternion4f *)(in_stack_00000004[2].create_event + 0xc));
    if (&pCVar2->orient != (COrientation *)pCVar6) {
      (pCVar2->orient).pitch = pCVar6->x;
      (pCVar2->orient).bank = pCVar6->y;
      (pCVar2->orient).heading = pCVar6->z;
    }
    core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(in_stack_00000004,0xfa);
    (in_stack_00000004->location).position.x = *(float *)in_stack_00000004[2].create_event;
    (in_stack_00000004->location).position.y = *(float *)(in_stack_00000004[2].create_event + 4);
    (in_stack_00000004->location).position.z = *(float *)(in_stack_00000004[2].create_event + 8);
    pCVar6 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                       ((CVector3f *)&stack0x0000002c,
                        (CQuaternion4f *)(in_stack_00000004[2].create_event + 0x1c));
    if (&in_stack_00000004->orient != (COrientation *)pCVar6) {
      (in_stack_00000004->orient).pitch = pCVar6->x;
      (in_stack_00000004->orient).bank = pCVar6->y;
      (in_stack_00000004->orient).heading = pCVar6->z;
    }
    core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(in_stack_00000004,0xf9);
    (in_stack_00000004->location).position.x = in_stack_00000040;
    (in_stack_00000004->location).position.y = in_stack_00000044;
    (in_stack_00000004->location).position.z = in_stack_00000048;
    if (&in_stack_00000004->orient != (COrientation *)&stack0x0000001c) {
      (in_stack_00000004->orient).pitch = in_stack_0000001c;
      (in_stack_00000004->orient).bank = in_stack_00000020;
      (in_stack_00000004->orient).heading = in_stack_00000024;
    }
  }
  return iVar3;
}
