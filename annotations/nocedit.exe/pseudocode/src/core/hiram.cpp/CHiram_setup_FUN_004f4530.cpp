// Name: core_hiram.cpp_CHiram_setup_FUN_004f4530
// Address: 004f4530
// Address Range: [[004f4530, 004f454b]]
// Convention: __cdecl
// Signature: void __cdecl core_hiram_cpp_CHiram_setup_FUN_004f4530(CHiram *this_ptr)

#include "nocturne.h"

void __cdecl core_hiram_cpp_CHiram_setup_FUN_004f4530(CHiram *this_ptr)

{
  core_npc_cpp_CNPC_setup_FUN_00544870(&this_ptr->base);
  (this_ptr->base).base.gesture_branch_root = 0;
  return;
}
