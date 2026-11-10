// Name: core_spirmine.cpp_CSpiritMine_setup_FUN_005ad4f0
// Address: 005ad4f0
// Address Range: [[005ad4f0, 005ad52a]]
// Convention: __cdecl
// Signature: void __cdecl core_spirmine_cpp_CSpiritMine_setup_FUN_005ad4f0(CSpiritMine *this_ptr)

#include "nocturne.h"

void __cdecl core_spirmine_cpp_CSpiritMine_setup_FUN_005ad4f0(CSpiritMine *this_ptr)

{
  byte *puVar1;
  
  core_boxactor_cpp_CBoxActor_setup_FUN_0041be70((CBoxActor *)this_ptr);
  puVar1 = &this_ptr->field_0x154;
  unkaddr_005a7eb0_cpp_FUN_005a8030(puVar1,0x100);
  unkaddr_005a7eb0_cpp_FUN_005a8050(puVar1,this_ptr);
  unkaddr_005a7eb0_cpp_FUN_005a80d0(puVar1,0);
  return;
}
