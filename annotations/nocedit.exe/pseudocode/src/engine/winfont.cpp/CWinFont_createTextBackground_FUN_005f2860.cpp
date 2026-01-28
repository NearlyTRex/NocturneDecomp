// Name: engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860
// Address: 005f2860
// Address Range: [[005f2860, 005f2a24]]
// Convention: __cdecl
// Signature: int __cdecl engine_winfont_cpp_CWinFont_createTextBackground_FUN_005f2860 (CWinFont *this_ptr,int width,int height)

#include "nocturne.h"

int __cdecl
engine_winfont_cpp_CWinFont_createTextBackground_FUN_005f2860
          (CWinFont *this_ptr,int width,int height)

{
  int iVar1;
  HDC pHVar2;
  HBITMAP h;
  HBRUSH h_00;
  HGDIOBJ pvVar3;
  BITMAPINFO BStack_48;
  LOGBRUSH LStack_1c;
  
  if (width < 1) {
    width = g_WindowWidth;
  }
  if (height < 1) {
    height = 100;
  }
  if (((this_ptr->device_context_handle == (HDC)0x0 || this_ptr->right < width) ||
      this_ptr->top < height) || this_ptr->bpp != g_BitsPerPixel) {
    engine_winfont_cpp_CWinFont_reset_FUN_005f2a30(this_ptr);
    pHVar2 = (*g_CreateCompatibleDCFunc)((HDC)0x0);
    this_ptr->device_context_handle = pHVar2;
    crt_memory_c_memset_FUN_005fde40(&BStack_48,0,0x2c);
    BStack_48.bmiHeader.biSize = 0x28;
    BStack_48.bmiHeader.biPlanes = 1;
    BStack_48.bmiHeader.biSizeImage = 0;
    BStack_48.bmiHeader.biClrUsed = 0;
    BStack_48.bmiHeader.biHeight = -height;
    BStack_48.bmiHeader.biBitCount = (WORD)g_BitsPerPixel;
    BStack_48.bmiHeader.biCompression = 0;
    BStack_48.bmiHeader.biXPelsPerMeter = 0;
    BStack_48.bmiHeader.biYPelsPerMeter = 0;
    BStack_48.bmiHeader.biClrImportant = 0;
    BStack_48.bmiHeader.biWidth = width;
    h = (*g_CreateDIBSectionFunc)
                  (this_ptr->device_context_handle,&BStack_48,0,&this_ptr->ppv_bits,(HANDLE)0x0,0);
    this_ptr->dib_handle = h;
    iVar1 = 0;
    if (h != (HBITMAP)0x0) {
      (*g_SelectObjectFunc)(this_ptr->device_context_handle,h);
      (*g_SetBkModeFunc)(this_ptr->device_context_handle,2);
      (*g_SetBkColorFunc)(this_ptr->device_context_handle,0xff00ff);
      LStack_1c.lbStyle = 0;
      LStack_1c.lbColor = 0xff00ff;
      LStack_1c.lbHatch = 0;
      h_00 = (*g_CreateBrushIndirectFunc)(&LStack_1c);
      (*g_SelectObjectFunc)(this_ptr->device_context_handle,h_00);
      (*g_RectangleFunc)(this_ptr->device_context_handle,0,-this_ptr->top,this_ptr->right,0);
      (*g_DeleteObjectFunc)(h_00);
      pvVar3 = (*g_SelectObjectFunc)(this_ptr->device_context_handle,this_ptr->font_handle);
      this_ptr->object_handle = pvVar3;
      this_ptr->right = width;
      this_ptr->top = height;
      this_ptr->bpp = g_BitsPerPixel;
      return (uint)(this_ptr->device_context_handle != (HDC)0x0);
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}
