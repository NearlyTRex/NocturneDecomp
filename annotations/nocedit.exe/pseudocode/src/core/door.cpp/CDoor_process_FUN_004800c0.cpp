// Name: core_door.cpp_CDoor_process_FUN_004800c0
// Address: 004800c0
// Address Range: [[004800c0, 004807c0]]
// Convention: __cdecl
// Signature: void core_door.cpp_CDoor_process_FUN_004800c0(CDoor * this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_process_FUN_004800c0(CDoor *this_ptr)

{
  char cVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  CVector3f *pCVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  float in_stack_00000008;
  byte auStack_c8 [40];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  float local_70;
  float fStack_6c;
  float fStack_68;
  CVector3f CStack_64;
  float local_50;
  int iStack_4c;
  float fStack_48;
  CMatrix3x3f *pCStack_44;
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
  float fStack_18;
  float fStack_14;
  int iVar7;
  
  CStack_7c.y = (this_ptr->base_actor).location.position.x;
  CStack_7c.z = (this_ptr->base_actor).location.position.y;
  local_70 = (this_ptr->base_actor).location.position.z;
  local_50 = this_ptr->param;
  if (1 < this_ptr->one_shot) {
    return;
  }
  switch(this_ptr->door_state) {
  case 0:
    iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->field7_0x2e8);
    if (iVar7 != 0) {
      cVar1 = this_ptr->field9_0x47c[1000];
      this_ptr->door_state = 1;
      if (cVar1 != '\0') {
        (*((this_ptr->base_actor).vtable)->playSound)
                  (&this_ptr->base_actor,this_ptr->field9_0x47c + 1000);
      }
      core_setcolid_cpp_CDemonSet_FUN_005744d0(g_CDemonSetPtr);
    }
    this_ptr->param = 0.0;
    break;
  case 1:
    this_ptr->param = (in_stack_00000008 * this_ptr->max_param) / this_ptr->open_speed + local_50;
    if (this_ptr->max_param <= 0.0) {
      if (this_ptr->param < this_ptr->max_param) {
        this_ptr->door_state = 2;
        this_ptr->param = this_ptr->max_param;
        if (this_ptr->one_shot != 0) {
          this_ptr->one_shot = 2;
        }
      }
    }
    else if (this_ptr->max_param < this_ptr->param) {
      this_ptr->door_state = 2;
      this_ptr->param = this_ptr->max_param;
      if (this_ptr->one_shot != 0) {
        this_ptr->one_shot = 2;
      }
    }
    break;
  case 2:
    iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->field7_0x2e8 + 100);
    if ((iVar7 != 0) &&
       (cVar1 = this_ptr->field9_0x47c[0x44c], this_ptr->door_state = 3, cVar1 != '\0')) {
      (*((this_ptr->base_actor).vtable)->playSound)
                (&this_ptr->base_actor,this_ptr->field9_0x47c + 0x44c);
    }
    this_ptr->param = this_ptr->max_param;
    break;
  case 3:
    this_ptr->param = local_50 - (in_stack_00000008 * this_ptr->max_param) / this_ptr->close_speed;
    if (this_ptr->max_param <= 0.0) {
      if (0.0 < this_ptr->param) {
        this_ptr->door_state = 0;
        this_ptr->param = 0.0;
        if (this_ptr->one_shot != 0) {
          this_ptr->one_shot = 2;
        }
        core_setcolid_cpp_CDemonSet_FUN_00574440(g_CDemonSetPtr);
      }
    }
    else if (this_ptr->param < 0.0) {
      this_ptr->door_state = 0;
      this_ptr->param = 0.0;
      if (this_ptr->one_shot != 0) {
        this_ptr->one_shot = 2;
      }
      core_setcolid_cpp_CDemonSet_FUN_00574440(g_CDemonSetPtr);
    }
  }
  if (this_ptr->door_state == 0) {
    cVar1 = this_ptr->field7_0x2e8[300];
  }
  else {
    if (this_ptr->door_state != 2) goto LAB_004801a8;
    cVar1 = this_ptr->field7_0x2e8[200];
  }
  if (cVar1 != '\0') {
    core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
  }
