// Name: core_enemy.cpp_CEnemy_FUN_004a9880
// Address: 004a9880
// Address Range: [[004a9880, 004a9927]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_FUN_004a9880(CEnemy *this_ptr)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_FUN_004a9880(CEnemy *this_ptr)

{
  CCharacter *this_ptr_00;
  CVector3f *in_stack_00000008;
  float in_stack_0000000c;
  SDamageInfo *in_stack_00000010;
  
  this_ptr_00 = (CCharacter *)this_ptr->victim;
  if (this_ptr_00 != (CCharacter *)0x0) {
    (*(((this_ptr_00->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
              (this_ptr_00,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
    if (0.0 < (double)in_stack_00000010->damage_amount) {
      round
                ((double)in_stack_00000010->damage_amount * 1.2 * 0.25);
      core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
      return 1;
    }
  }
  return 0;
}
