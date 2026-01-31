// Name: core_weapon.cpp_CWeapon_FUN_005ee3f0
// Address: 005ee3f0
// Address Range: [[005ee3f0, 005ee480]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_FUN_005ee3f0(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_FUN_005ee3f0(CWeapon *this_ptr)

{
  CVector3f *pCVar1;
  CVector3f *in_stack_00000008;
  CVector3f local_14;
  
  this_ptr->carried_by_actor = '\0';
  this_ptr->unk3[0] = '\0';
  this_ptr->unk3[1] = '\0';
  this_ptr->unk3[2] = '\0';
  core_weapon_cpp_CWeapon_FUN_005ee740(this_ptr);
  if (in_stack_00000008 != (CVector3f *)0x0) {
    pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       ((CMatrix3x3f *)(this_ptr->unk3 + 0x1b),&local_14,in_stack_00000008);
    if ((CVector3f *)(this_ptr->unk3 + 0x4f) != pCVar1) {
      ((CVector3f *)(this_ptr->unk3 + 0x4f))->x = pCVar1->x;
      *(float *)(this_ptr->unk3 + 0x53) = pCVar1->y;
      *(float *)(this_ptr->unk3 + 0x57) = pCVar1->z;
    }
    if ((CVector3f *)(this_ptr->unk3 + 0x43) != in_stack_00000008) {
      ((CVector3f *)(this_ptr->unk3 + 0x43))->x = in_stack_00000008->x;
      *(float *)(this_ptr->unk3 + 0x47) = in_stack_00000008->y;
      *(float *)(this_ptr->unk3 + 0x4b) = in_stack_00000008->z;
    }
  }
  (*(((this_ptr->base).vtable._uc)->_uc).cfunc2)();
  this_ptr->sim_timer = 5.0;
  return;
}
