// Name: core_ghoul.cpp_CGhoul_renderBackground_FUN_004c8c90
// Address: 004c8c90
// Address Range: [[004c8c90, 004c8cb7]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_renderBackground_FUN_004c8c90(CGhoul *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_ghoul_cpp_CGhoul_renderBackground_FUN_004c8c90(CGhoul *this_ptr,int layer_flag)

{
  if ((*(int *)&this_ptr->field_0xd074 == 0) && (*(int *)&this_ptr->field_0xd070 < 1)) {
    core_enemy_cpp_FUN_00489fc0((CEnemy *)this_ptr,layer_flag);
    return;
  }
  return;
}
