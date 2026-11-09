// Name: core_enemy.cpp_FUN_004a0ee0
// Address: 004a0ee0
// Address Range: [[004a0ee0, 004a0ef8]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_FUN_004a0ee0(CEnemy *this_ptr,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_enemy_cpp_FUN_004a0ee0(CEnemy *this_ptr,CDemonActor *victim)

{
  *(uint *)&this_ptr->field_0xc1ec = 0;
  *(CDemonActor **)&this_ptr->field_0xc260 = victim;
  return;
}
