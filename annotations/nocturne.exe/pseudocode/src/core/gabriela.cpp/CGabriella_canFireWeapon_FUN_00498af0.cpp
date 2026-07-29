// Name: core_gabriela.cpp_CGabriella_canFireWeapon_FUN_00498af0
// Address: 00498af0
// Address Range: [[00498af0, 00498b52]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_canFireWeapon_FUN_00498af0(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_canFireWeapon_FUN_00498af0(CGabriella *this_ptr)

{
  CCharacter *this_ptr_00;
  int iVar1;
  CDemonActor *unaff_retaddr;
  
  if (((((this_ptr->weapon_state_flags & 2) != 0) && (1.0 <= this_ptr->draw_blend)) &&
      (1.0 <= this_ptr->aim_weight)) &&
     ((this_ptr->fire_cooldown_timer <= 0.0 &&
      (this_ptr_00 = (CCharacter *)(this_ptr->base).inventory.selected_weapon,
      iVar1 = (*(((this_ptr_00->base).vtable._uc)->_uc).canBeGrabbed)
                        (this_ptr_00,unaff_retaddr,(int)this_ptr), iVar1 != 0)))) {
    return 1;
  }
  return 0;
}
