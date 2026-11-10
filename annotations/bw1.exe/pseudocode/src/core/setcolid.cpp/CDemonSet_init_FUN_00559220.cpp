// Name: core_setcolid.cpp_CDemonSet_init_FUN_00559220
// Address: 00559220
// Address Range: [[00559220, 0055924c]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_init_FUN_00559220(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_init_FUN_00559220(CDemonSet *this_ptr)

{
  this_ptr->ignore_list_count = 0;
  this_ptr->collision_flag = 0;
  this_ptr->skip_exact_collisions = 0;
  *(uint *)&this_ptr->ray_query = 0;
  return;
}
