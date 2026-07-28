// Name: engine_winfont.cpp_CWinFont_createTextBackground_FUN_005584d0
// Address: 005584d0
// Address Range: [[005584d0, 00558694]]
// Convention: __cdecl
// Signature: int __cdecl engine_winfont_cpp_CWinFont_createTextBackground_FUN_005584d0(CWinFont *this_ptr,int width,int height)

#include "nocturne.h"

int __cdecl engine_winfont_cpp_CWinFont_createTextBackground_FUN_005584d0(CWinFont *this_ptr,int width,int height)

{
  int iVar1;
  HDC pHVar2;
  HBITMAP h;
  HBRUSH h_00;
  HGDIOBJ pvVar3;
  BITMAPINFO local_48;
  LOGBRUSH local_1c;
  
  if (width < 1) {
    width = DAT_005b761c;
  }
  if (height < 1) {
    height = 100;
  }
  if (((this_ptr->device_context_handle == (HDC)0x0 || this_ptr->right < width) ||
      this_ptr->top < height) || this_ptr->bpp != DAT_005b7624) {
    engine_winfont_cpp_CWinFont_reset_FUN_005586a0(this_ptr);
    pHVar2 = CreateCompatibleDC((HDC)0x0);
    this_ptr->device_context_handle = (HDC)pHVar2;
    memset(&local_48,0,0x2c);
    local_48.bmiHeader.biSize = 0x28;
    local_48.bmiHeader.biPlanes = 1;
    local_48.bmiHeader.biSizeImage = 0;
    local_48.bmiHeader.biClrUsed = 0;
    local_48.bmiHeader.biHeight = -height;
    local_48.bmiHeader.biBitCount = (WORD)DAT_005b7624;
    local_48.bmiHeader.biCompression = 0;
    local_48.bmiHeader.biXPelsPerMeter = 0;
    local_48.bmiHeader.biYPelsPerMeter = 0;
    local_48.bmiHeader.biClrImportant = 0;
    local_48.bmiHeader.biWidth = width;
    h = CreateDIBSection((HDC)this_ptr->device_context_handle,&local_48,0,&this_ptr->ppv_bits,
                         (HANDLE)0x0,0);
    this_ptr->dib_handle = (HBITMAP)h;
    iVar1 = 0;
    if (h != (HBITMAP)0x0) {
      SelectObject((HDC)this_ptr->device_context_handle,h);
      SetBkMode((HDC)this_ptr->device_context_handle,2);
      SetBkColor((HDC)this_ptr->device_context_handle,0xff00ff);
      local_1c.lbStyle = 0;
      local_1c.lbColor = 0xff00ff;
      local_1c.lbHatch = 0;
      h_00 = CreateBrushIndirect(&local_1c);
      SelectObject((HDC)this_ptr->device_context_handle,h_00);
      Rectangle((HDC)this_ptr->device_context_handle,0,-this_ptr->top,this_ptr->right,0);
      DeleteObject(h_00);
      pvVar3 = SelectObject((HDC)this_ptr->device_context_handle,this_ptr->font_handle);
      this_ptr->object_handle = pvVar3;
      this_ptr->right = width;
      this_ptr->top = height;
      this_ptr->bpp = DAT_005b7624;
      return (uint)(this_ptr->device_context_handle != (HDC)0x0);
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}
