// Name: core_ghoul.cpp_CGhoul_renderBackground_FUN_004c3980
// Address: 004c3980
// Address Range: [[004c3980, 004c39a7]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_renderBackground_FUN_004c3980(CGhoul *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_ghoul_cpp_CGhoul_renderBackground_FUN_004c3980(CGhoul *this_ptr,int layer_flag)

{
  if ((this_ptr->spasm_count == 0) && (this_ptr->lives_left < 1)) {
    core_enemy_cpp_CEnemy_renderBackground_FUN_00488940(&this_ptr->base,layer_flag);
    return;
  }
  return;
}
