// Name: engine_winfont.cpp_CWinFont_reset_FUN_0058e640
// Address: 0058e640
// Address Range: [[0058e640, 0058e6b5]]
// Convention: __cdecl
// Signature: void __cdecl engine_winfont_cpp_CWinFont_reset_FUN_0058e640(CWinFont *this_ptr)

#include "nocturne.h"

void __cdecl engine_winfont_cpp_CWinFont_reset_FUN_0058e640(CWinFont *this_ptr)

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
