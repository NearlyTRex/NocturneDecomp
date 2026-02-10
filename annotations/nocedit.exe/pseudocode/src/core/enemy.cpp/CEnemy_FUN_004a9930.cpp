// Name: core_enemy.cpp_CEnemy_FUN_004a9930
// Address: 004a9930
// Address Range: [[004a9930, 004a99c7]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_FUN_004a9930(CEnemy *this_ptr)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_FUN_004a9930(CEnemy *this_ptr)

{
  CCharacter *this_ptr_00;
  double dVar1;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  SDamageInfo *in_stack_00000010;
  CVector3f local_20;
  
  this_ptr_00 = (CCharacter *)this_ptr->victim;
  if (this_ptr_00 != (CCharacter *)0x0) {
    (*(((this_ptr_00->base).vtable._uc)->_uc).testDamageLine)
              (this_ptr_00,in_stack_00000008,in_stack_0000000c,in_stack_00000010,&local_20);
    if (0.0 < (double)in_stack_00000010->damage_amount) {
      local_20.z = 0.0;
      local_20.y = 6.850934e-39;
      dVar1 = round
                        ((double)in_stack_00000010->damage_amount * 1.2 *
                         0.25);
      local_20.x = (float)(int)ROUND(dVar1);
      core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
      return 1;
    }
  }
  return 0;
}
