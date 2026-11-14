// Name: core_dcamera.cpp_CDemonCamera_init_FUN_00448d70
// Address: 00448d70
// Address Range: [[00448d70, 00448f20]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_init_FUN_00448d70(CDemonCamera *this_ptr,int screen_height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_init_FUN_00448d70(CDemonCamera *this_ptr,int screen_height)

{
  int iVar1;
  void *pvVar2;
  
  core_dcamera_cpp_CDemonCamera_free_FUN_00448f30(this_ptr);
  _DAT_0149e6fc = (screen_height * 4) / 3;
  _DAT_0149e700 = screen_height;
  if (0x1e0 < screen_height) {
    screen_height = 0x1e0;
  }
  this_ptr->framebuffer_height = screen_height;
  this_ptr->scale_factor = 1;
  this_ptr->framebuffer_width = (screen_height * 4) / 3;
  this_ptr->display_width = this_ptr->framebuffer_width;
  _DAT_013405b0 = 0;
  iVar1 = this_ptr->display_width;
  this_ptr->display_height = this_ptr->framebuffer_height;
  while (0x140 < iVar1) {
    this_ptr->display_width = this_ptr->display_width / 2;
    _DAT_013405b0 = _DAT_013405b0 + 1;
    this_ptr->scale_factor = this_ptr->scale_factor * 2;
    iVar1 = this_ptr->display_width;
    this_ptr->display_height = this_ptr->display_height / 2;
  }
  pvVar2 = malloc
                     (this_ptr->framebuffer_width * this_ptr->framebuffer_height * 4 + 0x1010);
  this_ptr->framebuffer_raw = pvVar2;
  if (pvVar2 == (void *)0x0) {
    _DAT_01d71de0 = "..\\core\\dcamera.cpp";
    _DAT_01d71de4 = 0x24a;
    core_main_c_FUN_004e4330("CDemonCamera::init - Unable to alloc frame buffer");
  }
  pvVar2 = malloc
                     (this_ptr->framebuffer_width * this_ptr->framebuffer_height * 4 + 0x1010);
  this_ptr->zbuffer_raw = pvVar2;
  if (pvVar2 == (void *)0x0) {
    _DAT_01d71de0 = "..\\core\\dcamera.cpp";
    _DAT_01d71de4 = 0x24f;
    core_main_c_FUN_004e4330("CDemonCamera::init - Unable to alloc z buffer");
  }
  this_ptr->framebuffer_aligned = (void *)((int)this_ptr->framebuffer_raw + 0x10U & 0xfffffff0);
  this_ptr->zbuffer_aligned = (void *)((int)this_ptr->zbuffer_raw + 0x10U & 0xfffffff0);
  return;
}
