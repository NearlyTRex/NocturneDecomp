// Name: shape_quantize.cpp_CColorQuantizer_reset_FUN_00554d40
// Address: 00554d40
// Address Range: [[00554d40, 00554e6b]]
// Convention: __cdecl
// Signature: CColorQuantizer * __cdecl shape_quantize_cpp_CColorQuantizer_reset_FUN_00554d40(CColorQuantizer *this_ptr)

#include "nocturne.h"

CColorQuantizer * __cdecl
shape_quantize_cpp_CColorQuantizer_reset_FUN_00554d40(CColorQuantizer *this_ptr)

{
  CColorQuantizer_ProgressCallback *pCVar1;
  int iVar2;
  CColorQuantizer *pCVar3;
  
  if (this_ptr->error_buffer_r != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 499;
    shape_memdbg_cpp_free_FUN_005fe659(this_ptr->error_buffer_r);
  }
  if (this_ptr->error_buffer_g != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 500;
    shape_memdbg_cpp_free_FUN_005fe659(this_ptr->error_buffer_g);
  }
  if (this_ptr->error_buffer_b != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x1f5;
    shape_memdbg_cpp_free_FUN_005fe659(this_ptr->error_buffer_b);
  }
  if (this_ptr->error_buffer_i != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x1f6;
    shape_memdbg_cpp_free_FUN_005fe659(this_ptr->error_buffer_i);
  }
  if (this_ptr->flags_buffer != (uchar *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x1f7;
    shape_memdbg_cpp_free_FUN_005fe659(this_ptr->flags_buffer);
  }
  if (this_ptr->scanline_buffer != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->scanline_buffer,"..\\shape\\quantize.cpp",0x79);
  }
  if (this_ptr->pixel_data != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->pixel_data,"..\\shape\\quantize.cpp",0x79)
    ;
  }
  pCVar1 = this_ptr->progress_callback;
  iVar2 = this_ptr->num_colors;
  pCVar3 = memset(this_ptr,0,0x4b44);
  this_ptr->status = -1;
  this_ptr->progress_callback = pCVar1;
  this_ptr->num_colors = iVar2;
  return pCVar3;
}
