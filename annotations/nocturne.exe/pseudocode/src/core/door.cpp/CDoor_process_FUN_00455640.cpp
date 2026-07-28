// Name: core_door.cpp_CDoor_process_FUN_00455640
// Address: 00455640
// Address Range: [[00455640, 00455d40]]
// Convention: unknown
// Signature: void core_door_cpp_CDoor_process_FUN_00455640(CDoor *param_1,float param_2)

#include "nocturne.h"

void core_door_cpp_CDoor_process_FUN_00455640(CDoor *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  char *commands;
  SCollisionInfo SStack_d0;
  CBoundingBox3D local_a8;
  byte auStack_90 [12];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float local_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
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
  
  local_78 = (param_1->base).location.position.x;
  local_74 = (param_1->base).location.position.y;
  local_70 = (param_1->base).location.position.z;
  local_50 = param_1->param;
  if (1 < param_1->one_shot) {
    return;
  }
  switch(param_1->door_state) {
  case DOOR_STATE_CLOSED:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1->open_condition);
    if (iVar4 != 0) {
      param_1->door_state = DOOR_STATE_OPENING;
      if (param_1->open_sound[0] != '\0') {
        (*((param_1->base).vtable._ub)->playSound)(&param_1->base,param_1->open_sound);
      }
      core_setcolid_cpp_FUN_00511aa0(0x01E57284,param_1);
    }
    param_1->param = 0.0;
    break;
  case DOOR_STATE_OPENING:
    param_1->param = (param_2 * param_1->max_param) / param_1->open_speed + local_50;
    if (param_1->max_param <= 0.0) {
      if (param_1->param < param_1->max_param) {
        param_1->door_state = DOOR_STATE_OPEN;
        param_1->param = param_1->max_param;
        if (param_1->one_shot != 0) {
          param_1->one_shot = 2;
        }
      }
    }
    else if (param_1->max_param < param_1->param) {
      param_1->door_state = DOOR_STATE_OPEN;
      param_1->param = param_1->max_param;
      if (param_1->one_shot != 0) {
        param_1->one_shot = 2;
      }
    }
    break;
  case DOOR_STATE_OPEN:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1->close_condition);
    if ((iVar4 != 0) && (param_1->door_state = DOOR_STATE_CLOSING, param_1->close_sound[0] != '\0'))
    {
      (*((param_1->base).vtable._ub)->playSound)(&param_1->base,param_1->close_sound);
    }
    param_1->param = param_1->max_param;
    break;
  case DOOR_STATE_CLOSING:
    param_1->param = local_50 - (param_2 * param_1->max_param) / param_1->close_speed;
    if (param_1->max_param <= 0.0) {
      if (0.0 < param_1->param) {
        param_1->door_state = DOOR_STATE_CLOSED;
        param_1->param = 0.0;
        if (param_1->one_shot != 0) {
          param_1->one_shot = 2;
        }
        core_setcolid_cpp_FUN_00511a10(0x01E57284,param_1);
      }
    }
    else if (param_1->param < 0.0) {
      param_1->door_state = DOOR_STATE_CLOSED;
      param_1->param = 0.0;
      if (param_1->one_shot != 0) {
        param_1->one_shot = 2;
      }
      core_setcolid_cpp_FUN_00511a10(0x01E57284,param_1);
    }
  }
  if (param_1->door_state == DOOR_STATE_CLOSED) {
    if (param_1->on_close_trigger_event[0] == '\0') goto LAB_00455728;
    commands = param_1->on_close_trigger_event;
  }
  else {
    if ((param_1->door_state != DOOR_STATE_OPEN) || (param_1->on_open_trigger_event[0] == '\0'))
    goto LAB_00455728;
    commands = param_1->on_open_trigger_event;
  }
  core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,commands);
