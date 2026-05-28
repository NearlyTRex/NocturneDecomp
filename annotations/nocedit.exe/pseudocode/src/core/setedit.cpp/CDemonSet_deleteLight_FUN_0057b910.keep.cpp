// Name: core_setedit.cpp_CDemonSet_deleteLight_FUN_0057b910
// Address: 0057b910
// MANUAL RECONSTRUCTION
// Address Range: [[0057b910, 0057bbac] [00604aa5, 00604acb]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_deleteLight_FUN_0057b910(CDemonSet *this_ptr,int light_index)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_deleteLight_FUN_0057b910(CDemonSet *this_ptr,int light_index)

{
  int local_10;
  C3DSLight *local_c;
  C3DSLight *local_8;
  
  if (-1 < light_index) {
    if (light_index < this_ptr->light_count) {
      local_10 = light_index;
      local_c = this_ptr->lights + light_index;
      local_8 = this_ptr->lights + light_index + 1;
      do {
        *local_c = *local_8;
        local_10 = local_10 + 1;
        local_c = local_c + 1;
        local_8 = local_8 + 1;
      } while (local_10 < this_ptr->light_count);
      this_ptr->light_count = this_ptr->light_count + -1;
    }
  }
  return;
}
