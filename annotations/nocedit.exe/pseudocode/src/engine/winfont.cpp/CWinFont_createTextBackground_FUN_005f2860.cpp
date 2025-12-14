// Name: engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860
// Address: 005f2860
// Address Range: [[005f2860, 005f2a24]]
// Convention: __cdecl
// Signature: int engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860(CWinFont * this_ptr, int width, int height)

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
  BADSPACEBASE *in_ESP;
  uint uStack0000002c;
  ULONG_PTR UStack0000003c;
  DWORD DStack_38;
  int iStack_34;
  int iStack_30;
  WORD WStack_2c;
  WORD WStack_2a;
  DWORD DStack_28;
  
  if (width < 1) {
    width = g_WindowWidth;
  }
  if (height < 1) {
    height = 100;
  }
  if (((this_ptr->deviceContextHandle == (HDC)0x0 || this_ptr->right < width) ||
      this_ptr->top < height) || this_ptr->bpp != g_BitsPerPixel) {
    engine_winfont_cpp_CWinFont_reset_FUN_005f2a30(this_ptr);
    pHVar2 = (*CreateCompatibleDC)((HDC)0x0);
    this_ptr->deviceContextHandle = pHVar2;
    crt_memory_c_memset_FUN_005fde40(&stack0xffffffc4,0,0x2c);
    DStack_38 = 0x28;
    WStack_2c = 1;
    iStack_30 = -height;
    WStack_2a = (WORD)g_BitsPerPixel;
    DStack_28 = 0;
    iStack_34 = width;
    h = (*CreateDIBSection)(this_ptr->deviceContextHandle,(BITMAPINFO *)&DStack_38,0,
                            &this_ptr->ppvBits,(HANDLE)0x0,0);
    this_ptr->dibHandle = h;
    iVar1 = 0;
    if (h != (HBITMAP)0x0) {
      DStack_28 = 0x5f2976;
      (*SelectObject)(this_ptr->deviceContextHandle,h);
      (*SetBkMode)(this_ptr->deviceContextHandle,2);
      (*SetBkColor)(this_ptr->deviceContextHandle,0xff00ff);
      UStack0000003c = 0;
      h_00 = (*CreateBrushIndirect)((LOGBRUSH *)&stack0x00000034);
      (*SelectObject)(this_ptr->deviceContextHandle,h_00);
      (*Rectangle)(this_ptr->deviceContextHandle,0,-this_ptr->top,this_ptr->right,0);
      uStack0000002c = 0x5f29e7;
      (*DeleteObject)(h_00);
      pvVar3 = (*SelectObject)(this_ptr->deviceContextHandle,this_ptr->fontHandle);
      this_ptr->objectHandle = pvVar3;
      this_ptr->right = width;
      this_ptr->top = height;
      this_ptr->bpp = g_BitsPerPixel;
      return (uint)(this_ptr->deviceContextHandle != (HDC)0x0);
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}
