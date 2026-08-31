// Name: core_scat.cpp_CScat_renderOpaque_FUN_00557df0
// Address: 00557df0
// Address Range: [[00557df0, 00557e9b]]
// Convention: __cdecl
// Signature: int __cdecl core_scat_cpp_CScat_renderOpaque_FUN_00557df0(CScat *this_ptr)

#include "nocturne.h"

int __cdecl core_scat_cpp_CScat_renderOpaque_FUN_00557df0(CScat *this_ptr)

{
  CWeapon *this_ptr_00;
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
  iVar2 = 0;
  if (iVar1 != 0) {
    this_ptr_00 = this_ptr->weapon_actor;
    if (this_ptr_00 != (CWeapon *)0x0) {
      (*((this_ptr_00->base).vtable._ub)->renderOpaque)(&this_ptr_00->base);
      iVar2 = 0;
      if (this_ptr->weapon_actor != (CWeapon *)0x0) {
        switch(this_ptr->weapon_actor->weapon_type) {
        default:
          iVar2 = 2;
          break;
        case WEAPON_TYPE_BARON:
          iVar2 = 0;
        }
      }
      fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                        ((CCharacter *)this_ptr,iVar2);
      if ((float)0.94999999999999996 < fVar3) {
        (*(((((CCharacter *)this_ptr->weapon_actor)->base).vtable._uc)->_uc).releaseFromGrab)
                  ((CCharacter *)this_ptr->weapon_actor);
        return 1;
      }
      return 1;
    }
    iVar2 = 1;
  }
  return iVar2;
}
