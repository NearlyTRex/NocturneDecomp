// Name: engine_winfont.cpp_CWinFont_reset_FUN_005b2080
// Address: 005b2080
// Address Range: [[005b2080, 005b20f5]]
// Convention: __cdecl
// Signature: void __cdecl engine_winfont_cpp_CWinFont_reset_FUN_005b2080(CWinFont *this_ptr)

#include "nocturne.h"

void __cdecl engine_winfont_cpp_CWinFont_reset_FUN_005b2080(CWinFont *this_ptr)

{
  if (this_ptr->device_context_handle != (HDC)0x0) {
    SelectObject(this_ptr->device_context_handle,this_ptr->object_handle);
    this_ptr->object_handle = (HGDIOBJ)0x0;
    DeleteDC(this_ptr->device_context_handle);
    this_ptr->device_context_handle = (HDC)0x0;
    this_ptr->dib_handle = (HBITMAP)0x0;
    this_ptr->ppv_bits = (void *)0x0;
  }
  this_ptr->bpp = 0;
  this_ptr->top = this_ptr->bpp;
  this_ptr->right = this_ptr->bpp;
  return;
}