LAB_00455728:
  core_door_cpp_CDoor_reposition_FUN_004552a0(param_1);
  if ((param_1->param != local_50) && (param_1->door_type != DOOR_TYPE_TILT)) {
    iVar4 = 0;
    (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,&local_a8);
    iStack_54 = 0;
    pCStack_4c = &(param_1->base).orient_matrix;
    iStack_18 = 0;
    while( true ) {
      if (*(int *)(0x01E57284 + 0x14ecb0) <= iStack_18) break;
      iVar1 = *(int *)(iVar4 + 0x14ecb4 + 0x01E57284);
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&SStack_d0);
      iVar2 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x34))(iVar1,&SStack_d0);
      if (((iVar2 == 2) &&
          (SStack_d0.cylinder_bottom_y + *(float *)(iVar1 + 0x24) <=
           (param_1->base).location.position.y + local_a8.max.y)) &&
         ((param_1->base).location.position.y + local_a8.min.y <=
          SStack_d0.cylinder_top_y + *(float *)(iVar1 + 0x24))) {
        fStack_84 = *(float *)(iVar1 + 0x20) - (param_1->base).location.position.x;
        fStack_80 = *(float *)(iVar1 + 0x24) - (param_1->base).location.position.y;
        fStack_7c = *(float *)(iVar1 + 0x28) - (param_1->base).location.position.z;
        pfVar3 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                                    (pCStack_4c,auStack_90,&fStack_84);
        if (&fStack_6c != pfVar3) {
          fStack_6c = *pfVar3;
          fStack_68 = pfVar3[1];
          fStack_64 = pfVar3[2];
        }
        fStack_48 = fStack_6c + SStack_d0.cylinder_radius;
        if (((local_a8.min.x <= fStack_48) &&
            (fStack_44 = fStack_6c - SStack_d0.cylinder_radius, fStack_44 <= local_a8.max.x)) &&
           ((fStack_40 = fStack_64 + SStack_d0.cylinder_radius, local_a8.min.z <= fStack_40 &&
            (fStack_3c = fStack_64 - SStack_d0.cylinder_radius, fStack_3c <= local_a8.max.z)))) {
          if (((local_a8.min.x <= fStack_44) && (fStack_48 <= local_a8.max.x)) &&
             ((local_a8.min.z <= fStack_3c && (fStack_40 <= local_a8.max.z)))) goto LAB_00455b1d;
          fStack_14 = SStack_d0.cylinder_radius * SStack_d0.cylinder_radius;
          fStack_30 = SQRT(fStack_14 - (local_a8.max.x - fStack_6c) * (local_a8.max.x - fStack_6c));
          fStack_34 = fStack_64 + fStack_30;
          fStack_30 = fStack_64 - fStack_30;
          if (((local_a8.min.z <= fStack_34) && (fStack_34 <= local_a8.max.z)) ||
             ((local_a8.min.z <= fStack_30 && (fStack_30 <= local_a8.max.z)))) goto LAB_00455b1d;
          fStack_1c = SQRT(fStack_14 - (local_a8.min.x - fStack_6c) * (local_a8.min.x - fStack_6c));
          fStack_24 = fStack_64 + fStack_1c;
          fStack_1c = fStack_64 - fStack_1c;
          if (((local_a8.min.z <= fStack_24) && (fStack_24 <= local_a8.max.z)) ||
             ((local_a8.min.z <= fStack_1c && (fStack_1c <= local_a8.max.z)))) goto LAB_00455b1d;
          fStack_20 = SQRT(fStack_14 - (local_a8.max.z - fStack_64) * (local_a8.max.z - fStack_64));
          fStack_28 = fStack_6c + fStack_20;
          fStack_20 = fStack_6c - fStack_20;
          if (((local_a8.min.x <= fStack_28) && (fStack_28 <= local_a8.max.x)) ||
             ((local_a8.min.x <= fStack_20 && (fStack_20 <= local_a8.max.x)))) goto LAB_00455b1d;
          fStack_38 = SQRT(fStack_14 - (local_a8.min.z - fStack_64) * (local_a8.min.z - fStack_64));
          fStack_2c = fStack_6c + fStack_38;
          fStack_38 = fStack_6c - fStack_38;
          if (((local_a8.min.x <= fStack_2c) && (fStack_2c <= local_a8.max.x)) ||
             ((local_a8.min.x <= fStack_38 && (fStack_38 <= local_a8.max.x)))) goto LAB_00455b1d;
        }
      }
      iStack_18 = iStack_18 + 1;
      iVar4 = iVar4 + 4;
    }
    if (iStack_54 != 0) {
LAB_00455b1d:
      (param_1->base).location.position.x = local_78;
      (param_1->base).location.position.y = local_74;
      (param_1->base).location.position.z = local_70;
      param_1->param = local_50;
      core_door_cpp_CDoor_reposition_FUN_004552a0(param_1);
      return;
    }
  }
  return;
}
