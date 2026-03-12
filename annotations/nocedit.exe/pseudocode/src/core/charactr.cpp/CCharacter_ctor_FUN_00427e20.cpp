// Name: core_charactr.cpp_CCharacter_ctor_FUN_00427e20
// Address: 00427e20
// Address Range: [[00427e20, 0042813c]]
// Convention: __cdecl
// Signature: CCharacter * __cdecl core_charactr_cpp_CCharacter_ctor_FUN_00427e20(CCharacter *this_ptr)

#include "nocturne.h"

CCharacter * __cdecl core_charactr_cpp_CCharacter_ctor_FUN_00427e20(CCharacter *this_ptr)

{
  CCharacter *pCVar1;
  CCharacter_ptr_344 pCVar2;
  CCharacter_ptr_10900 pCVar3;
  CCharacter_ptr_11356 pvVar1;
  CCharacter_ptr_11536 pvVar2;
  CCharacter_ptr_12060 pvVar3;
  CCharacter_ptr_13260 pvVar4;
  CCharacter *pCVar4;
  uint local_c [3];
  float *pfVar5;
  
  pCVar1 = (CCharacter *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(&pCVar1->model);
  pCVar3 = core_cloth_cpp_CClothList_ctor_FUN_0043bf40(&ADJ(pCVar2)->cloth_list);
  pvVar1 = __arrinit
                     (ADJ(pCVar3)->collision_test_points,0xf,&g_CVectorTypeInfo);
  pvVar2 = __arrinit
                     (ADJ(pvVar1)->collision_test_normals,0xf,&g_CVectorTypeInfo);
  pvVar3 = __arrinit(ADJ(pvVar2)->fire_effects,0x32,&g_SFireTypeInfo);
  pvVar4 = __arrinit(ADJ(pvVar3)->flames,0x32,&g_CFlameTypeInfo);
  ADJ(pvVar4)->base.vtable._ub = &g_CCharacterVTable;
  ADJ(pvVar4)->render_active = 0;
  (ADJ(pvVar4)->velocity).z = 0.0;
  (ADJ(pvVar4)->velocity).y = (ADJ(pvVar4)->velocity).z;
  (ADJ(pvVar4)->velocity).x = (ADJ(pvVar4)->velocity).y;
  ADJ(pvVar4)->max_hit_points = 100.0;
  ADJ(pvVar4)->collision_cylinder_height = 1.0;
  ADJ(pvVar4)->collision_cylinder_radius = 2.0;
  ADJ(pvVar4)->ai_detection_range_min = 20.0;
  ADJ(pvVar4)->ai_detection_range_max = 50.0;
  ADJ(pvVar4)->collision_cylinder_bottom = 2.0;
  ADJ(pvVar4)->collision_cylinder_top = -999.0;
  ADJ(pvVar4)->damage_decal_count = 0;
  ADJ(pvVar4)->fire_count = 0;
  ADJ(pvVar4)->fire_allow_hero = 0x40000000;
  ADJ(pvVar4)->gesture_motion_index = -1;
  ADJ(pvVar4)->gesture_branch_root = -1;
  ADJ(pvVar4)->sound_cooldown = 0.0;
  ADJ(pvVar4)->is_walking = 0;
  ADJ(pvVar4)->walk_to_target = (CDemonActor *)0x0;
  ADJ(pvVar4)->walk_min_distance = 3.0;
  ADJ(pvVar4)->walk_max_distance = 1e+30;
  ADJ(pvVar4)->walk_timeout = -1.0;
  ADJ(pvVar4)->door_target = (CDoor *)0x0;
  ADJ(pvVar4)->hit_points = 100.0;
  if (&ADJ(pvVar4)->look_offset != (CVector3f *)local_c) {
    (ADJ(pvVar4)->look_offset).x = 0.0;
    (ADJ(pvVar4)->look_offset).y = 0.0;
    (ADJ(pvVar4)->look_offset).z = 2.0;
  }
  ADJ(pvVar4)->look_at_search_timer = 0.0;
  ADJ(pvVar4)->wander_target = (CWayPoint *)0x0;
  ADJ(pvVar4)->wander_nearest_waypoint = (CWayPoint *)0x0;
  ADJ(pvVar4)->wander_cooldown = 0.0;
  ADJ(pvVar4)->look_at_head_bone = -1;
  pCVar4 = ADJ(pvVar4);
  do {
    pCVar4 = (CCharacter *)&(pCVar4->base).orient_matrix.m[0].z;
    pCVar4->carry_hands[0].bone_index = -1;
    pCVar4->carry_hands[0].secondary_bone_index = -1;
    pCVar4->carry_hands[0].carry_actor = (CDemonActor *)0x0;
    pCVar4 = pCVar4;
  } while (pCVar4 != (CCharacter *)(ADJ(pvVar4)->base.create_event + 0x10));
  ADJ(pvVar4)->look_at_yaw = 0.0;
  ADJ(pvVar4)->look_at_pitch = 0.0;
  ADJ(pvVar4)->look_at_weight = 0.0;
  ADJ(pvVar4)->look_at_candidate = (CCharacter *)0x0;
  ADJ(pvVar4)->look_at_target = (CCharacter *)0x0;
  ADJ(pvVar4)->blood_type = 0;
  ADJ(pvVar4)->is_fully_burned = 0;
  ADJ(pvVar4)->is_ethereal = 0;
  ADJ(pvVar4)->grabbed_by = (CDemonActor *)0x0;
  ADJ(pvVar4)->grabbed_type = 0;
  ADJ(pvVar4)->speech_timer = 0.0;
  ADJ(pvVar4)->stagger_amount = 0.0;
  ADJ(pvVar4)->size_scale = 1.0;
  ADJ(pvVar4)->was_rendered_opaque = 0;
  ADJ(pvVar4)->layer_action_count = 0;
  ADJ(pvVar4)->layer_action_index = 0;
  ADJ(pvVar4)->layer_action_t = 0.0;
  ADJ(pvVar4)->show_in_editor = 1;
  ADJ(pvVar4)->health_bar_mode = 0;
  ADJ(pvVar4)->descriptive_name[0] = '\0';
  ADJ(pvVar4)->smoke_emit_timer = 0.0;
  ADJ(pvVar4)->smoke_check_timer = 0.0;
  ADJ(pvVar4)->smoke_occluded = 0;
  ADJ(pvVar4)->hero_proximity_timer = 0.0;
  ADJ(pvVar4)->walk_stuck_timer = 0.0;
  ADJ(pvVar4)->talk_to_me_event[0] = '\0';
  return ADJ(pvVar4);
}
