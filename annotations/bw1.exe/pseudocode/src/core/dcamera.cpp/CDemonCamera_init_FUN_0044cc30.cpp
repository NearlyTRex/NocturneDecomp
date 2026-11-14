// Name: core_dcamera.cpp_CDemonCamera_init_FUN_0044cc30
// Address: 0044cc30
// Address Range: [[0044cc30, 0044cde0]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_init_FUN_0044cc30(CDemonCamera *this_ptr,int screen_height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_init_FUN_0044cc30(CDemonCamera *this_ptr,int screen_height)

{
  int iVar1;
  void *pvVar2;
  
  core_dcamera_cpp_CDemonCamera_free_FUN_0044cdf0(this_ptr);
  _DAT_01481e4c = (screen_height * 4) / 3;
  _DAT_01481e50 = screen_height;
  if (0x1e0 < screen_height) {
    screen_height = 0x1e0;
  }
  this_ptr->framebuffer_height = screen_height;
  this_ptr->scale_factor = 1;
  this_ptr->framebuffer_width = (screen_height * 4) / 3;
  this_ptr->display_width = this_ptr->framebuffer_width;
  _DAT_01323d00 = 0;
  iVar1 = this_ptr->display_width;
  this_ptr->display_height = this_ptr->framebuffer_height;
  while (0x140 < iVar1) {
    this_ptr->display_width = this_ptr->display_width / 2;
    _DAT_01323d00 = _DAT_01323d00 + 1;
    this_ptr->scale_factor = this_ptr->scale_factor * 2;
    iVar1 = this_ptr->display_width;
    this_ptr->display_height = this_ptr->display_height / 2;
  }
  pvVar2 = malloc
                     (this_ptr->framebuffer_width * this_ptr->framebuffer_height * 4 + 0x1010);
  this_ptr->framebuffer_raw = pvVar2;
  if (pvVar2 == (void *)0x0) {
    _DAT_01d1d400 = "..\\core\\dcamera.cpp";
    _DAT_01d1d404 = 0x24a;
    core_main_c_FUN_005030e0("CDemonCamera::init - Unable to alloc frame buffer");
  }
  pvVar2 = malloc
                     (this_ptr->framebuffer_width * this_ptr->framebuffer_height * 4 + 0x1010);
  this_ptr->zbuffer_raw = pvVar2;
  if (pvVar2 == (void *)0x0) {
    _DAT_01d1d400 = "..\\core\\dcamera.cpp";
    _DAT_01d1d404 = 0x24f;
    core_main_c_FUN_005030e0("CDemonCamera::init - Unable to alloc z buffer");
  }
  this_ptr->framebuffer_aligned = (void *)((int)this_ptr->framebuffer_raw + 0x10U & 0xfffffff0);
  this_ptr->zbuffer_aligned = (void *)((int)this_ptr->zbuffer_raw + 0x10U & 0xfffffff0);
  return;
}
