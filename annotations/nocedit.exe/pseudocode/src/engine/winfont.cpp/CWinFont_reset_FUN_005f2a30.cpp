// Name: engine_winfont.cpp_CWinFont_reset_FUN_005f2a30
// Address: 005f2a30
// Address Range: [[005f2a30, 005f2a90]]
// Convention: __cdecl
// Signature: void engine_winfont.cpp_CWinFont_reset_FUN_005f2a30(CWinFont * this_ptr)

#include "nocturne.h"

void __cdecl engine_winfont_cpp_CWinFont_reset_FUN_005f2a30(CWinFont *this_ptr)

{
  if (this_ptr->deviceContextHandle != (HDC)0x0) {
    (*g_SelectObjectFunc)(this_ptr->deviceContextHandle,this_ptr->objectHandle);
    this_ptr->objectHandle = (HGDIOBJ)0x0;
    (*g_DeleteDCFunc)(this_ptr->deviceContextHandle);
    this_ptr->deviceContextHandle = (HDC)0x0;
    this_ptr->dibHandle = (HBITMAP)0x0;
    this_ptr->ppvBits = (void **)0x0;
  }
  this_ptr->bpp = 0;
  this_ptr->top = this_ptr->bpp;
  this_ptr->right = this_ptr->bpp;
  return;
}
