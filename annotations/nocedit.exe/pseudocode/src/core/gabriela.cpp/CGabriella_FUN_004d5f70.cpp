// Name: core_gabriela.cpp_CGabriella_FUN_004d5f70
// Address: 004d5f70
// Address Range: [[004d5f70, 004d5fd2]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_FUN_004d5f70(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_FUN_004d5f70(CGabriella *this_ptr)

{
  int iVar1;
  
  if (((((this_ptr->weapon_state_flags & 2) != 0) && (1.0 <= this_ptr->draw_blend)) &&
      (1.0 <= (float)this_ptr->unk3)) &&
     ((this_ptr->fire_cooldown_timer <= 0.0 &&
      (iVar1 = (*(((((this_ptr->base).inventory.selected_weapon)->base).vtable._uc)->_uc).cfunc5)(),
      iVar1 != 0)))) {
    return 1;
  }
  return 0;
}
