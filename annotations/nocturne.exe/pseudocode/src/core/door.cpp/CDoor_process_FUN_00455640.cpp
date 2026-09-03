// Name: core_door.cpp_CDoor_process_FUN_00455640
// Address: 00455640
// Address Range: [[00455640, 00455d40]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_process_FUN_00455640(CDoor *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_process_FUN_00455640(CDoor *this_ptr,float delta_time)

{
  int iVar1;
  int iVar2;
  CVector3f *pCVar3;
  int iVar4;
  char *commands;
  SCollisionInfo SStack_d0;
  CBoundingBox3D local_a8;
  CVector3f CStack_90;
  CVector3f CStack_84;
  float local_78;
  float local_74;
  float local_70;
  CVector3f aCStack_6c [2];
  int iStack_54;
  float local_50;
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
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  local_78 = (this_ptr->base).location.position.x;
  local_74 = (this_ptr->base).location.position.y;
  local_70 = (this_ptr->base).location.position.z;
  local_50 = this_ptr->param;
  if (1 < this_ptr->one_shot) {
    return;
  }
  switch(this_ptr->door_state) {
  case DOOR_STATE_CLOSED:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->open_condition);
    if (iVar4 != 0) {
      this_ptr->door_state = DOOR_STATE_OPENING;
      if (this_ptr->open_sound[0] != '\0') {
        (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->open_sound);
      }
      core_setcolid_cpp_CDemonSet_transferVoxelShadow_FUN_00511aa0
                (g_CDemonSet_PTR_005be368,&this_ptr->base);
    }
    this_ptr->param = 0.0;
    break;
  case DOOR_STATE_OPENING:
    this_ptr->param = (delta_time * this_ptr->max_param) / this_ptr->open_speed + local_50;
    if (this_ptr->max_param <= 0.0) {
      if (this_ptr->param < this_ptr->max_param) {
        this_ptr->door_state = DOOR_STATE_OPEN;
        this_ptr->param = this_ptr->max_param;
        if (this_ptr->one_shot != 0) {
          this_ptr->one_shot = 2;
        }
      }
    }
    else if (this_ptr->max_param < this_ptr->param) {
      this_ptr->door_state = DOOR_STATE_OPEN;
      this_ptr->param = this_ptr->max_param;
      if (this_ptr->one_shot != 0) {
        this_ptr->one_shot = 2;
      }
    }
    break;
  case DOOR_STATE_OPEN:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->close_condition);
    if ((iVar4 != 0) &&
       (this_ptr->door_state = DOOR_STATE_CLOSING, this_ptr->close_sound[0] != '\0')) {
      (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->close_sound);
    }
    this_ptr->param = this_ptr->max_param;
    break;
  case DOOR_STATE_CLOSING:
    this_ptr->param = local_50 - (delta_time * this_ptr->max_param) / this_ptr->close_speed;
    if (this_ptr->max_param <= 0.0) {
      if (0.0 < this_ptr->param) {
        this_ptr->door_state = DOOR_STATE_CLOSED;
        this_ptr->param = 0.0;
        if (this_ptr->one_shot != 0) {
          this_ptr->one_shot = 2;
        }
        core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_00511a10
                  (g_CDemonSet_PTR_005be368,&this_ptr->base);
      }
    }
    else if (this_ptr->param < 0.0) {
      this_ptr->door_state = DOOR_STATE_CLOSED;
      this_ptr->param = 0.0;
      if (this_ptr->one_shot != 0) {
        this_ptr->one_shot = 2;
      }
      core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_00511a10
                (g_CDemonSet_PTR_005be368,&this_ptr->base);
    }
  }
  if (this_ptr->door_state == DOOR_STATE_CLOSED) {
    if (this_ptr->on_close_trigger_event[0] == '\0') goto LAB_00455728;
    commands = this_ptr->on_close_trigger_event;
  }
  else {
    if ((this_ptr->door_state != DOOR_STATE_OPEN) || (this_ptr->on_open_trigger_event[0] == '\0'))
    goto LAB_00455728;
    commands = this_ptr->on_open_trigger_event;
  }
  core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,commands);
