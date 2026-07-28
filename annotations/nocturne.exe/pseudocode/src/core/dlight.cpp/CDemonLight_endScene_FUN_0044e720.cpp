// Name: core_dlight.cpp_CDemonLight_endScene_FUN_0044e720
// Address: 0044e720
// Address Range: [[0044e720, 0044e821]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_endScene_FUN_0044e720(CDemonLight *this_ptr,int restore_viewport_state)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_endScene_FUN_0044e720(CDemonLight *this_ptr,int restore_viewport_state)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  CDemonLight *pCVar4;
  ushort uVar5;
  
  if ((this_ptr->base).scene_open_flag == 0) {
    PTR_01cc4800 = "..\\core\\dlight.cpp";
    INT_01cc4804 = 0x164;
    core_main_c_FUN_004c8440("CDemonLight::endScene - Scene not open");
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
    *(float *)((this_ptr->base).camera_name + 0xc0) = (float)uVar5 * (float)0.00390625;
  }
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_popViewport_FUN_00460e70(DAT_005ae704);
  iVar3 = 0;
  pCVar4 = this_ptr;
  if (0 < this_ptr->shadow_map_height) {
    do {
      *(void **)(&DAT_01bd2fa0 + iVar3 * 4) = pCVar4->saved_screen_buffer_rows[0];
      iVar3 = iVar3 + 1;
      pCVar4 = (CDemonLight *)&(pCVar4->base).base.position;
    } while (iVar3 < this_ptr->shadow_map_height);
  }
  core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_00440270(&this_ptr->base);
  (this_ptr->base).scene_open_flag = 0;
  return;
}
