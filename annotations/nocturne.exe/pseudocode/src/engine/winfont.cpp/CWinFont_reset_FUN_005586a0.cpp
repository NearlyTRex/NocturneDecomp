// Name: engine_winfont.cpp_CWinFont_reset_FUN_005586a0
// Address: 005586a0
// Address Range: [[005586a0, 00558700]]
// Convention: __cdecl
// Signature: void __cdecl engine_winfont_cpp_CWinFont_reset_FUN_005586a0(CWinFont *this_ptr)

#include "nocturne.h"

void __cdecl engine_winfont_cpp_CWinFont_reset_FUN_005586a0(CWinFont *this_ptr)

{
  if ((HDC)this_ptr->device_context_handle != (HDC)0x0) {
    SelectObject((HDC)this_ptr->device_context_handle,this_ptr->object_handle);
    this_ptr->object_handle = (HGDIOBJ)0x0;
    DeleteDC((HDC)this_ptr->device_context_handle);
    this_ptr->device_context_handle = (HDC)0x0;
    this_ptr->dib_handle = (HBITMAP)0x0;
    this_ptr->ppv_bits = (void *)0x0;
  }
  this_ptr->bpp = 0;
  this_ptr->top = this_ptr->bpp;
  this_ptr->right = this_ptr->bpp;
  return;
}
