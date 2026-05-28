// Name: core_setedit.cpp_CDemonSet_deleteCamera_FUN_0057e430
// Address: 0057e430
// MANUAL RECONSTRUCTION
// Address Range: [[0057e430, 0057e77b] [00604a83, 00604aa4]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_deleteCamera_FUN_0057e430(CDemonSet *this_ptr,int camera_index)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_deleteCamera_FUN_0057e430(CDemonSet *this_ptr,int camera_index)

{
  int iVar1;
  int light_idx;
  C3DSCamera *local_20;
  C3DSCamera *local_c;
  int local_8;
  
  if ((-1 < camera_index) && (camera_index < this_ptr->camera_count)) {
    iVar1 = this_ptr->camera_count + -1;
    local_8 = camera_index;
    this_ptr->camera_count = iVar1;
    if (camera_index < iVar1) {
      local_c = this_ptr->cameras + camera_index + 1;
      local_20 = this_ptr->cameras + camera_index;
      do {
        *local_20 = *local_c;
        for (light_idx = 0; light_idx < this_ptr->light_count; light_idx = light_idx + 1) {
          this_ptr->lights[light_idx].visible_flags[local_8] =
              this_ptr->lights[light_idx].visible_flags[local_8 + 1];
          this_ptr->lights[light_idx].camera_light_bounds[local_8] =
              this_ptr->lights[light_idx].camera_light_bounds[local_8 + 1];
        }
        local_c = local_c + 1;
        local_20 = local_20 + 1;
        local_8 = local_8 + 1;
      } while (local_8 < this_ptr->camera_count);
    }
    this_ptr->cameras[this_ptr->camera_count].pvs_list = (int *)0x0;
    this_ptr->cameras[this_ptr->camera_count].pvs_count = 0;
  }
  return;
}
