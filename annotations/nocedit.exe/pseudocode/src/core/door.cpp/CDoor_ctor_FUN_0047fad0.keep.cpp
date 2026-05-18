// Name: core_door.cpp_CDoor_ctor_FUN_0047fad0
// Address: 0047fad0
// MANUAL RECONSTRUCTION
// Address Range: [[0047fad0, 0047fc6e]]
// Convention: __cdecl
// Signature: CDoor * __cdecl core_door_cpp_CDoor_ctor_FUN_0047fad0(CDoor *this_ptr)

#include "nocturne.h"

CDoor * __cdecl core_door_cpp_CDoor_ctor_FUN_0047fad0(CDoor *this_ptr)

{
  CDoor *pCVar2;
  CDoor_ptr_344 this_ptr_00;

  pCVar2 = (CDoor *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar2->model);
  core_event_cpp_CRuleList_clear_FUN_004b1670(&ADJ(this_ptr_00)->open_rule);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CDoorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"churchd01.kfm");
  ADJ(this_ptr_00)->door_type = DOOR_TYPE_SWING;
  ADJ(this_ptr_00)->door_side = 1;
  ADJ(this_ptr_00)->door_state = DOOR_STATE_CLOSED;
  ADJ(this_ptr_00)->door_swing = 0;
  ADJ(this_ptr_00)->orig_pos = ADJ(this_ptr_00)->base.location.position;
  strcpy(ADJ(this_ptr_00)->open_condition,"defaultDoorOpen");
  strcpy(ADJ(this_ptr_00)->close_condition,"defaultDoorClose");
  ADJ(this_ptr_00)->open_sound[0] = '\0';
  ADJ(this_ptr_00)->close_sound[0] = '\0';
  strcpy(ADJ(this_ptr_00)->locked_sound,"door-locked.wav");
  ADJ(this_ptr_00)->key_mask = 0;
  ADJ(this_ptr_00)->param = 0.0;
  ADJ(this_ptr_00)->max_param = 1.0;
  ADJ(this_ptr_00)->open_speed = 1.0;
  ADJ(this_ptr_00)->close_speed = 1.0;
  ADJ(this_ptr_00)->ground_type = GROUND_TYPE_DEFAULT;
  ADJ(this_ptr_00)->on_open_trigger_event[0] = '\0';
  ADJ(this_ptr_00)->on_close_trigger_event[0] = '\0';
  ADJ(this_ptr_00)->one_shot = 0;
  ADJ(this_ptr_00)->swing_range = 0.0;
  ADJ(this_ptr_00)->block_virtual_director_flag = 1;
  ADJ(this_ptr_00)->plot_as_box_in_shadow = 0;
  ADJ(this_ptr_00)->allowed_sides = 3;
  ADJ(this_ptr_00)->allow_bullet_holes = 1;
  return ADJ(this_ptr_00);
}
