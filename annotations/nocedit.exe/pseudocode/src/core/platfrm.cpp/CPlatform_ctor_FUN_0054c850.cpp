// Name: core_platfrm.cpp_CPlatform_ctor_FUN_0054c850
// Address: 0054c850
// Address Range: [[0054c850, 0054ca1c]]
// Convention: __cdecl
// Signature: CPlatform * __cdecl core_platfrm_cpp_CPlatform_ctor_FUN_0054c850(CPlatform *this_ptr)

#include "nocturne.h"

CPlatform * __cdecl core_platfrm_cpp_CPlatform_ctor_FUN_0054c850(CPlatform *this_ptr)

{
  CLocation *pCVar1;
  CVector3f *pCVar2;
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
  CPlatform *pCVar7;
  
  bVar12 = 0;
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
  puVar9 = (uint *)((int)pCVar5 + (uint)bVar12 * -8 + 0x38);
  (ADJ(pCVar5)->end_orient).w = local_14.w;
  puVar10 = puVar9 + (uint)bVar12 * -2 + 1;
  puVar8 = (uint *)((int)&local_14 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
  *puVar9 = *(uint *)((int)&local_14 + (uint)bVar12 * -8 + 4);
  *puVar10 = *puVar8;
  puVar10[(uint)bVar12 * -2 + 1] = puVar8[(uint)bVar12 * -2 + 1];
  puVar10 = (uint *)((int)pCVar5 + (uint)bVar12 * -8 + 0x28);
  puVar8 = (uint *)((int)pCVar5 + (uint)bVar12 * -8 + 0x38);
  (ADJ(pCVar5)->orig_orient).w = (ADJ(pCVar5)->end_orient).w;
  puVar11 = puVar10 + (uint)bVar12 * -2 + 1;
  puVar9 = puVar8 + (uint)bVar12 * -2 + 1;
  *puVar10 = *puVar8;
  *puVar11 = *puVar9;
  puVar11[(uint)bVar12 * -2 + 1] = puVar9[(uint)bVar12 * -2 + 1];
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
  pCVar6 = ADJ(pCVar5);
  do {
    pCVar7 = (CPlatform *)((int)&(pCVar6->base).orient + 4);
    pCVar6->attach_actors[0].actor = (CDemonActor *)0x0;
    pCVar6 = pCVar7;
  } while (pCVar7 != (CPlatform *)((ADJ(pCVar5)->model).model_name + 0x38));
  ADJ(pCVar5)->recompute_fog = 0;
  ADJ(pCVar5)->plot_in_shadow_flag = 1;
  ADJ(pCVar5)->push_flag = 0;
  return ADJ(pCVar5);
}
