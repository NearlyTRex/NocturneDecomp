// Name: core_npc.cpp_CNPC_FUN_00544870
// Address: 00544870
// Address Range: [[00544870, 005448a7]]
// Convention: __cdecl
// Signature: void core_npc.cpp_CNPC_FUN_00544870(CNPC * this_ptr)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_FUN_00544870(CNPC *this_ptr)

{
  int iVar1;
  
  core_charactr_cpp_CCharacter_FUN_00428140(&this_ptr->base);
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0((this_ptr->base).model.model_name,"priest.dfm")
  ;
  if (iVar1 != 0) {
    return;
  }
  (this_ptr->base).unk2[0x70] = '\x02';
  (this_ptr->base).unk2[0x71] = '\0';
  (this_ptr->base).unk2[0x72] = '\0';
  (this_ptr->base).unk2[0x73] = '\0';
  return;
}
