// Name: core_gabriela.cpp_CGabriella_FUN_004d5fe0
// Address: 004d5fe0
// Address Range: [[004d5fe0, 004d604a]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_FUN_004d5fe0(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_FUN_004d5fe0(CGabriella *this_ptr)

{
  CCharacter *this_ptr_00;
  int iVar1;
  
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  this_ptr_00 = (CCharacter *)(this_ptr->base).inventory.selected_weapon;
  iVar1 = (*(((this_ptr_00->base).vtable._uc)->_uc).isGrabbable)(this_ptr_00);
  if ((iVar1 != 0) && (((this_ptr->base).inventory.selected_weapon)->fire_mode == 1)) {
    this_ptr->fire_cooldown_timer = 1.0;
  }
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  this_ptr->fire_state = 0;
  return;
}
