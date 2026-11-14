// Name: core_hiram.cpp_CHiram_setup_FUN_004ed290
// Address: 004ed290
// Address Range: [[004ed290, 004ed2ab]]
// Convention: __cdecl
// Signature: void __cdecl core_hiram_cpp_CHiram_setup_FUN_004ed290(CHiram *this_ptr)

#include "nocturne.h"

void __cdecl core_hiram_cpp_CHiram_setup_FUN_004ed290(CHiram *this_ptr)

{
  core_npc_cpp_CNPC_setup_FUN_00531720(&this_ptr->base);
  (this_ptr->base).base.gesture_branch_root = 0;
  return;
}
