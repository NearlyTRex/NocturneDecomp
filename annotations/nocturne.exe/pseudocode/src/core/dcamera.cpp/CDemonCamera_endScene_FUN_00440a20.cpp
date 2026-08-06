// Name: core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20
// Address: 00440a20
// Address Range: [[00440a20, 00440b11]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(CDemonCamera *this_ptr,int skip_zbuffer_copy)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(CDemonCamera *this_ptr,int skip_zbuffer_copy)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (this_ptr->scene_open_flag == 0) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 1017;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonCamera::endScene - Scene not open!");
  }
  else {
    this_ptr->scene_open_flag = 0;
  }
  if (INT_02dc9d60 != 0) {
    engine_special_cpp_endScene_FUN_00532360();
  }
  if ((this_ptr->skip_clear_buffer_flag == 0) && (skip_zbuffer_copy == 0)) {
    if (_DAT_01c02594 != 0) {
      engine_special_cpp_masterZBuffer_FUN_00532c70(0);
    }
    iVar3 = 0;
    if (0 < (int)this_ptr->max_distance) {
      do {
        iVar2 = this_ptr->framebuffer_height + iVar3;
        iVar1 = this_ptr->screen_width * iVar3;
        iVar3 = iVar3 + 1;
        _memcpy
                  ((void *)(iVar1 * 4 + (int)this_ptr->zbuffer_aligned),
                   (void *)(*(int *)(&DAT_01bd4260 + iVar2 * 4) + this_ptr->framebuffer_width * 4),
                   this_ptr->screen_width << 2);
      } while (iVar3 < (int)this_ptr->max_distance);
    }
  }
  engine_drender_cpp_CDemonRenderer_popViewport_FUN_00460e70();
  core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_00440270(this_ptr);
  return;
}
