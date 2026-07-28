// Name: core_npc.cpp_CNPC_setup_FUN_004ee9e0
// Address: 004ee9e0
// Address Range: [[004ee9e0, 004eea17]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_setup_FUN_004ee9e0(CNPC *this_ptr)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_setup_FUN_004ee9e0(CNPC *this_ptr)

{
  int iVar1;
  
  core_charactr_cpp_CCharacter_setup_FUN_00424260(&this_ptr->base);
  iVar1 = _stricmp
                    ((this_ptr->base).model.model_name,"priest.dfm");
  if (iVar1 != 0) {
    return;
  }
  (this_ptr->base).blood_type = 2;
  return;
}
