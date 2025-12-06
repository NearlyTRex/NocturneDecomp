// Name: core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0
// Address: 00450fc0
// Address Range: [[00450fc0, 0045108b]]
// Convention: __cdecl
// Signature: int core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0(CDemonCamera * this_ptr, CDemonLight * light_source)

#include "nocturne.h"

int __cdecl
core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0
          (CDemonCamera *this_ptr,CDemonLight *light_source)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int *local_18;
  int *local_14;
  
  iVar4 = 0;
  local_1c = 0;
  if (0 < this_ptr->display_height) {
    local_18 = light_source->corona_depth_buffer;
    local_14 = light_source->corona_visibility_buffers;
    do {
      iVar3 = light_source->left_extent[0];
      puVar1 = (uint *)(local_14 + iVar3);
      piVar2 = local_18 + iVar3;
      for (iVar3 = (light_source->right_extent[0] - iVar3) + 1; 0 < iVar3; iVar3 = iVar3 + -1) {
        if ((*puVar1 != 0) && (*puVar1 < (uint)*(ushort *)*piVar2)) {
          iVar4 = iVar4 + 1;
        }
        puVar1 = puVar1 + 1;
        piVar2 = piVar2 + 1;
      }
      if (0x300 < iVar4) {
        return 1;
      }
      light_source = (CDemonLight *)&(light_source->base).base.position;
      local_18 = local_18 + 0x140;
      local_14 = local_14 + 0x140;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->display_height);
  }
  return 0;
}
