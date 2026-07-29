// Name: core_gabriela.cpp_CGabriella_tryFireWeapon_FUN_00498b60
// Address: 00498b60
// Address Range: [[00498b60, 00498bca]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_tryFireWeapon_FUN_00498b60(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_tryFireWeapon_FUN_00498b60(CGabriella *this_ptr)

{
  CCharacter *this_ptr_00;
  int iVar1;
  CDemonActor *unaff_ESI;
  
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,(CDemonActor *)this_ptr);
  this_ptr_00 = (CCharacter *)(this_ptr->base).inventory.selected_weapon;
  iVar1 = (*(((this_ptr_00->base).vtable._uc)->_uc).isGrabbable)(this_ptr_00,unaff_ESI);
  if ((iVar1 != 0) && (((this_ptr->base).inventory.selected_weapon)->fire_mode == 1)) {
    this_ptr->fire_cooldown_timer = 1.0;
  }
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  this_ptr->fire_state = 0;
  return;
}
