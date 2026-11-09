// Name: core_dest.cpp_CActorDestination_setup_FUN_00447100
// Address: 00447100
// Address Range: [[00447100, 0044713e]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_CActorDestination_setup_FUN_00447100(CActorDestination *this_ptr)

#include "nocturne.h"

void __cdecl core_dest_cpp_CActorDestination_setup_FUN_00447100(CActorDestination *this_ptr)

{
  uint uVar1;
  int iVar2;
  
  core_actor_cpp_FUN_00408a80((CDemonActor *)this_ptr);
  iVar2 = 0x01D182F0;
  *(uint *)&this_ptr->field_0xf8 = 0;
  uVar1 = *(uint *)(iVar2 + 0x1008);
  *(uint *)&this_ptr->field_0x2e0 = 0;
  *(uint *)&this_ptr->field_0x34c = 1;
  *(uint *)&this_ptr->field_0xfc = uVar1;
  return;
}
