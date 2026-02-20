// Name: engine_palette.cpp_CPaletteManager_dtor_FUN_00544f80
// Address: 00544f80
// Address Range: [[00544f80, 00544fac]]
// Convention: __cdecl
// Signature: CPaletteManager * __cdecl engine_palette_cpp_CPaletteManager_dtor_FUN_00544f80(CPaletteManager *this_ptr,uint flags)

#include "nocturne.h"

CPaletteManager * __cdecl engine_palette_cpp_CPaletteManager_dtor_FUN_00544f80(CPaletteManager *this_ptr,uint flags)

{
  g_CurrentDebugFilename = "..\\engine\\palette.cpp";
  g_CurrentDebugLine = 0x38;
  shape_memdbg_cpp_free_FUN_005fe659(this_ptr->texture_names);
  return this_ptr;
}
