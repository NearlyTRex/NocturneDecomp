// Name: core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0
// Address: 004735c0
// Address Range: [[004735c0, 004736be]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl
core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0(CDemonLight *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (this_ptr->shadow_bounds_mode != 0) {
    for (iVar6 = 0; iVar6 < this_ptr->shadow_map_height / 2; iVar6 = iVar6 + 1) {
      for (iVar4 = 0; iVar1 = this_ptr->shadow_map_width / 2, iVar4 < iVar1; iVar4 = iVar4 + 1) {
        iVar2 = this_ptr->shadow_map_width * this_ptr->shadow_map_height;
        iVar3 = iVar2 >> 0x1f;
        iVar1 = iVar1 - iVar4;
        iVar5 = this_ptr->shadow_map_height / 2 - iVar6;
        if ((int)((iVar2 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2 <
            iVar1 * iVar1 + iVar5 * iVar5) {
          this_ptr->shadow_depth_buffer[this_ptr->shadow_map_width * iVar6 + iVar4] = 0;
          this_ptr->shadow_depth_buffer
          [this_ptr->shadow_map_width * iVar6 + ((this_ptr->shadow_map_width + -1) - iVar4)] = 0;
          this_ptr->shadow_depth_buffer
          [((this_ptr->shadow_map_width + -1) - iVar4) +
           this_ptr->shadow_map_width * ((this_ptr->shadow_map_height + -1) - iVar6)] = 0;
          this_ptr->shadow_depth_buffer
          [((this_ptr->shadow_map_height + -1) - iVar6) * this_ptr->shadow_map_width + iVar4] = 0;
        }
      }
    }
  }
  return;
}
