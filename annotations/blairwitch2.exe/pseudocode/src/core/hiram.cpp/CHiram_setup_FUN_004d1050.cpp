// Name: core_hiram.cpp_CHiram_setup_FUN_004d1050
// Address: 004d1050
// Address Range: [[004d1050, 004d106b]]
// Convention: __cdecl
// Signature: void __cdecl core_hiram_cpp_CHiram_setup_FUN_004d1050(CHiram *this_ptr)

#include "nocturne.h"

void __cdecl core_hiram_cpp_CHiram_setup_FUN_004d1050(CHiram *this_ptr)

{
  core_npc_cpp_CNPC_setup_FUN_00510510(&this_ptr->base);
  (this_ptr->base).base.gesture_branch_root = 0;
  return;
}
