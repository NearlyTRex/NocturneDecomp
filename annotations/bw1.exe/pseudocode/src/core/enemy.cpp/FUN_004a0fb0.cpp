// Name: core_enemy.cpp_FUN_004a0fb0
// Address: 004a0fb0
// Address Range: [[004a0fb0, 004a0fd9]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_FUN_004a0fb0(CEnemy *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_enemy_cpp_FUN_004a0fb0(CEnemy *this_ptr,int layer_flag)

{
  if (*(int *)&this_ptr->field_0xc1d4 != 0) {
    if (layer_flag != 0) {
      *(uint *)&this_ptr->field_0x24fc = 1;
    }
    core_charactr_cpp_FUN_0042f320(this_ptr,layer_flag);
  }
  return;
}
