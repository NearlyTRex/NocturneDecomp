// Name: core_melee.cpp_CMelee_process_FUN_004cf0c0
// Address: 004cf0c0
// Address Range: [[004cf0c0, 004cf172]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_process_FUN_004cf0c0(CMelee *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_process_FUN_004cf0c0(CMelee *this_ptr,float delta_time)

{
  CCharacter_full_vtable *pCVar1;
  float fVar2;
  CVector3f *input_local_point;
  CVector3f CStack_18;
  
  core_weapon_cpp_CWeapon_process_FUN_00554030(&this_ptr->base,delta_time);
  if ((0 < this_ptr->blood_spurt_count) &&
     (fVar2 = this_ptr->blood_spurt_timer - delta_time, this_ptr->blood_spurt_timer = fVar2,
     fVar2 <= 0.0)) {
    fVar2 = this_ptr->blood_spurt_interval * (float)1.1499999999999999;
    pCVar1 = (this_ptr->base).base.vtable._uc;
    this_ptr->blood_spurt_count = this_ptr->blood_spurt_count + -1;
    this_ptr->blood_spurt_interval = fVar2;
    this_ptr->blood_spurt_timer = fVar2;
    input_local_point = (CVector3f *)(*(pCVar1->_uc).canWalk)((CCharacter *)this_ptr);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)this_ptr,&CStack_18,input_local_point);
    core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0
              (g_CGore_PTR_005b96c4,&CStack_18,(CVector3f *)&DAT_02dd1184,this_ptr->blood_gore_type)
    ;
    return;
  }
  return;
}
