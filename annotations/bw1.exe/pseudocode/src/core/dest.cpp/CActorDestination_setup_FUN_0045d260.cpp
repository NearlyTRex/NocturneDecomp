// Name: core_dest.cpp_CActorDestination_setup_FUN_0045d260
// Address: 0045d260
// Address Range: [[0045d260, 0045d29e]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_CActorDestination_setup_FUN_0045d260(CActorDestination *this_ptr)

#include "nocturne.h"

void __cdecl core_dest_cpp_CActorDestination_setup_FUN_0045d260(CActorDestination *this_ptr)

{
  uint uVar1;
  int iVar2;
  
  core_actor_cpp_FUN_00408850((CDemonActor *)this_ptr);
  iVar2 = 0x01D2C900;
  *(uint *)&this_ptr->field_0xf8 = 0;
  uVar1 = *(uint *)(iVar2 + 0x1008);
  *(uint *)&this_ptr->field_0x184 = 0;
  *(uint *)&this_ptr->field_0x1f0 = 1;
  *(uint *)&this_ptr->field_0xfc = uVar1;
  return;
}
