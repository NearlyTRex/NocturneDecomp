// Name: core_zombie.cpp_FUN_0058be30
// Address: 0058be30
// Address Range: [[0058be30, 0058be68]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_FUN_0058be30(CZombie *this_ptr)

#include "nocturne.h"

void __cdecl core_zombie_cpp_FUN_0058be30(CZombie *this_ptr)

{
  *(uint *)&this_ptr->field_0xd064 = 0;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,0,0);
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,1,0);
  return;
}
