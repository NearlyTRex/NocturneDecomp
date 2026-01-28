// Name: core_ground.cpp_CGround_free_FUN_004eefb0
// Address: 004eefb0
// Address Range: [[004eefb0, 004ef020]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_free_FUN_004eefb0(CGround *this_ptr)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_free_FUN_004eefb0(CGround *this_ptr)

{
  CTextureList *ptr;
  
  if (this_ptr->terrain_data != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->terrain_data,"..\\core\\ground.cpp",0xe7);
    this_ptr->terrain_data = (void *)0x0;
  }
  g_CurrentDebugLine = 0xeb;
  g_CurrentDebugFilename = "..\\core\\ground.cpp";
  if (this_ptr->texture_list == (CTextureList *)0x0) {
    this_ptr->texture_list = (CTextureList *)0x0;
    return;
  }
  ptr = core_texlist_cpp_CTextureList_dtor_FUN_005dbdf0(this_ptr->texture_list);
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  this_ptr->texture_list = (CTextureList *)0x0;
  return;
}
