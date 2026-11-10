// Name: core_dcamera.cpp_CDemonCamera_endScene_FUN_00449750
// Address: 00449750
// Address Range: [[00449750, 00449831]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_endScene_FUN_00449750(CDemonCamera *this_ptr,int skip_zbuffer_copy)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_endScene_FUN_00449750(CDemonCamera *this_ptr,int skip_zbuffer_copy)

{
  int iVar1;
  
  if (this_ptr->scene_open_flag == 0) {
    _DAT_01d71de0 = "..\\core\\dcamera.cpp";
    _DAT_01d71de4 = 0x3f2;
    core_main_c_FUN_004e4330("CDemonCamera::endScene - Scene not open!");
  }
  else {
    this_ptr->scene_open_flag = 0;
  }
  if (_DAT_02cf5fcc != 0) {
    engine_special_cpp_FUN_005658d0();
  }
  if ((this_ptr->skip_clear_buffer_flag == 0) && (skip_zbuffer_copy == 0)) {
    if (_DAT_01c6cee8 != 0) {
      engine_special_cpp_masterZBuffer_FUN_00566350(0);
    }
    iVar1 = 0;
    if (0 < this_ptr->framebuffer_height) {
      do {
        iVar1 = iVar1 + 1;
        _memcpy(this_ptr->framebuffer_width << 2);
      } while (iVar1 < this_ptr->framebuffer_height);
    }
  }
  engine_matrix_c_popViewport_FUN_0046d320();
  core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_00448fd0(this_ptr);
  return;
}
