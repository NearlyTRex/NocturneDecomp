// Name: core_ghoul.cpp_CGhoul_renderBackground_FUN_004c3980
// Address: 004c3980
// Address Range: [[004c3980, 004c39a7]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_renderBackground_FUN_004c3980(CGhoul *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_ghoul_cpp_CGhoul_renderBackground_FUN_004c3980(CGhoul *this_ptr,int layer_flag)

{
  if ((*(int *)&this_ptr->field_0x10b18 == 0) && (*(int *)&this_ptr->field_0x10b14 < 1)) {
    core_enemy_cpp_CEnemy_renderBackground_FUN_00488940((CEnemy *)this_ptr,layer_flag);
    return;
  }
  return;
}
