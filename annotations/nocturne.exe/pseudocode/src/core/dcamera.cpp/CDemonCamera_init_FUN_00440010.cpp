// Name: core_dcamera.cpp_CDemonCamera_init_FUN_00440010
// Address: 00440010
// Address Range: [[00440010, 004401a6]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_init_FUN_00440010(CDemonCamera *this_ptr,int screen_height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_init_FUN_00440010(CDemonCamera *this_ptr,int screen_height)

{
  int iVar1;
  void *pvVar2;
  
  core_dcamera_cpp_CDemonCamera_free_FUN_004401d0(this_ptr);
  if (0x1e0 < screen_height) {
    screen_height = 0x1e0;
  }
  this_ptr->max_distance = (float)screen_height;
  this_ptr->scale_factor = 1;
  this_ptr->screen_width = (screen_height * 4) / 3;
  this_ptr->display_width = this_ptr->screen_width;
  _DAT_012b0660 = 0;
  iVar1 = this_ptr->display_width;
  this_ptr->display_height = (int)this_ptr->max_distance;
  while (0x140 < iVar1) {
    this_ptr->display_width = this_ptr->display_width / 2;
    _DAT_012b0660 = _DAT_012b0660 + 1;
    this_ptr->display_height = this_ptr->display_height / 2;
    iVar1 = this_ptr->display_width;
    this_ptr->scale_factor = this_ptr->scale_factor * 2;
  }
  pvVar2 = malloc
                     (this_ptr->screen_width * (int)this_ptr->max_distance * 4 + 0x1010);
  this_ptr->framebuffer_raw = pvVar2;
  if (pvVar2 == (void *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\dcamera.cpp";
    g_INT_01cc4804 = 0x248;
    core_main_c_FUN_004c8440("CDemonCamera::init - Unable to alloc frame buffer");
  }
  pvVar2 = malloc
                     (this_ptr->screen_width * (int)this_ptr->max_distance * 4 + 0x1010);
  this_ptr->zbuffer_raw = pvVar2;
  if (pvVar2 == (void *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\dcamera.cpp";
    g_INT_01cc4804 = 0x24d;
    core_main_c_FUN_004c8440("CDemonCamera::init - Unable to alloc z buffer");
  }
  this_ptr->framebuffer_aligned = (void *)((int)this_ptr->framebuffer_raw + 0x10U & 0xfffffff0);
  this_ptr->zbuffer_aligned = (void *)((int)this_ptr->zbuffer_raw + 0x10U & 0xfffffff0);
  return;
}
