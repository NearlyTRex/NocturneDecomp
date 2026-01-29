// Name: shape_quantize.cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500
// Address: 00555500
// Address Range: [[00555500, 005556e7]]
// Convention: __cdecl
// Signature: int __cdecl shape_quantize_cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500 (CColorQuantizer *this_ptr,int num_entries)

#include "nocturne.h"

int __cdecl
shape_quantize_cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500
          (CColorQuantizer *this_ptr,int num_entries)

{
  ulong count;
  float *pfVar1;
  uchar *puVar2;
  
  this_ptr->current_g = 0.0;
  this_ptr->current_b = 0.0;
  this_ptr->current_i = 0.0;
  this_ptr->current_r = 0.0;
  if (this_ptr->error_buffer_r != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x287;
    shape_memdbg_cpp_free_FUN_005fe659(this_ptr->error_buffer_r);
  }
  if (this_ptr->error_buffer_g != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x288;
    shape_memdbg_cpp_free_FUN_005fe659(this_ptr->error_buffer_g);
  }
  if (this_ptr->error_buffer_b != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x289;
    shape_memdbg_cpp_free_FUN_005fe659(this_ptr->error_buffer_b);
  }
  if (this_ptr->error_buffer_i != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x28a;
    shape_memdbg_cpp_free_FUN_005fe659(this_ptr->error_buffer_i);
  }
  if (this_ptr->flags_buffer != (uchar *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x28b;
    shape_memdbg_cpp_free_FUN_005fe659(this_ptr->flags_buffer);
  }
  count = num_entries * 8;
  pfVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0(count,"..\\shape\\quantize.cpp",0x28d);
  this_ptr->error_buffer_r = pfVar1;
  if (pfVar1 != (float *)0x0) {
    pfVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0(count,"..\\shape\\quantize.cpp",0x290);
    this_ptr->error_buffer_g = pfVar1;
    if (pfVar1 != (float *)0x0) {
      pfVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0(count,"..\\shape\\quantize.cpp",0x293);
      this_ptr->error_buffer_b = pfVar1;
      if (pfVar1 != (float *)0x0) {
        pfVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0(count,"..\\shape\\quantize.cpp",0x296)
        ;
        this_ptr->error_buffer_i = pfVar1;
        if (pfVar1 != (float *)0x0) {
          puVar2 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                             (num_entries,"..\\shape\\quantize.cpp",0x299);
          this_ptr->flags_buffer = puVar2;
          if (puVar2 != (uchar *)0x0) {
            memset(this_ptr->error_buffer_r,0,count);
            memset(this_ptr->error_buffer_g,0,count);
            memset(this_ptr->error_buffer_b,0,count);
            memset(this_ptr->error_buffer_i,0,count);
            memset(this_ptr->flags_buffer,0,num_entries);
            this_ptr->serpentine_toggle = 0;
            this_ptr->status = -1;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
