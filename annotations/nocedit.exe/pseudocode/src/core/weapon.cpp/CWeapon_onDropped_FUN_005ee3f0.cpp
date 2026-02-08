// Name: core_weapon.cpp_CWeapon_onDropped_FUN_005ee3f0
// Address: 005ee3f0
// Address Range: [[005ee3f0, 005ee480]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_onDropped_FUN_005ee3f0(CWeapon *this_ptr,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl
core_weapon_cpp_CWeapon_onDropped_FUN_005ee3f0(CWeapon *this_ptr,CVector3f *drop_position)

{
  CVector3f *pCVar1;
  CVector3f local_14;
  
  this_ptr->carried_by_actor = (CDemonActor *)0x0;
  core_weapon_cpp_CWeapon_FUN_005ee740(this_ptr);
  if (drop_position != (CVector3f *)0x0) {
    pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       ((CMatrix3x3f *)(this_ptr->unk3 + 0x18),&local_14,drop_position);
    if ((CVector3f *)(this_ptr->unk3 + 0x4c) != pCVar1) {
      ((CVector3f *)(this_ptr->unk3 + 0x4c))->x = pCVar1->x;
      *(float *)(this_ptr->unk3 + 0x50) = pCVar1->y;
      *(float *)(this_ptr->unk3 + 0x54) = pCVar1->z;
    }
    if ((CVector3f *)(this_ptr->unk3 + 0x40) != drop_position) {
      ((CVector3f *)(this_ptr->unk3 + 0x40))->x = drop_position->x;
      *(float *)(this_ptr->unk3 + 0x44) = drop_position->y;
      *(float *)(this_ptr->unk3 + 0x48) = drop_position->z;
    }
  }
  (*(((this_ptr->base).vtable._uc)->_uc).cfunc2)();
  this_ptr->sim_timer = 5.0;
  return;
}
