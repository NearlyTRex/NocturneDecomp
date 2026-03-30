// Name: engine_palette.cpp_CPaletteManager_ctor_FUN_00544f10
// Address: 00544f10
// Address Range: [[00544f10, 00544f75]]
// Convention: __cdecl
// Signature: CPaletteManager * __cdecl engine_palette_cpp_CPaletteManager_ctor_FUN_00544f10(CPaletteManager *this_ptr,int max_texture_count,int max_pixel_count)

#include "nocturne.h"

CPaletteManager * __cdecl engine_palette_cpp_CPaletteManager_ctor_FUN_00544f10(CPaletteManager *this_ptr,int max_texture_count,int max_pixel_count)

{
  char *pcVar1;
  
  this_ptr->max_texture_count = max_texture_count;
  this_ptr->max_pixel_count = max_pixel_count;
  pcVar1 = (char *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                     (max_texture_count << 6,"..\\engine\\palette.cpp",0x2b);
  this_ptr->texture_names = pcVar1;
  if (pcVar1 != (char *)0x0) {
    this_ptr->texture_count = 0;
    return this_ptr;
  }
  g_CurrentFilename = "..\\engine\\palette.cpp";
  g_CurrentLineNumber = 0x2c;
  core_main_c_displayErrorAndQuit_FUN_00506f10("The very same person who says not to allocate memory on a constructor did it here.");
  this_ptr->texture_count = 0;
  return this_ptr;
}
