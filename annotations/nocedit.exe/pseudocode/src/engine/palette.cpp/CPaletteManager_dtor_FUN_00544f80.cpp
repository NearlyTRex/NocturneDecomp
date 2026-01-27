// Name: engine_palette.cpp_CPaletteManager_dtor_FUN_00544f80
// Address: 00544f80
// Address Range: [[00544f80, 00544fac]]
// Convention: __cdecl
// Signature: CPaletteManager * engine_palette.cpp_CPaletteManager_dtor_FUN_00544f80(CPaletteManager * this_ptr)

#include "nocturne.h"

CPaletteManager * __cdecl
engine_palette_cpp_CPaletteManager_dtor_FUN_00544f80(CPaletteManager *this_ptr)

{
  g_CurrentDebugFilename = "..\\engine\\palette.cpp";
  g_CurrentDebugLine = 0x38;
  crt_memory_c_free_FUN_005fe659((void *)this_ptr->unk2);
  return this_ptr;
}
