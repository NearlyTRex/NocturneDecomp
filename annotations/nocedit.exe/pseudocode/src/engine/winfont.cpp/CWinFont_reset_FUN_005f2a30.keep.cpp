// Name: engine_winfont.cpp_CWinFont_reset_FUN_005f2a30
// Address: 005f2a30
// MANUAL RECONSTRUCTION
// Address Range: [[005f2a30, 005f2a90]]
// Convention: __cdecl
// Signature: void __cdecl engine_winfont_cpp_CWinFont_reset_FUN_005f2a30(CWinFont *this_ptr)

#include "nocturne.h"

void __cdecl engine_winfont_cpp_CWinFont_reset_FUN_005f2a30(CWinFont *this_ptr)

{
  if (this_ptr->device_context_handle != (HDC)0x0) {
    (*g_SelectObjectFunc)(this_ptr->device_context_handle,this_ptr->object_handle);
    this_ptr->object_handle = (HGDIOBJ)0x0;
    (*g_DeleteDCFunc)(this_ptr->device_context_handle);
    this_ptr->device_context_handle = (HDC)0x0;
    this_ptr->dib_handle = (HBITMAP)0x0;
    this_ptr->ppv_bits = (void *)0x0;
  }
  this_ptr->bpp = 0;
  this_ptr->top = 0;
  this_ptr->right = 0;
  return;
}
