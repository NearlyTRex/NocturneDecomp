// Name: core_setcolid.cpp_CDemonSet_init_FUN_00511750
// Address: 00511750
// Address Range: [[00511750, 0051177c]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_init_FUN_00511750(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_init_FUN_00511750(CDemonSet *this_ptr)

{
  this_ptr->ignore_list_count = 0;
  this_ptr->collision_flag = 0;
  this_ptr->skip_exact_collisions = 0;
  (this_ptr->ray_query).ray_type = 0;
  return;
}
