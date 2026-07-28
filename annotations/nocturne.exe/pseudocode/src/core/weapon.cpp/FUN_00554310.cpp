// Name: core_weapon.cpp_FUN_00554310
// Address: 00554310
// Address Range: [[00554310, 005543a0]]
// Convention: unknown
// Signature: void core_weapon_cpp_FUN_00554310(CWeapon *param_1,float *param_2)

#include "nocturne.h"

void core_weapon_cpp_FUN_00554310(CWeapon *param_1,float *param_2)

{
  CVector3f *pCVar1;
  float *pfVar2;
  byte local_14 [12];
  
  param_1->carried_by_actor = (CDemonActor *)0x0;
  core_weapon_cpp_CWeapon_setupPhysicsBox_FUN_00554660(param_1);
  if (param_2 != (float *)0x0) {
    pfVar2 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                                (&(param_1->physics_box).rotation_matrix,local_14,param_2);
    pCVar1 = &(param_1->physics_box).linear_velocity_local;
    if (pCVar1 != (CVector3f *)pfVar2) {
      pCVar1->x = *pfVar2;
      (param_1->physics_box).linear_velocity_local.y = pfVar2[1];
      (param_1->physics_box).linear_velocity_local.z = pfVar2[2];
    }
    pCVar1 = &(param_1->physics_box).linear_velocity;
    if (pCVar1 != (CVector3f *)param_2) {
      pCVar1->x = *param_2;
      (param_1->physics_box).linear_velocity.y = param_2[1];
      (param_1->physics_box).linear_velocity.z = param_2[2];
    }
  }
  (*((param_1->base).vtable._ub)->getPropertyList)(&param_1->base,(CActorPropertyList *)0x0);
  param_1->sim_timer = 5.0;
  return;
}
