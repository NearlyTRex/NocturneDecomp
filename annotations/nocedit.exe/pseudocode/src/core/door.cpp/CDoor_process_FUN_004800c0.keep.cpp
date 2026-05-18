// Name: core_door.cpp_CDoor_process_FUN_004800c0
// Address: 004800c0
// MANUAL RECONSTRUCTION
// Address Range: [[004800c0, 004807c0]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_process_FUN_004800c0(CDoor *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_process_FUN_004800c0(CDoor *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar2;
  CVector3f *pCVar3;
  SCollisionInfo SStack_d0;
  CBoundingBox3D local_a8;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f aCStack_6c [2];
  int iStack_18;
  char *commands;
  int iVar1;
  
  fVar1 = (this_ptr->base).location.position.x;
  fVar2 = (this_ptr->base).location.position.y;
  fVar3 = (this_ptr->base).location.position.z;
  fVar4 = this_ptr->param;
  if (1 < this_ptr->one_shot) {
    return;
  }
  switch(this_ptr->door_state) {
  case DOOR_STATE_CLOSED:
    iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->open_condition);
    if (iVar8 != 0) {
      this_ptr->door_state = DOOR_STATE_OPENING;
      if (this_ptr->open_sound[0] != '\0') {
        (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->open_sound);
      }
      core_setcolid_cpp_CDemonSet_transferVoxelShadow_FUN_005744d0(g_CDemonSetPtr,&this_ptr->base);
    }
    this_ptr->param = 0.0;
    break;
  case DOOR_STATE_OPENING:
    this_ptr->param = (delta_time * this_ptr->max_param) / this_ptr->open_speed + fVar4;
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
    iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->close_condition);
    if ((iVar8 != 0) &&
       (this_ptr->door_state = DOOR_STATE_CLOSING, this_ptr->close_sound[0] != '\0')) {
      (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->close_sound);
    }
    this_ptr->param = this_ptr->max_param;
    break;
  case DOOR_STATE_CLOSING:
    this_ptr->param = fVar4 - (delta_time * this_ptr->max_param) / this_ptr->close_speed;
    if (this_ptr->max_param <= 0.0) {
      if (0.0 < this_ptr->param) {
        this_ptr->door_state = DOOR_STATE_CLOSED;
        this_ptr->param = 0.0;
        if (this_ptr->one_shot != 0) {
          this_ptr->one_shot = 2;
        }
        core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_00574440(g_CDemonSetPtr,&this_ptr->base);
      }
    }
    else if (this_ptr->param < 0.0) {
      this_ptr->door_state = DOOR_STATE_CLOSED;
      this_ptr->param = 0.0;
      if (this_ptr->one_shot != 0) {
        this_ptr->one_shot = 2;
      }
      core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_00574440(g_CDemonSetPtr,&this_ptr->base);
    }
  }
  if (this_ptr->door_state == DOOR_STATE_CLOSED) {
    if (this_ptr->on_close_trigger_event[0] == '\0') goto LAB_004801a8;
    commands = this_ptr->on_close_trigger_event;
  }
  else {
    if ((this_ptr->door_state != DOOR_STATE_OPEN) || (this_ptr->on_open_trigger_event[0] == '\0'))
    goto LAB_004801a8;
    commands = this_ptr->on_open_trigger_event;
  }
  core_event_cpp_CEventList_executeCommands_FUN_004aabe0(g_CEventListPtr,commands);
