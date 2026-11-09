// Name: core_enemy.cpp_FUN_00489fc0
// Address: 00489fc0
// Address Range: [[00489fc0, 00489fe9]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_FUN_00489fc0(CEnemy *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_enemy_cpp_FUN_00489fc0(CEnemy *this_ptr,int layer_flag)

{
  if (*(int *)&this_ptr->field_0xcdd0 != 0) {
    if (layer_flag != 0) {
      *(uint *)&this_ptr->field_0x24fc = 1;
    }
    core_charactr_cpp_FUN_0042e300(this_ptr,layer_flag);
  }
  return;
}
