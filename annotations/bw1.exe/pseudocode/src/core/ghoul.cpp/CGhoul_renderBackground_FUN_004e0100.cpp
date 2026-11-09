// Name: core_ghoul.cpp_CGhoul_renderBackground_FUN_004e0100
// Address: 004e0100
// Address Range: [[004e0100, 004e0127]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_renderBackground_FUN_004e0100(CGhoul *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_ghoul_cpp_CGhoul_renderBackground_FUN_004e0100(CGhoul *this_ptr,int layer_flag)

{
  if ((*(int *)&this_ptr->field_0xc288 == 0) && (*(int *)&this_ptr->field_0xc284 < 1)) {
    core_enemy_cpp_FUN_004a0fb0((CEnemy *)this_ptr,layer_flag);
    return;
  }
  return;
}