LAB_004801a8:
  core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
  if ((this_ptr->param != fVar4) && (this_ptr->door_type != DOOR_TYPE_TILT)) {
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_a8);
    iStack_18 = 0;
    while( true ) {
      if (g_CDemonSetPtr->character_count <= iStack_18) break;
      iVar1 = (int)g_CDemonSetPtr->characters[iStack_18];
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&SStack_d0);
      iVar2 = (*(((CDemonActor *)iVar1)->vtable._ub)->getCollisionType)((CDemonActor *)iVar1,&SStack_d0);
      if (((iVar2 == 2) &&
          (SStack_d0.cylinder_bottom_y + *(float *)(iVar1 + 0x24) <=
           (this_ptr->base).location.position.y + local_a8.max.y)) &&
         ((this_ptr->base).location.position.y + local_a8.min.y <=
          SStack_d0.cylinder_top_y + *(float *)(iVar1 + 0x24))) {
        CStack_84.x = *(float *)(iVar1 + 0x20) - (this_ptr->base).location.position.x;
        CStack_84.y = *(float *)(iVar1 + 0x24) - (this_ptr->base).location.position.y;
        CStack_84.z = *(float *)(iVar1 + 0x28) - (this_ptr->base).location.position.z;
        pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                           (&(this_ptr->base).orient_matrix,&CStack_90,&CStack_84);
        if (aCStack_6c != pCVar3) {
          aCStack_6c[0] = *pCVar3;
        }
        if (((local_a8.min.x <= aCStack_6c[0].x + SStack_d0.cylinder_radius) &&
            (aCStack_6c[0].x - SStack_d0.cylinder_radius <= local_a8.max.x)) &&
           ((local_a8.min.z <= aCStack_6c[0].z + SStack_d0.cylinder_radius &&
            (aCStack_6c[0].z - SStack_d0.cylinder_radius <= local_a8.max.z)))) {
          if (((local_a8.min.x <= aCStack_6c[0].x - SStack_d0.cylinder_radius) &&
              (aCStack_6c[0].x + SStack_d0.cylinder_radius <= local_a8.max.x)) &&
             ((local_a8.min.z <= aCStack_6c[0].z - SStack_d0.cylinder_radius &&
              (aCStack_6c[0].z + SStack_d0.cylinder_radius <= local_a8.max.z)))) {
LAB_0048059d:
            (this_ptr->base).location.position.x = fVar1;
            (this_ptr->base).location.position.y = fVar2;
            (this_ptr->base).location.position.z = fVar3;
            this_ptr->param = fVar4;
            core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
            return;
          }
          fVar5 = SStack_d0.cylinder_radius * SStack_d0.cylinder_radius;
          fVar6 = SQRT(fVar5 - (local_a8.max.x - aCStack_6c[0].x) *
                               (local_a8.max.x - aCStack_6c[0].x));
          fVar7 = aCStack_6c[0].z + fVar6;
          fVar6 = aCStack_6c[0].z - fVar6;
          if (((local_a8.min.z <= fVar7) && (fVar7 <= local_a8.max.z)) ||
             ((local_a8.min.z <= fVar6 && (fVar6 <= local_a8.max.z)))) goto LAB_0048059d;
          fVar6 = SQRT(fVar5 - (local_a8.min.x - aCStack_6c[0].x) *
                               (local_a8.min.x - aCStack_6c[0].x));
          fVar7 = aCStack_6c[0].z + fVar6;
          fVar6 = aCStack_6c[0].z - fVar6;
          if (((local_a8.min.z <= fVar7) && (fVar7 <= local_a8.max.z)) ||
             ((local_a8.min.z <= fVar6 && (fVar6 <= local_a8.max.z)))) goto LAB_0048059d;
          fVar6 = SQRT(fVar5 - (local_a8.max.z - aCStack_6c[0].z) *
                               (local_a8.max.z - aCStack_6c[0].z));
          fVar7 = aCStack_6c[0].x + fVar6;
          fVar6 = aCStack_6c[0].x - fVar6;
          if (((local_a8.min.x <= fVar7) && (fVar7 <= local_a8.max.x)) ||
             ((local_a8.min.x <= fVar6 && (fVar6 <= local_a8.max.x)))) goto LAB_0048059d;
          fVar5 = SQRT(fVar5 - (local_a8.min.z - aCStack_6c[0].z) *
                               (local_a8.min.z - aCStack_6c[0].z));
          fVar6 = aCStack_6c[0].x + fVar5;
          fVar5 = aCStack_6c[0].x - fVar5;
          if (((local_a8.min.x <= fVar6) && (fVar6 <= local_a8.max.x)) ||
             ((local_a8.min.x <= fVar5 && (fVar5 <= local_a8.max.x)))) goto LAB_0048059d;
        }
      }
      iStack_18 = iStack_18 + 1;
    }
  }
  return;
}
