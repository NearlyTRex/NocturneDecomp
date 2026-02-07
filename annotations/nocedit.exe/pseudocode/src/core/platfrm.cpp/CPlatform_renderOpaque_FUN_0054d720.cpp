// Name: core_platfrm.cpp_CPlatform_renderOpaque_FUN_0054d720
// Address: 0054d720
// Address Range: [[0054d720, 0054d9a1]]
// Convention: __cdecl
// Signature: int __cdecl core_platfrm_cpp_CPlatform_renderOpaque_FUN_0054d720(CPlatform *this_ptr)

#include "nocturne.h"

int __cdecl core_platfrm_cpp_CPlatform_renderOpaque_FUN_0054d720(CPlatform *this_ptr)

{
  CLocation *pCVar1;
  CPlatform *pCVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CBoundingBox3D *pCVar6;
  int iVar7;
  CVector3f *pCVar8;
  COrientation *pCVar9;
  float fStack_64;
  float in_stack_ffffffa4;
  float in_stack_ffffffa8;
  float in_stack_ffffffac;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  byte auStack_28 [24];
  float fStack_10;
  
  iVar5 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if ((iVar5 != 0) && (this_ptr->plot_in_shadow_flag == 0)) {
    return 0;
  }
  if ((2 < this_ptr->one_shot) &&
     (iVar5 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar5 == 0)) {
    return 0;
  }
  if (((((this_ptr->render_in_background_when_not_moving_flag != 0) &&
        (g_CDemonMissionPtr->is_in_editor == 0)) &&
       (this_ptr->state != (PLATFORM_STATE_TYPE_WTF|PLATFORM_STATE_TYPE_AT_END))) &&
      ((this_ptr->state != 4 && (this_ptr->unk3 != 0)))) &&
     (iVar5 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar5 == 0)) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  pCVar6 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                     (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffac);
  iVar5 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar6);
  if (iVar5 != 0) {
    if (this_ptr->plot_as_box_in_shadow != 0) {
      iVar7 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
      if (iVar7 != 0) {
        pCVar6 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                           (&this_ptr->base,(CBoundingBox3D *)&fStack_64);
        fStack_64 = 7.791666e-39;
        core_box_cpp_CBoundingBox3D_render_FUN_004210b0
                  (pCVar6,(int)in_stack_ffffffa4,(int)in_stack_ffffffa8,(int)in_stack_ffffffac);
        goto LAB_0054d802;
      }
    }
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->model,0.0,-1);
  }
LAB_0054d802:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  if (((g_CDemonMissionPtr->is_in_editor != 0) &&
      (iVar7 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
      iVar7 == 0)) &&
     ((pCVar2 = (CPlatform *)g_CDemonMissionPtr->selected_actor, this_ptr == pCVar2 &&
      (pCVar2->course_filename[0] == '\0')))) {
    pCVar1 = &(pCVar2->base).location;
    fStack_10 = (pCVar1->position).x;
    fVar3 = (pCVar2->base).location.position.y;
    fVar4 = (pCVar2->base).location.position.z;
    fStack_34 = (pCVar2->base).orient.pitch;
    pCVar9 = &(pCVar2->base).orient;
    fStack_30 = (pCVar2->base).orient.bank;
    fStack_2c = (pCVar2->base).orient.heading;
    (pCVar1->position).x = (this_ptr->start_pos).x;
    (pCVar2->base).location.position.y = (this_ptr->start_pos).y;
    (pCVar2->base).location.position.z = (this_ptr->start_pos).z;
    pCVar8 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                       ((CQuaternion4f *)auStack_28,(CVector3f *)&this_ptr->orig_orient);
    if (pCVar9 != (COrientation *)pCVar8) {
      pCVar9->pitch = pCVar8->x;
      (pCVar2->base).orient.bank = pCVar8->y;
      (pCVar2->base).orient.heading = pCVar8->z;
    }
    core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(&this_ptr->base,0xfa);
    (this_ptr->base).location.position.x = (this_ptr->end_pos).x;
    (this_ptr->base).location.position.y = (this_ptr->end_pos).y;
    (this_ptr->base).location.position.z = (this_ptr->end_pos).z;
    pCVar8 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                       ((CQuaternion4f *)(auStack_28 + 0xc),(CVector3f *)&this_ptr->end_orient);
    pCVar9 = &(this_ptr->base).orient;
    if (pCVar9 != (COrientation *)pCVar8) {
      pCVar9->pitch = pCVar8->x;
      (this_ptr->base).orient.bank = pCVar8->y;
      (this_ptr->base).orient.heading = pCVar8->z;
    }
    core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(&this_ptr->base,0xf9);
    (this_ptr->base).location.position.x = fStack_10;
    (this_ptr->base).location.position.y = fVar3;
    pCVar9 = &(this_ptr->base).orient;
    (this_ptr->base).location.position.z = fVar4;
    if (pCVar9 != (COrientation *)&fStack_34) {
      pCVar9->pitch = fStack_34;
      (this_ptr->base).orient.bank = fStack_30;
      (this_ptr->base).orient.heading = fStack_2c;
    }
  }
  return iVar5;
}
