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
  int iVar2;
  int iVar3;
  
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
    iVar2 = 0;
    if (0 < this_ptr->framebuffer_height) {
      iVar3 = 0;
      do {
        iVar1 = this_ptr->framebuffer_width * iVar2;
        iVar2 = iVar2 + 1;
        _memcpy
                  ((void *)(iVar1 * 4 + (int)this_ptr->zbuffer_aligned),
                   *(void **)(&DAT_01c60dac + iVar3),this_ptr->framebuffer_width << 2);
        iVar3 = iVar3 + 4;
      } while (iVar2 < this_ptr->framebuffer_height);
    }
  }
  engine_drender_cpp_popViewport_FUN_0046d320();
  core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_00448fd0(this_ptr);
  return;
}
