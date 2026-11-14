// Name: core_gabriela.cpp_CGabriella_tryFireWeapon_FUN_004b0ef0
// Address: 004b0ef0
// Address Range: [[004b0ef0, 004b0f68]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_tryFireWeapon_FUN_004b0ef0(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_tryFireWeapon_FUN_004b0ef0(CGabriella *this_ptr)

{
  CCharacter *this_ptr_00;
  int iVar1;
  CDemonActor *unaff_ESI;
  
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  this_ptr_00 = (CCharacter *)
                (this_ptr->base).inventories[0].selected_weapons
                [(this_ptr->base).inventories[0].current_group];
  iVar1 = (*(((this_ptr_00->base).vtable._uc)->_uc).isGrabbable)(this_ptr_00,unaff_ESI);
  if ((iVar1 != 0) &&
     ((this_ptr->base).inventories[0].selected_weapons
      [(this_ptr->base).inventories[0].current_group]->fire_mode == FIRE_MODE_SINGLE)) {
    this_ptr->fire_cooldown_timer = 1.0;
  }
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  this_ptr->fire_state = 0;
  return;
}
