// Name: core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00444e20
// Address: 00444e20
// Address Range: [[00444e20, 00444eeb]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00444e20(CDemonCamera *this_ptr,CDemonLight *light_source)

#include "nocturne.h"

int __cdecl core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00444e20(CDemonCamera *this_ptr,CDemonLight *light_source)

{
  uint *puVar1;
  ushort **ppuVar2;
  int iVar3;
  int iVar4;
  int iStack_1c;
  ushort **ppuStack_18;
  int *piStack_14;
  
  iVar4 = 0;
  iStack_1c = 0;
  if (0 < this_ptr->display_height) {
    ppuStack_18 = light_source->corona_depth_buffer;
    piStack_14 = light_source->corona_visibility_buffers;
    do {
      iVar3 = light_source->left_extent[0];
      puVar1 = (uint *)(piStack_14 + iVar3);
      ppuVar2 = ppuStack_18 + iVar3;
      for (iVar3 = (light_source->right_extent[0] - iVar3) + 1; 0 < iVar3; iVar3 = iVar3 + -1) {
        if ((*puVar1 != 0) && (*puVar1 < (uint)**ppuVar2)) {
          iVar4 = iVar4 + 1;
        }
        puVar1 = puVar1 + 1;
        ppuVar2 = ppuVar2 + 1;
      }
      if (0x300 < iVar4) {
        return 1;
      }
      light_source = (CDemonLight *)&(light_source->base).base.position;
      ppuStack_18 = ppuStack_18 + 0x140;
      piStack_14 = piStack_14 + 0x140;
      iStack_1c = iStack_1c + 1;
    } while (iStack_1c < this_ptr->display_height);
  }
  return 0;
}
