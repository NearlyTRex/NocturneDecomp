// Name: core_simbox.cpp_CSimBox_process_FUN_00588f20
// Address: 00588f20
// Address Range: [[00588f20, 005890e6]]
// Convention: __cdecl
// Signature: void __cdecl core_simbox_cpp_CSimBox_process_FUN_00588f20(CSimBox *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_process_FUN_00588f20(CSimBox *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  int iVar3;
  CVector3f *pCVar4;
  int iVar2;
  CVector3f *pCVar5;
  CVector3f local_18;
  int iStack_c;
  CDemonActor_vtable *pCVar2;
  UOrientationVector *pUVar1;
  
  if ((this_ptr->type == 1) && ((this_ptr->physics_box).is_valid == 0)) {
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->trigger_event);
    if (iVar3 != 0) {
      pCVar1 = &(this_ptr->physics_box).linear_velocity_local;
      (this_ptr->physics_box).is_valid = 1;
      if (pCVar1 != &this_ptr->initial_velocity) {
        pCVar1->x = (this_ptr->initial_velocity).x;
        (this_ptr->physics_box).linear_velocity_local.y = (this_ptr->initial_velocity).y;
        (this_ptr->physics_box).linear_velocity_local.z = (this_ptr->initial_velocity).z;
      }
      pCVar1 = &(this_ptr->physics_box).angular_velocity;
      if (pCVar1 != &this_ptr->init_rot_vel) {
        pCVar1->x = (this_ptr->init_rot_vel).x;
        (this_ptr->physics_box).angular_velocity.y = (this_ptr->init_rot_vel).y;
        (this_ptr->physics_box).angular_velocity.z = (this_ptr->init_rot_vel).z;
      }
      pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (&(this_ptr->physics_box).rotation_matrix,&local_18,
                          &(this_ptr->physics_box).linear_velocity_local);
      pCVar1 = &(this_ptr->physics_box).linear_velocity;
      if (pCVar1 != pCVar4) {
        pCVar1->x = pCVar4->x;
        (this_ptr->physics_box).linear_velocity.y = pCVar4->y;
        (this_ptr->physics_box).linear_velocity.z = pCVar4->z;
      }
    }
  }
  if (this_ptr->type == 0) {
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_R);
    if (iVar2 != 0) {
      (this_ptr->base).location.position.x = (this_ptr->spawn_position).x;
      (this_ptr->base).location.position.y = (this_ptr->spawn_position).y;
      (this_ptr->base).location.position.z = (this_ptr->spawn_position).z;
      iVar2 = rand();
      (this_ptr->base).orient.vec.x =
           ((float)iVar2 * 3.051851e-05f + (float)-0.5) * (float)3.1415926535000001;
      iVar2 = rand();
      (this_ptr->base).orient.vec.z =
           (float)iVar2 * 3.051851e-05f * (float)3.1415926535000001 * (float)2;
      iVar2 = rand();
      pCVar2 = (this_ptr->base).vtable._ub;
      (this_ptr->base).orient.vec.y =
           (float)iVar2 * 3.051851e-05f * (float)3.1415926535000001 * (float)2;
      (*pCVar2->setup)(&this_ptr->base);
    }
  }
  if ((this_ptr->physics_box).is_valid != 0) {
    core_box_cpp_CBox_process_FUN_0041e2f0(&this_ptr->physics_box,delta_time);
    (this_ptr->base).location.position.x = (this_ptr->physics_box).position.x;
    (this_ptr->base).location.position.y = (this_ptr->physics_box).position.y;
    (this_ptr->base).location.position.z = (this_ptr->physics_box).position.z;
    pUVar1 = &(this_ptr->base).orient;
    pCVar5 = &(this_ptr->physics_box).orientation;
    if (pUVar1 != (UOrientationVector *)pCVar5) {
      (pUVar1->vec).x = pCVar5->x;
      (this_ptr->base).orient.vec.y = (this_ptr->physics_box).orientation.y;
      (this_ptr->base).orient.vec.z = (this_ptr->physics_box).orientation.z;
      return;
    }
  }
  return;
}
