// Name: core_ghoul.cpp_CGhoul_renderBackground_FUN_004aae00
// Address: 004aae00
// Address Range: [[004aae00, 004aae27]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_renderBackground_FUN_004aae00(CGhoul *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_ghoul_cpp_CGhoul_renderBackground_FUN_004aae00(CGhoul *this_ptr,int layer_flag)

{
  if ((this_ptr->spasm_count == 0) && (this_ptr->lives_left < 1)) {
    core_enemy_cpp_CEnemy_renderBackground_FUN_0047a000(&this_ptr->base,layer_flag);
    return;
  }
  return;
}
