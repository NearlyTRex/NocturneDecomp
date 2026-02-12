// Name: shape_quantize.cpp_CColorQuantizer_dtor_FUN_00554940
// Address: 00554940
// Address Range: [[00554940, 00554a48]]
// Convention: __cdecl
// Signature: CColorQuantizer * __cdecl shape_quantize_cpp_CColorQuantizer_dtor_FUN_00554940(CColorQuantizer *this_ptr,uint flags)

#include "nocturne.h"

CColorQuantizer * __cdecl
shape_quantize_cpp_CColorQuantizer_dtor_FUN_00554940(CColorQuantizer *this_ptr,uint flags)

{
  if (this_ptr->error_buffer_r != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x17f;
    shape_memdbg_cpp_free_FUN_005fe659(this_ptr->error_buffer_r);
  }
  if (this_ptr->error_buffer_g != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x180;
    shape_memdbg_cpp_free_FUN_005fe659(this_ptr->error_buffer_g);
  }
  if (this_ptr->error_buffer_b != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x181;
    shape_memdbg_cpp_free_FUN_005fe659(this_ptr->error_buffer_b);
  }
  if (this_ptr->error_buffer_i != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x182;
    shape_memdbg_cpp_free_FUN_005fe659(this_ptr->error_buffer_i);
  }
  if (this_ptr->flags_buffer != (uchar *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x183;
    shape_memdbg_cpp_free_FUN_005fe659(this_ptr->flags_buffer);
  }
  if (this_ptr->scanline_buffer != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->scanline_buffer,"..\\shape\\quantize.cpp",0x79);
  }
  if (this_ptr->pixel_data == (void *)0x0) {
    return this_ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->pixel_data,"..\\shape\\quantize.cpp",0x79);
  return this_ptr;
}
