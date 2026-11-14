// Name: core_dlight.cpp_CDemonLight_endScene_FUN_0044a2d0
// Address: 0044a2d0
// Address Range: [[0044a2d0, 0044a3d1]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_endScene_FUN_0044a2d0(CDemonLight *this_ptr,int restore_viewport_state)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_endScene_FUN_0044a2d0(CDemonLight *this_ptr,int restore_viewport_state)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  CDemonLight *pCVar4;
  ushort uVar5;
  
  if ((this_ptr->base).scene_open_flag == 0) {
    _DAT_01d046a0 = "..\\core\\dlight.cpp";
    _DAT_01d046a4 = 0x165;
    core_main_c_FUN_004e4500("CDemonLight::endScene - Scene not open");
  }
  if ((this_ptr->base).skip_clear_buffer_flag == 0) {
    puVar2 = this_ptr->shadow_depth_buffer;
    uVar5 = 0;
    for (iVar3 = this_ptr->shadow_map_width * this_ptr->shadow_map_height; 0 < iVar3;
        iVar3 = iVar3 + -1) {
      uVar1 = *puVar2;
      if ((uVar1 != 0xffff) && (uVar5 < uVar1)) {
        uVar5 = uVar1;
      }
      puVar2 = puVar2 + 1;
    }
    (this_ptr->base).max_distance = (float)uVar5 * (float)_DAT_005cf35f;
  }
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(DAT_0060b280,0);
  engine_drender_cpp_popViewport_FUN_0046b740();
  iVar3 = 0;
  pCVar4 = this_ptr;
  if (0 < this_ptr->shadow_map_height) {
    do {
      *(void **)(&DAT_01c2a38c + iVar3 * 4) = pCVar4->saved_screen_buffer_rows[0];
      iVar3 = iVar3 + 1;
      pCVar4 = (CDemonLight *)&(pCVar4->base).base.position;
    } while (iVar3 < this_ptr->shadow_map_height);
  }
  core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_0043b7d0(&this_ptr->base);
  (this_ptr->base).scene_open_flag = 0;
  return;
}
