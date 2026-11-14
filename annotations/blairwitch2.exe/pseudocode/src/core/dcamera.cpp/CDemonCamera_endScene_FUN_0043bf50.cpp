// Name: core_dcamera.cpp_CDemonCamera_endScene_FUN_0043bf50
// Address: 0043bf50
// Address Range: [[0043bf50, 0043c031]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_endScene_FUN_0043bf50(CDemonCamera *this_ptr,int skip_zbuffer_copy)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_endScene_FUN_0043bf50(CDemonCamera *this_ptr,int skip_zbuffer_copy)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (this_ptr->scene_open_flag == 0) {
    _DAT_01d046a0 = "..\\core\\dcamera.cpp";
    _DAT_01d046a4 = 0x3ee;
    core_main_c_FUN_004e4500("CDemonCamera::endScene - Scene not open!");
  }
  else {
    this_ptr->scene_open_flag = 0;
  }
  if (_DAT_0264bba0 != 0) {
    engine_special_cpp_FUN_0055f5b0();
  }
  if ((this_ptr->skip_clear_buffer_flag == 0) && (skip_zbuffer_copy == 0)) {
    if (_DAT_01c37788 != 0) {
      engine_special_cpp_masterZBuffer_FUN_00560030(0);
    }
    iVar2 = 0;
    if (0 < this_ptr->framebuffer_height) {
      iVar3 = 0;
      do {
        iVar1 = this_ptr->framebuffer_width * iVar2;
        iVar2 = iVar2 + 1;
        _memcpy
                  ((void *)(iVar1 * 4 + (int)this_ptr->zbuffer_aligned),
                   *(void **)(&DAT_01c2b64c + iVar3),this_ptr->framebuffer_width << 2);
        iVar3 = iVar3 + 4;
      } while (iVar2 < this_ptr->framebuffer_height);
    }
  }
  engine_drender_cpp_popViewport_FUN_0046b740();
  core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_0043b7d0(this_ptr);
  return;
}