LAB_00455728:
  core_door_cpp_CDoor_reposition_FUN_004552a0(this_ptr);
  if ((this_ptr->param != local_50) && (this_ptr->door_type != DOOR_TYPE_TILT)) {
    iVar4 = 0;
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_a8);
    iStack_54 = 0;
    pCStack_4c = &(this_ptr->base).orient_matrix;
    iStack_18 = 0;
    while( true ) {
      if (g_CDemonSet_PTR_005be368->character_count <= iStack_18) break;
      iVar1 = *(int *)((int)g_CDemonSet_PTR_005be368->characters + iVar4);
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&SStack_d0);
      iVar2 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x34))(iVar1,&SStack_d0);
      if (((iVar2 == 2) &&
          (SStack_d0.cylinder_bottom_y + *(float *)(iVar1 + 0x24) <=
           (this_ptr->base).location.position.y + local_a8.max.y)) &&
         ((this_ptr->base).location.position.y + local_a8.min.y <=
          SStack_d0.cylinder_top_y + *(float *)(iVar1 + 0x24))) {
        CStack_84.x = *(float *)(iVar1 + 0x20) - (this_ptr->base).location.position.x;
        CStack_84.y = *(float *)(iVar1 + 0x24) - (this_ptr->base).location.position.y;
        CStack_84.z = *(float *)(iVar1 + 0x28) - (this_ptr->base).location.position.z;
        pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                           (pCStack_4c,&CStack_90,&CStack_84);
        if (aCStack_6c != pCVar3) {
          aCStack_6c[0].x = pCVar3->x;
          aCStack_6c[0].y = pCVar3->y;
          aCStack_6c[0].z = pCVar3->z;
        }
        fStack_48 = aCStack_6c[0].x + SStack_d0.cylinder_radius;
        if (((local_a8.min.x <= fStack_48) &&
            (fStack_44 = aCStack_6c[0].x - SStack_d0.cylinder_radius, fStack_44 <= local_a8.max.x))
           && ((fStack_40 = aCStack_6c[0].z + SStack_d0.cylinder_radius, local_a8.min.z <= fStack_40
               && (fStack_3c = aCStack_6c[0].z - SStack_d0.cylinder_radius,
                  fStack_3c <= local_a8.max.z)))) {
          if (((local_a8.min.x <= fStack_44) && (fStack_48 <= local_a8.max.x)) &&
             ((local_a8.min.z <= fStack_3c && (fStack_40 <= local_a8.max.z)))) goto LAB_00455b1d;
          fStack_14 = SStack_d0.cylinder_radius * SStack_d0.cylinder_radius;
          fStack_30 = SQRT(fStack_14 -
                           (local_a8.max.x - aCStack_6c[0].x) * (local_a8.max.x - aCStack_6c[0].x));
          fStack_34 = aCStack_6c[0].z + fStack_30;
          fStack_30 = aCStack_6c[0].z - fStack_30;
          if (((local_a8.min.z <= fStack_34) && (fStack_34 <= local_a8.max.z)) ||
             ((local_a8.min.z <= fStack_30 && (fStack_30 <= local_a8.max.z)))) goto LAB_00455b1d;
          fStack_1c = SQRT(fStack_14 -
                           (local_a8.min.x - aCStack_6c[0].x) * (local_a8.min.x - aCStack_6c[0].x));
          fStack_24 = aCStack_6c[0].z + fStack_1c;
          fStack_1c = aCStack_6c[0].z - fStack_1c;
          if (((local_a8.min.z <= fStack_24) && (fStack_24 <= local_a8.max.z)) ||
             ((local_a8.min.z <= fStack_1c && (fStack_1c <= local_a8.max.z)))) goto LAB_00455b1d;
          fStack_20 = SQRT(fStack_14 -
                           (local_a8.max.z - aCStack_6c[0].z) * (local_a8.max.z - aCStack_6c[0].z));
          fStack_28 = aCStack_6c[0].x + fStack_20;
          fStack_20 = aCStack_6c[0].x - fStack_20;
          if (((local_a8.min.x <= fStack_28) && (fStack_28 <= local_a8.max.x)) ||
             ((local_a8.min.x <= fStack_20 && (fStack_20 <= local_a8.max.x)))) goto LAB_00455b1d;
          fStack_38 = SQRT(fStack_14 -
                           (local_a8.min.z - aCStack_6c[0].z) * (local_a8.min.z - aCStack_6c[0].z));
          fStack_2c = aCStack_6c[0].x + fStack_38;
          fStack_38 = aCStack_6c[0].x - fStack_38;
          if (((local_a8.min.x <= fStack_2c) && (fStack_2c <= local_a8.max.x)) ||
             ((local_a8.min.x <= fStack_38 && (fStack_38 <= local_a8.max.x)))) goto LAB_00455b1d;
        }
      }
      iStack_18 = iStack_18 + 1;
      iVar4 = iVar4 + 4;
    }
    if (iStack_54 != 0) {
LAB_00455b1d:
      (this_ptr->base).location.position.x = local_78;
      (this_ptr->base).location.position.y = local_74;
      (this_ptr->base).location.position.z = local_70;
      this_ptr->param = local_50;
      core_door_cpp_CDoor_reposition_FUN_004552a0(this_ptr);
      return;
    }
  }
  return;
}
