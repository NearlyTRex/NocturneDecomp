// Name: core_dlight.cpp_CDemonLight_endScene_FUN_00472d30
// Address: 00472d30
// MANUAL RECONSTRUCTION
// Address Range: [[00472d30, 00472e31]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_endScene_FUN_00472d30(CDemonLight *this_ptr,int restore_viewport_state)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_endScene_FUN_00472d30(CDemonLight *this_ptr,int restore_viewport_state)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  ushort uVar5;
  ushort uVar1;
  
  if ((this_ptr->base).scene_open_flag == 0) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 0x164;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonLight::endScene - Scene not open");
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
    (this_ptr->base).max_distance = (float)uVar5 * (float)0.00390625;
  }
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_popViewport_FUN_0048c8c0(g_CDemonRendererPtr2);
  iVar1 = 0;
  if (0 < this_ptr->shadow_map_height) {
    do {
      g_ScreenBufferArray[iVar1] = this_ptr->saved_screen_buffer_rows[iVar1];
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->shadow_map_height);
  }
  core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_0044c410(&this_ptr->base);
  (this_ptr->base).scene_open_flag = 0;
  return;
}