LAB_004801a8:
  core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
  if ((this_ptr->param != local_50) && (this_ptr->door_type != 3)) {
    iVar6 = 0;
    (*((this_ptr->base_actor).vtable)->getBoundingBox)
              (&this_ptr->base_actor,(CBoundingBox3D *)(auStack_c8 + 0x20));
    iStack_4c = 0;
    pCStack_44 = &(this_ptr->base_actor).orient_matrix;
    for (iVar7 = 0; iVar7 < g_CDemonSetPtr->damage_listener_count; iVar7 = iVar7 + 1) {
      iVar2 = *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iVar6 + -4);
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)auStack_c8);
      iVar4 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x34))();
      if (((iVar4 == 2) &&
          ((float)auStack_c8._20_4_ + *(float *)(iVar2 + 0x24) <=
           (this_ptr->base_actor).location.position.y + fStack_90)) &&
         ((this_ptr->base_actor).location.position.y + fStack_9c <=
          (float)auStack_c8._24_4_ + *(float *)(iVar2 + 0x24))) {
        CStack_7c.x = *(float *)(iVar2 + 0x20) - (this_ptr->base_actor).location.position.x;
        CStack_7c.y = *(float *)(iVar2 + 0x24) - (this_ptr->base_actor).location.position.y;
        CStack_7c.z = *(float *)(iVar2 + 0x28) - (this_ptr->base_actor).location.position.z;
        pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                           (pCStack_44,&CStack_88,&CStack_7c);
        if (&CStack_64 != pCVar5) {
          CStack_64.x = pCVar5->x;
          CStack_64.y = pCVar5->y;
          CStack_64.z = pCVar5->z;
        }
        fStack_40 = CStack_64.x + (float)auStack_c8._28_4_;
        if (((fStack_a0 <= fStack_40) &&
            (fStack_3c = CStack_64.x - (float)auStack_c8._28_4_, fStack_3c <= fStack_94)) &&
           ((fStack_38 = CStack_64.z + (float)auStack_c8._28_4_, fStack_98 <= fStack_38 &&
            (fStack_34 = CStack_64.z - (float)auStack_c8._28_4_, fStack_34 <= fStack_8c)))) {
          if (((fStack_a0 <= fStack_3c) && (fStack_40 <= fStack_94)) &&
             ((fStack_98 <= fStack_34 && (fStack_38 <= fStack_8c)))) goto LAB_0048059d;
          fVar3 = (float)auStack_c8._28_4_ * (float)auStack_c8._28_4_;
          fStack_28 = SQRT(fVar3 - (fStack_94 - CStack_64.x) * (fStack_94 - CStack_64.x));
          fStack_2c = CStack_64.z + fStack_28;
          fStack_28 = CStack_64.z - fStack_28;
          if (((fStack_98 <= fStack_2c) && (fStack_2c <= fStack_8c)) ||
             ((fStack_98 <= fStack_28 && (fStack_28 <= fStack_8c)))) goto LAB_0048059d;
          fStack_14 = SQRT(fVar3 - (fStack_a0 - CStack_64.x) * (fStack_a0 - CStack_64.x));
          fStack_1c = CStack_64.z + fStack_14;
          fStack_14 = CStack_64.z - fStack_14;
          if (((fStack_98 <= fStack_1c) && (fStack_1c <= fStack_8c)) ||
             ((fStack_98 <= fStack_14 && (fStack_14 <= fStack_8c)))) goto LAB_0048059d;
          fStack_18 = SQRT(fVar3 - (fStack_8c - CStack_64.z) * (fStack_8c - CStack_64.z));
          fStack_20 = CStack_64.x + fStack_18;
          fStack_18 = CStack_64.x - fStack_18;
          if (((fStack_a0 <= fStack_20) && (fStack_20 <= fStack_94)) ||
             ((fStack_a0 <= fStack_18 && (fStack_18 <= fStack_94)))) goto LAB_0048059d;
          fStack_30 = SQRT(fVar3 - (fStack_98 - CStack_64.z) * (fStack_98 - CStack_64.z));
          fStack_24 = CStack_64.x + fStack_30;
          fStack_30 = CStack_64.x - fStack_30;
          if (((fStack_a0 <= fStack_24) && (fStack_24 <= fStack_94)) ||
             ((fStack_a0 <= fStack_30 && (fStack_30 <= fStack_94)))) goto LAB_0048059d;
        }
      }
      iVar6 = iVar6 + 4;
    }
    if (iStack_4c != 0) {
LAB_0048059d:
      (this_ptr->base_actor).location.position.x = local_70;
      (this_ptr->base_actor).location.position.y = fStack_6c;
      (this_ptr->base_actor).location.position.z = fStack_68;
      this_ptr->param = fStack_48;
      core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
      return;
    }
  }
  return;
}
