// Name: core_door.cpp_CDoor_process_FUN_0045f5a0
// Address: 0045f5a0
// Address Range: [[0045f5a0, 0045fd09]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_process_FUN_0045f5a0(CDoor *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_process_FUN_0045f5a0(CDoor *this_ptr,float delta_time)

{
  float fVar1;
  CMatrix3x3f *this_ptr_00;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1084 [989];
  char *commands;
  CBoundingBox3D *in_stack_fffffef8;
  CVector3f *input;
  SCollisionInfo SStack_100;
  uint auStack_d8 [4];
  uint auStack_c8 [2];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float afStack_98 [2];
  CVector3f CStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float afStack_74 [2];
  CVector3f CStack_6c;
  float fStack_58;
  int iStack_54;
  float fStack_50;
  CMatrix3x3f *pCStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  int iStack_18;
  CLocation *pCStack_14;
  
  bVar6 = 0;
  CStack_90.y = (this_ptr->base).location.position.x;
  CStack_90.z = (this_ptr->base).location.position.y;
  fStack_84 = (this_ptr->base).location.position.z;
  fStack_58 = this_ptr->param;
  if (1 < (int)this_ptr->one_shot) {
    return;
  }
  switch(this_ptr->door_state) {
  case DOOR_STATE_CLOSED:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->open_condition);
    if (iVar3 != 0) {
      this_ptr->door_state = DOOR_STATE_OPENING;
      if (this_ptr->open_sound[0] != '\0') {
        (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->open_sound);
      }
      core_setcolid_cpp_CDemonSet_transferVoxelShadow_FUN_005380c0(g_CDemonSetPtr,&this_ptr->base);
    }
    this_ptr->param = 0.0;
    break;
  case DOOR_STATE_OPENING:
    this_ptr->param = (delta_time * this_ptr->max_param) / this_ptr->open_speed + fStack_58;
    if (this_ptr->max_param <= 0.0) {
      if (this_ptr->param < this_ptr->max_param) {
        this_ptr->door_state = DOOR_STATE_OPEN;
        this_ptr->param = this_ptr->max_param;
        if (this_ptr->one_shot != ONE_SHOT_NO) {
          this_ptr->one_shot = ONE_SHOT_DONE;
        }
      }
    }
    else if (this_ptr->max_param < this_ptr->param) {
      this_ptr->door_state = DOOR_STATE_OPEN;
      this_ptr->param = this_ptr->max_param;
      if (this_ptr->one_shot != ONE_SHOT_NO) {
        this_ptr->one_shot = ONE_SHOT_DONE;
      }
    }
    break;
  case DOOR_STATE_OPEN:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->close_condition);
    if ((iVar3 != 0) &&
       (this_ptr->door_state = DOOR_STATE_CLOSING, this_ptr->close_sound[0] != '\0')) {
      (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->close_sound);
    }
    this_ptr->param = this_ptr->max_param;
    break;
  case DOOR_STATE_CLOSING:
    this_ptr->param = fStack_58 - (delta_time * this_ptr->max_param) / this_ptr->close_speed;
    if (this_ptr->max_param <= 0.0) {
      if (0.0 < this_ptr->param) {
        this_ptr->door_state = DOOR_STATE_CLOSED;
        this_ptr->param = 0.0;
        if (this_ptr->one_shot != ONE_SHOT_NO) {
          this_ptr->one_shot = ONE_SHOT_DONE;
        }
        core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_00538020(g_CDemonSetPtr,&this_ptr->base);
      }
    }
    else if (this_ptr->param < 0.0) {
      this_ptr->door_state = DOOR_STATE_CLOSED;
      this_ptr->param = 0.0;
      if (this_ptr->one_shot != ONE_SHOT_NO) {
        this_ptr->one_shot = ONE_SHOT_DONE;
      }
      core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_00538020(g_CDemonSetPtr,&this_ptr->base);
    }
  }
  if (this_ptr->door_state == DOOR_STATE_CLOSED) {
    if (this_ptr->on_close_trigger_event[0] == '\0') goto LAB_0045f677;
    commands = this_ptr->on_close_trigger_event;
  }
  else {
    if ((this_ptr->door_state != DOOR_STATE_OPEN) || (this_ptr->on_open_trigger_event[0] == '\0'))
    goto LAB_0045f677;
    commands = this_ptr->on_open_trigger_event;
  }
  core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,commands);
