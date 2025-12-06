// Name: core_ground.cpp_CGround_init_FUN_004eef00
// Address: 004eef00
// Address Range: [[004eef00, 004eefaa]]
// Convention: __cdecl
// Signature: void core_ground.cpp_CGround_init_FUN_004eef00(CGround * this_ptr)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_init_FUN_004eef00(CGround *this_ptr)

{
  void *pvVar1;
  CTextureList *this_ptr_00;
  
  core_ground_cpp_CGround_free_FUN_004eefb0(this_ptr);
  pvVar1 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (this_ptr->width * this_ptr->height * 4,"..\\core\\ground.cpp",0xd2);
  this_ptr->terrain_data = pvVar1;
  if (pvVar1 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0xd3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CGround::init - Out of memory");
  }
  this_ptr_00 = (CTextureList *)
                shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1a5ec,"..\\core\\ground.cpp",0xd7);
  if (this_ptr_00 != (CTextureList *)0x0) {
    this_ptr_00 = core_texlist_cpp_CTextureList_ctor_FUN_005dbdd0(this_ptr_00);
  }
  this_ptr->texture_list = this_ptr_00;
  if (this_ptr_00 != (CTextureList *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\ground.cpp";
  g_CurrentLineNumber = 0xd8;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CGround::init - Out of memory2");
  return;
}
