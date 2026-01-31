// Name: core_hiram.cpp_CHiram_setup_FUN_004f4530
// Address: 004f4530
// Address Range: [[004f4530, 004f454b]]
// Convention: __cdecl
// Signature: void __cdecl core_hiram_cpp_CHiram_setup_FUN_004f4530(CHiram *this_ptr)

#include "nocturne.h"

void __cdecl core_hiram_cpp_CHiram_setup_FUN_004f4530(CHiram *this_ptr)

{
  CNPC *pCVar1;
  
  core_npc_cpp_CNPC_setup_FUN_00544870(&this_ptr->base);
  pCVar1 = &this_ptr->base;
  (pCVar1->base).unk2[0x24] = '\0';
  (pCVar1->base).unk2[0x25] = '\0';
  (pCVar1->base).unk2[0x26] = '\0';
  (pCVar1->base).unk2[0x27] = '\0';
  return;
}
