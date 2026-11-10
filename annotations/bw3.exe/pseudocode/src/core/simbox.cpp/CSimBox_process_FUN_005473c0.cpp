// Name: core_simbox.cpp_CSimBox_process_FUN_005473c0
// Address: 005473c0
// Address Range: [[005473c0, 00547598]]
// Convention: __cdecl
// Signature: void __cdecl core_simbox_cpp_CSimBox_process_FUN_005473c0(CSimBox *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_simbox_cpp_CSimBox_process_FUN_005473c0(CSimBox *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CDemonActor_vtable *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  byte bVar5;
  float afStackY_1010 [1016];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_10;
  
  bVar5 = 0;
  if ((this_ptr->type == 1) && ((this_ptr->physics_box).is_valid == 0)) {
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,this_ptr->trigger_event);
    if (iVar3 != 0) {
      pCVar4 = &(this_ptr->physics_box).linear_velocity_local;
      (this_ptr->physics_box).is_valid = 1;
      if (pCVar4 != &this_ptr->initial_velocity) {
        pCVar4->x = (this_ptr->initial_velocity).x;
        (this_ptr->physics_box).linear_velocity_local.y = (this_ptr->initial_velocity).y;
        (this_ptr->physics_box).linear_velocity_local.z = (this_ptr->initial_velocity).z;
      }
      pCVar4 = &(this_ptr->physics_box).angular_velocity;
      if (pCVar4 != &this_ptr->init_rot_vel) {
        pCVar4->x = (this_ptr->init_rot_vel).x;
        (this_ptr->physics_box).angular_velocity.y = (this_ptr->init_rot_vel).y;
        (this_ptr->physics_box).angular_velocity.z = (this_ptr->init_rot_vel).z;
      }
      core_dirmat_cpp_FUN_0045b800
                (&(this_ptr->physics_box).rotation_matrix,
                 &(this_ptr->physics_box).linear_velocity_local);
      fStack_28 = fStack_1c;
      (&stack0xffffffdc)[(uint)bVar5 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffffe8 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      pCVar4 = &(this_ptr->physics_box).linear_velocity;
      if (pCVar4 != (CVector3f *)&stack0xffffffd8) {
        pCVar4->x = fStack_28;
        (this_ptr->physics_box).linear_velocity.y = fStack_24;
        (this_ptr->physics_box).linear_velocity.z = fStack_20;
      }
    }
  }
  if (this_ptr->type == 0) {
    iVar3 = (**(code **)*0x01D70A78)(0x01D70A78,0x13);
    if (iVar3 != 0) {
      (this_ptr->base).location.position.x = (this_ptr->spawn_position).x;
      (this_ptr->base).location.position.y = (this_ptr->spawn_position).y;
      (this_ptr->base).location.position.z = (this_ptr->spawn_position).z;
      iStack_10 = rand();
      (this_ptr->base).orient.vec.x =
           ((float)iStack_10 * _DAT_005d1592 + (float)_DAT_005d1596) * (float)_DAT_005d159e;
      iStack_10 = rand();
      (this_ptr->base).orient.vec.z =
           (float)iStack_10 * _DAT_005d1592 * _DAT_005d15a6 * (float)_DAT_005d15ae;
      iStack_10 = rand();
      pCVar2 = (this_ptr->base).vtable._ub;
      (this_ptr->base).orient.vec.y =
           (float)iStack_10 * _DAT_005d1592 * _DAT_005d15a6 * (float)_DAT_005d15ae;
      (*pCVar2->setup)(&this_ptr->base);
    }
  }
  if ((this_ptr->physics_box).is_valid != 0) {
    core_box_cpp_CBox_process_FUN_0041b410(&this_ptr->physics_box,delta_time);
    (this_ptr->base).location.position.x = (this_ptr->physics_box).position.x;
    (this_ptr->base).location.position.y = (this_ptr->physics_box).position.y;
    (this_ptr->base).location.position.z = (this_ptr->physics_box).position.z;
    pUVar1 = &(this_ptr->base).orient;
    pCVar4 = &(this_ptr->physics_box).orientation;
    if ((CVector3f *)pUVar1 != pCVar4) {
      (pUVar1->vec).x = pCVar4->x;
      (this_ptr->base).orient.vec.y = (this_ptr->physics_box).orientation.y;
      (this_ptr->base).orient.vec.z = (this_ptr->physics_box).orientation.z;
      return;
    }
  }
  return;
}
