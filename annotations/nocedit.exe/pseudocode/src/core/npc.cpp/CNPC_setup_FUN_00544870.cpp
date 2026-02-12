// Name: core_npc.cpp_CNPC_setup_FUN_00544870
// Address: 00544870
// Address Range: [[00544870, 005448a7]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_setup_FUN_00544870(CNPC *this_ptr)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_setup_FUN_00544870(CNPC *this_ptr)

{
  int iVar1;
  
  core_charactr_cpp_CCharacter_setup_FUN_00428140(&this_ptr->base);
  iVar1 = stricmp((this_ptr->base).model.model_name,"priest.dfm")
  ;
  if (iVar1 != 0) {
    return;
  }
  (this_ptr->base).collision_layer = 2;
  return;
}
