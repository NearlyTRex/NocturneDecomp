// Name: core_platfrm.cpp_CPlatform_ctor_FUN_0054c850
// Address: 0054c850
// MANUAL RECONSTRUCTION
// Address Range: [[0054c850, 0054ca1c] [0060511c, 0060516d]]
// Convention: __cdecl
// Signature: CPlatform * __cdecl core_platfrm_cpp_CPlatform_ctor_FUN_0054c850(CPlatform *this_ptr)

#include "nocturne.h"

CPlatform * __cdecl core_platfrm_cpp_CPlatform_ctor_FUN_0054c850(CPlatform *this_ptr)

{
  CPlatform *pCVar3;
  CPlatform_ptr_344 pCVar4;
  CPlatform_ptr_784 pCVar5;
  CPlatform *pCVar6;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  float afStackY_17f0 [1523];
  CQuaternion4f local_14;
  CVector3f *pCVar2;
  CLocation *pCVar1;
  CPlatform *pCVar7;
  
  pCVar3 = (CPlatform *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar3->model);
  pCVar5 = core_course_cpp_CCourse_ctor_FUN_004424c0(&ADJ(pCVar4)->course);
  ADJ(pCVar5)->base.vtable._ub = &g_CPlatformVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&ADJ(pCVar5)->model,"slider1.kfm");
  ADJ(pCVar5)->to_start_event[0] = '\0';
  ADJ(pCVar5)->to_end_event[0] = '\0';
  ADJ(pCVar5)->stop_event[0] = '\0';
  ADJ(pCVar5)->start_sound[0] = '\0';
  ADJ(pCVar5)->stop_sound[0] = '\0';
  ADJ(pCVar5)->active_sound[0] = '\0';
  ADJ(pCVar5)->state = PLATFORM_STATE_TYPE_AT_START;
  ADJ(pCVar5)->param = 0.0;
  ADJ(pCVar5)->travel_time_to_start = 2.0;
  ADJ(pCVar5)->travel_time_to_end = 2.0;
  ADJ(pCVar5)->ground_type = GROUND_TYPE_DEFAULT;
  pCVar2 = &ADJ(pCVar5)->end_pos;
  ADJ(pCVar5)->course_filename[0] = '\0';
  pCVar1 = &ADJ(pCVar5)->base.location;
  if ((CLocation *)pCVar2 != pCVar1) {
    pCVar2->x = (pCVar1->position).x;
    (ADJ(pCVar5)->end_pos).y = ADJ(pCVar5)->base.location.position.y;
    (ADJ(pCVar5)->end_pos).z = ADJ(pCVar5)->base.location.position.z;
  }
  if (&ADJ(pCVar5)->start_pos != pCVar2) {
    (ADJ(pCVar5)->start_pos).x = pCVar2->x;
    (ADJ(pCVar5)->start_pos).y = (ADJ(pCVar5)->end_pos).y;
    (ADJ(pCVar5)->start_pos).z = (ADJ(pCVar5)->end_pos).z;
  }
  core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&ADJ(pCVar5)->base.orient.vec,&local_14);
  (ADJ(pCVar5)->end_orient).w = local_14.w;
  (ADJ(pCVar5)->end_orient).x = local_14.x;
  (ADJ(pCVar5)->end_orient).y = local_14.y;
  (ADJ(pCVar5)->end_orient).z = local_14.z;
  (ADJ(pCVar5)->orig_orient).w = (ADJ(pCVar5)->end_orient).w;
  (ADJ(pCVar5)->orig_orient).x = (ADJ(pCVar5)->end_orient).x;
  (ADJ(pCVar5)->orig_orient).y = (ADJ(pCVar5)->end_orient).y;
  (ADJ(pCVar5)->orig_orient).z = (ADJ(pCVar5)->end_orient).z;
  ADJ(pCVar5)->platform_type = PLATFORM_TYPE_DISABLED;
  ADJ(pCVar5)->one_shot = 0;
  ADJ(pCVar5)->block_virtual_director_flag = 0;
  ADJ(pCVar5)->render_in_background_when_not_moving_flag = 0;
  ADJ(pCVar5)->camera_while_moving[0] = '\0';
  ADJ(pCVar5)->rendered_in_background = 0;
  ADJ(pCVar5)->base.health = 0x32;
  ADJ(pCVar5)->plot_as_box_in_shadow = 0;
  ADJ(pCVar5)->goal_param = 0.0;
  ADJ(pCVar5)->current_movement_rate = 0.0;
  for (int i = 0; i < 10; i++) {
    ADJ(pCVar5)->attach_actors[i].actor = (CDemonActor *)0x0;
  }
  ADJ(pCVar5)->recompute_fog = 0;
  ADJ(pCVar5)->plot_in_shadow_flag = 1;
  ADJ(pCVar5)->push_flag = 0;
  return ADJ(pCVar5);
}
