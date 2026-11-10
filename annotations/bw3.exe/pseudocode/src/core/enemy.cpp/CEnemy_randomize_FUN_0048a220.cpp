// Name: core_enemy.cpp_CEnemy_randomize_FUN_0048a220
// Address: 0048a220
// Address Range: [[0048a220, 0048a2a7]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_randomize_FUN_0048a220(CEnemy *this_ptr)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_randomize_FUN_0048a220(CEnemy *this_ptr)

{
  EDeathState EVar1;
  uint in_stack_00000008;
  
  EVar1 = (*(((this_ptr->base).base.vtable._uc)->_uc).getDeathState)(&this_ptr->base);
  if ((0 < (int)EVar1) && (*(int *)&this_ptr->field_0xcecc == 0)) {
    core_enemy_cpp_FUN_00489c90(this_ptr);
  }
  if ((this_ptr->base).hit_points <= 0.0) {
    EVar1 = (*(((this_ptr->base).base.vtable._uc)->_uc).getDeathState)(&this_ptr->base);
    if ((int)EVar1 < 1) {
      (*(((this_ptr->base).base.vtable._uc)->_uc).kill)(&this_ptr->base,0,(CVector3f *)0x0,-1.0);
      core_charactr_cpp_FUN_0042cd70(this_ptr,in_stack_00000008);
      return;
    }
  }
  core_charactr_cpp_FUN_0042cd70(this_ptr,in_stack_00000008);
  return;
}
