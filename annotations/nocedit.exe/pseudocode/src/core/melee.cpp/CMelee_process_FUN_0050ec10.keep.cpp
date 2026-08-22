// Name: core_melee.cpp_CMelee_process_FUN_0050ec10
// Address: 0050ec10
// MANUAL RECONSTRUCTION
// Address Range: [[0050ec10, 0050ecc2]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_process_FUN_0050ec10(CMelee *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_process_FUN_0050ec10(CMelee *this_ptr,float delta_time)

{
  float fVar1;
  CVector3f *input_local_point;
  CVector3f muzzle_local;
  CVector3f CStack_18;
  CWeapon_full_vtable *pCVar1;
  float fVar2;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base,delta_time);
  if ((0 < this_ptr->blood_spurt_count) &&
     (fVar2 = this_ptr->blood_spurt_timer - delta_time, this_ptr->blood_spurt_timer = fVar2,
     fVar2 <= 0.0)) {
    fVar1 = this_ptr->blood_spurt_interval * (float)1.1499999999999999;
    pCVar1 = (this_ptr->base).base.vtable._uw;
    this_ptr->blood_spurt_count = this_ptr->blood_spurt_count + -1;
    this_ptr->blood_spurt_interval = fVar1;
    this_ptr->blood_spurt_timer = fVar1;
    input_local_point = (*(pCVar1->_uw).getMuzzlePoint)(&this_ptr->base,&muzzle_local);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&CStack_18,input_local_point);
    core_gore_cpp_CGore_spawnBloodParticles_FUN_004edaa0
              (g_CGorePtr,&CStack_18,&g_ZeroVector.f,this_ptr->blood_gore_type);
    return;
  }
  return;
}
