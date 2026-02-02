// Name: core_hero.cpp_CHero_isActiveTarget_FUN_004f37d0
// Address: 004f37d0
// Address Range: [[004f37d0, 004f388b]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_isActiveTarget_FUN_004f37d0(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_isActiveTarget_FUN_004f37d0(CHero *this_ptr)

{
  int iVar1;
  
  iVar1 = (*(((this_ptr->base).base.vtable._uc)->_uc).isDamageable)(&this_ptr->base);
  if (iVar1 < 2) {
    if (iVar1 == 1) {
      return 1;
    }
    if (((((((this_ptr->action_bindings).walk_key != 0) ||
           ((this_ptr->action_bindings).backup_key != 0)) ||
          ((this_ptr->action_bindings).fire_key != 0)) ||
         (((this_ptr->action_bindings).use_item_key != 0 ||
          ((this_ptr->action_bindings).light_key != 0)))) ||
        (((this_ptr->action_bindings).draw_key != 0 ||
         (((this_ptr->action_bindings).jump_key != 0 ||
          ((float)0.10000000000000001 < ABS(*(float *)this_ptr->unk2))))))) ||
       (((float)0.10000000000000001 < ABS(*(float *)(this_ptr->unk2 + 4)) ||
        (((float)0.10000000000000001 < ABS(*(float *)(this_ptr->unk2 + 8)) ||
         (*(int *)((this_ptr->base).unk1 + 4) == 0)))))) {
      return 1;
    }
  }
  return 0;
}
