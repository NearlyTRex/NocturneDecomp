// Name: core_simbox.cpp_CSimBox_process_FUN_00588f20
// Address: 00588f20
// Address Range: [[00588f20, 005890e6]]
// Convention: __cdecl
// Signature: void __cdecl core_simbox_cpp_CSimBox_process_FUN_00588f20(CSimBox *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_process_FUN_00588f20(CSimBox *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CDemonActor_vtable *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  CVector3f *pCVar5;
  CVector3f local_18;
  int iStack_c;
  
  if ((this_ptr->type == 1) && ((this_ptr->box).is_valid == 0)) {
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->trigger_event);
    if (iVar3 != 0) {
      pCVar5 = &(this_ptr->box).linear_velocity_local;
      (this_ptr->box).is_valid = 1;
      if (pCVar5 != &this_ptr->initial_velocity) {
        pCVar5->x = (this_ptr->initial_velocity).x;
        (this_ptr->box).linear_velocity_local.y = (this_ptr->initial_velocity).y;
        (this_ptr->box).linear_velocity_local.z = (this_ptr->initial_velocity).z;
      }
      pCVar5 = &(this_ptr->box).angular_velocity;
      if (pCVar5 != &this_ptr->init_rot_vel) {
        pCVar5->x = (this_ptr->init_rot_vel).x;
        (this_ptr->box).angular_velocity.y = (this_ptr->init_rot_vel).y;
        (this_ptr->box).angular_velocity.z = (this_ptr->init_rot_vel).z;
      }
      pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (&(this_ptr->box).rotation_matrix,&local_18,
                          &(this_ptr->box).linear_velocity_local);
      pCVar5 = &(this_ptr->box).linear_velocity;
      if (pCVar5 != pCVar4) {
        pCVar5->x = pCVar4->x;
        (this_ptr->box).linear_velocity.y = pCVar4->y;
        (this_ptr->box).linear_velocity.z = pCVar4->z;
      }
    }
  }
  if (this_ptr->type == 0) {
    iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x13);
    if (iVar3 != 0) {
      (this_ptr->base).location.position.x = *(float *)(this_ptr->unk + 4);
      (this_ptr->base).location.position.y = *(float *)(this_ptr->unk + 8);
      (this_ptr->base).location.position.z = *(float *)(this_ptr->unk + 0xc);
      iStack_c = rand();
      (this_ptr->base).orient.vec.x =
           ((float)iStack_c * 3.051851e-05f + (float)-0.5) * (float)3.1415926535000001;
      iStack_c = rand();
      (this_ptr->base).orient.vec.z =
           (float)iStack_c * 3.051851e-05f * (float)3.1415926535000001 * (float)2;
      iStack_c = rand();
      pCVar2 = (this_ptr->base).vtable._ub;
      (this_ptr->base).orient.vec.y =
           (float)iStack_c * 3.051851e-05f * (float)3.1415926535000001 * (float)2;
      (*pCVar2->setup)(&this_ptr->base);
    }
  }
  if ((this_ptr->box).is_valid != 0) {
    core_box_cpp_CBox_process_FUN_0041e2f0(&this_ptr->box,delta_time);
    (this_ptr->base).location.position.x = (this_ptr->box).position.x;
    (this_ptr->base).location.position.y = (this_ptr->box).position.y;
    (this_ptr->base).location.position.z = (this_ptr->box).position.z;
    pUVar1 = &(this_ptr->base).orient;
    pCVar5 = &(this_ptr->box).orientation;
    if ((CVector3f *)pUVar1 != pCVar5) {
      (pUVar1->vec).x = pCVar5->x;
      (this_ptr->base).orient.vec.y = (this_ptr->box).orientation.y;
      (this_ptr->base).orient.vec.z = (this_ptr->box).orientation.z;
      return;
    }
  }
  return;
}
