// Name: core_hiram.cpp_CHiram_setup_FUN_004b6750
// Address: 004b6750
// Address Range: [[004b6750, 004b676b]]
// Convention: __cdecl
// Signature: void __cdecl core_hiram_cpp_CHiram_setup_FUN_004b6750(CHiram *this_ptr)

#include "nocturne.h"

void __cdecl core_hiram_cpp_CHiram_setup_FUN_004b6750(CHiram *this_ptr)

{
  core_npc_cpp_CNPC_setup_FUN_004ee9e0(&this_ptr->base);
  (this_ptr->base).base.gesture_branch_root = 0;
  return;
}
