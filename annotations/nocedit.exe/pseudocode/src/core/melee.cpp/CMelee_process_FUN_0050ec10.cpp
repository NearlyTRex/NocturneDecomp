// Name: core_melee.cpp_CMelee_process_FUN_0050ec10
// Address: 0050ec10
// Address Range: [[0050ec10, 0050ecc2]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_process_FUN_0050ec10(CMelee *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_process_FUN_0050ec10(CMelee *this_ptr,float delta_time)

{
  CCharacter_full_vtable *pCVar1;
  float fVar2;
  CVector3f *input_local_point;
  CVector3f CStack_18;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base,delta_time);
  if ((0 < *(int *)(this_ptr->unk1 + 4)) &&
     (fVar2 = *(float *)(this_ptr->unk1 + 8) - delta_time, *(float *)(this_ptr->unk1 + 8) = fVar2,
     fVar2 <= 0.0)) {
    fVar2 = *(float *)(this_ptr->unk1 + 0xc) * (float)1.1499999999999999;
    pCVar1 = (this_ptr->base).base.vtable._uc;
    *(int *)(this_ptr->unk1 + 4) = *(int *)(this_ptr->unk1 + 4) + -1;
    *(float *)(this_ptr->unk1 + 0xc) = fVar2;
    *(float *)(this_ptr->unk1 + 8) = fVar2;
    input_local_point = (CVector3f *)(*(pCVar1->_uc).canWalk)((CCharacter *)this_ptr);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&CStack_18,input_local_point);
    core_gore_cpp_CGore_FUN_004edaa0(g_CGorePtr);
    return;
  }
  return;
}
