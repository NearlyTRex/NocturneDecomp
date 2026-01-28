// Name: shape_quantize.cpp_CBitmap_dtor_FUN_00556c20
// Address: 00556c20
// Address Range: [[00556c20, 00556ca7]]
// Convention: __cdecl
// Signature: CBitmap * __cdecl shape_quantize_cpp_CBitmap_dtor_FUN_00556c20(CBitmap *this_ptr)

#include "nocturne.h"

CBitmap * __cdecl shape_quantize_cpp_CBitmap_dtor_FUN_00556c20(CBitmap *this_ptr)

{
  if (this_ptr->pixel_data != (void *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x4b6;
    crt_memory_c_free_FUN_005fe659(this_ptr->pixel_data);
  }
  if (this_ptr->row_table != (void **)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x4b7;
    crt_memory_c_free_FUN_005fe659(this_ptr->row_table);
  }
  if (this_ptr->palette == (void *)0x0) {
    return this_ptr;
  }
  g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
  g_CurrentDebugLine = 0x4b8;
  shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr->palette);
  return this_ptr;
}