LAB_0045f677:
  core_door_cpp_CDoor_reposition_FUN_0045f030(this_ptr);
  if ((this_ptr->param != fStack_58) && (this_ptr->door_type != DOOR_TYPE_TILT)) {
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_fffffef8);
    pCStack_14 = &(this_ptr->base).location;
    puVar4 = auStack_d8;
    puVar5 = auStack_c8;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    pCStack_4c = &(this_ptr->base).orient_matrix;
    iStack_54 = 0;
    iStack_1c = 0;
    iStack_18 = 0;
    while( true ) {
      if (g_CDemonSetPtr->character_count <= iStack_1c) break;
      iVar3 = *(int *)((int)g_CDemonSetPtr->characters + iStack_18);
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0(&SStack_100);
      iVar2 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x44))(iVar3,&SStack_100);
      this_ptr_00 = pCStack_4c;
      if (((iVar2 == 2) &&
          (SStack_100.cylinder_bottom_y + *(float *)(iVar3 + 0x24) <=
           (this_ptr->base).location.position.y + fStack_b0)) &&
         ((this_ptr->base).location.position.y + fStack_bc <=
          SStack_100.cylinder_top_y + *(float *)(iVar3 + 0x24))) {
        fStack_9c = *(float *)(iVar3 + 0x20) - (pCStack_14->position).x;
        afStack_98[0] = *(float *)(iVar3 + 0x24) - (pCStack_14->position).y;
        input = &CStack_6c;
        afStack_98[1] = *(float *)(iVar3 + 0x28) - (pCStack_14->position).z;
        CStack_6c.x = fStack_9c;
        *(float *)((int)&CStack_6c + (uint)bVar6 * -8 + 4) = afStack_98[(uint)bVar6 * -2];
        *(float *)((int)&CStack_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_004495a0
                  (this_ptr_00,input,&CStack_90);
        fStack_78 = CStack_90.x;
        afStack_74[(uint)bVar6 * -2] = *(float *)((int)&CStack_90 + (uint)bVar6 * -8 + 4);
        afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             *(float *)((int)&CStack_90 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        if (&fStack_a8 != &fStack_78) {
          fStack_a8 = fStack_78;
          fStack_a4 = afStack_74[0];
          fStack_a0 = afStack_74[1];
        }
        fStack_40 = fStack_a8 + SStack_100.cylinder_radius;
        if (((fStack_c0 <= fStack_40) &&
            (fStack_48 = fStack_a8 - SStack_100.cylinder_radius, fStack_48 <= fStack_b4)) &&
           ((fStack_b8 <= fStack_a0 + SStack_100.cylinder_radius &&
            (fStack_44 = fStack_a0 - SStack_100.cylinder_radius, fStack_44 <= fStack_ac)))) {
          if (((fStack_c0 <= fStack_48) && (fStack_40 <= fStack_b4)) &&
             ((fStack_b8 <= fStack_44 && (fStack_a0 + SStack_100.cylinder_radius <= fStack_ac))))
          goto LAB_0045fae0;
          fVar1 = SStack_100.cylinder_radius * SStack_100.cylinder_radius;
          fStack_28 = SQRT(fVar1 - (fStack_b4 - fStack_a8) * (fStack_b4 - fStack_a8));
          fStack_38 = fStack_a0 + fStack_28;
          fStack_28 = fStack_a0 - fStack_28;
          if (((fStack_b8 <= fStack_38) && (fStack_38 <= fStack_ac)) ||
             ((fStack_b8 <= fStack_28 && (fStack_28 <= fStack_ac)))) goto LAB_0045fae0;
          fStack_34 = SQRT(fVar1 - (fStack_c0 - fStack_a8) * (fStack_c0 - fStack_a8));
          fStack_20 = fStack_a0 + fStack_34;
          fStack_34 = fStack_a0 - fStack_34;
          if (((fStack_b8 <= fStack_20) && (fStack_20 <= fStack_ac)) ||
             ((fStack_b8 <= fStack_34 && (fStack_34 <= fStack_ac)))) goto LAB_0045fae0;
          fStack_30 = SQRT(fVar1 - (fStack_ac - fStack_a0) * (fStack_ac - fStack_a0));
          fStack_2c = fStack_a8 + fStack_30;
          fStack_30 = fStack_a8 - fStack_30;
          if (((fStack_c0 <= fStack_2c) && (fStack_2c <= fStack_b4)) ||
             ((fStack_c0 <= fStack_30 && (fStack_30 <= fStack_b4)))) goto LAB_0045fae0;
          fStack_3c = SQRT(fVar1 - (fStack_b8 - fStack_a0) * (fStack_b8 - fStack_a0));
          fStack_24 = fStack_a8 + fStack_3c;
          fStack_3c = fStack_a8 - fStack_3c;
          if (((fStack_c0 <= fStack_24) && (fStack_24 <= fStack_b4)) ||
             ((fStack_c0 <= fStack_3c && (fStack_3c <= fStack_b4)))) goto LAB_0045fae0;
        }
      }
      iStack_1c = iStack_1c + 1;
      iStack_18 = iStack_18 + 4;
    }
    if (iStack_54 != 0) {
LAB_0045fae0:
      (this_ptr->base).location.position.x = fStack_84;
      (this_ptr->base).location.position.y = fStack_80;
      (this_ptr->base).location.position.z = fStack_7c;
      this_ptr->param = fStack_50;
      core_door_cpp_CDoor_reposition_FUN_0045f030(this_ptr);
      return;
    }
  }
  return;
}
