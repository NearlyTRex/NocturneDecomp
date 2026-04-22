// Name: core_platfrm.cpp_CPlatform_renderOpaque_FUN_0054d720
// Address: 0054d720
// Address Range: [[0054d720, 0054d9a1]]
// Convention: __cdecl
// Signature: int __cdecl core_platfrm_cpp_CPlatform_renderOpaque_FUN_0054d720(CPlatform *this_ptr)

#include "nocturne.h"

int __cdecl core_platfrm_cpp_CPlatform_renderOpaque_FUN_0054d720(CPlatform *this_ptr)

{
  int iVar3;
  int iVar1;
  CBoundingBox3D *pCVar4;
  int iVar5;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  CVector3f *pCVar6;
  CVector3f *pCVar3;
  UOrientationVector *pUVar4;
  UOrientationVector *pUVar7;
  CBoundingBox3D CStack_6c;
  CBoundingBox3D local_54;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CVector3f auStack_30;
  CVector3f CStack_24;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  CLocation *pCVar1;
  CPlatform *pCVar2;
  
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if ((iVar3 != 0) && (this_ptr->plot_in_shadow_flag == 0)) {
    return 0;
  }
  if ((2 < this_ptr->one_shot) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar1 == 0)) {
    return 0;
  }
  if (((((this_ptr->render_in_background_when_not_moving_flag != 0) &&
        (g_CDemonMissionPtr->is_in_editor == 0)) &&
       (this_ptr->state != (PLATFORM_STATE_TYPE_WTF|PLATFORM_STATE_TYPE_AT_END))) &&
      ((this_ptr->state != 4 && (this_ptr->rendered_in_background != 0)))) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar1 == 0)) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  pCVar4 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_54);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar4);
  if (iVar1 != 0) {
    if (this_ptr->plot_as_box_in_shadow != 0) {
      iVar5 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
      if (iVar5 != 0) {
        this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_6c);
        core_box_cpp_CBoundingBox3D_render_FUN_004210b0(this_ptr_00);
        goto LAB_0054d802;
      }
    }
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->model,0.0,-1);
  }
LAB_0054d802:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  if (((g_CDemonMissionPtr->is_in_editor != 0) &&
      (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
      iVar2 == 0)) &&
     ((pCVar2 = (CPlatform *)g_CDemonMissionPtr->selected_actor, this_ptr == pCVar2 &&
      (pCVar2->course_filename[0] == '\0')))) {
    pCVar1 = &(pCVar2->base).location;
    fStack_18 = (pCVar1->position).x;
    fStack_14 = (pCVar2->base).location.position.y;
    fStack_10 = (pCVar2->base).location.position.z;
    fStack_3c = (pCVar2->base).orient.vec.x;
    pUVar7 = &(pCVar2->base).orient;
    fStack_38 = (pCVar2->base).orient.vec.y;
    fStack_34 = (pCVar2->base).orient.vec.z;
    (pCVar1->position).x = (this_ptr->start_pos).x;
    (pCVar2->base).location.position.y = (this_ptr->start_pos).y;
    (pCVar2->base).location.position.z = (this_ptr->start_pos).z;
    pCVar6 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(&auStack_30,&this_ptr->orig_orient)
    ;
    if (pUVar7 != (UOrientationVector *)pCVar6) {
      (pUVar7->vec).x = pCVar6->x;
      (pCVar2->base).orient.vec.y = pCVar6->y;
      (pCVar2->base).orient.vec.z = pCVar6->z;
    }
    core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(&this_ptr->base,0xfa);
    (this_ptr->base).location.position.x = (this_ptr->end_pos).x;
    (this_ptr->base).location.position.y = (this_ptr->end_pos).y;
    (this_ptr->base).location.position.z = (this_ptr->end_pos).z;
    pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(&CStack_24,&this_ptr->end_orient);
    pUVar4 = &(this_ptr->base).orient;
    if ((CVector3f *)pUVar4 != pCVar3) {
      (pUVar4->vec).x = pCVar3->x;
      (this_ptr->base).orient.vec.y = pCVar3->y;
      (this_ptr->base).orient.vec.z = pCVar3->z;
    }
    core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(&this_ptr->base,0xf9);
    (this_ptr->base).location.position.x = fStack_18;
    (this_ptr->base).location.position.y = fStack_14;
    pUVar4 = &(this_ptr->base).orient;
    (this_ptr->base).location.position.z = fStack_10;
    if (pUVar4 != (UOrientationVector *)&fStack_3c) {
      (pUVar4->vec).x = fStack_3c;
      (this_ptr->base).orient.vec.y = fStack_38;
      (this_ptr->base).orient.vec.z = fStack_34;
    }
  }
  return iVar1;
}
