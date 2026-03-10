// Name: engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0
// Address: 005f22e0
// Address Range: [[005f22e0, 005f238c]]
// Convention: __cdecl
// Signature: CWinFont * __cdecl engine_winfont_cpp_CWinFont_ctor_FUN_005f22e0(CWinFont *this_ptr,char *font_name,int font_height,int y_offset1,int y_offset2)

#include "nocturne.h"

CWinFont * __cdecl engine_winfont_cpp_CWinFont_ctor_FUN_005f22e0(CWinFont *this_ptr,char *font_name,int font_height,int y_offset1,int y_offset2)

{
  CWinFont *pCVar1;
  HFONT pHVar2;
  
  pCVar1 = (CWinFont *)engine_palette_cpp_CFont_ctor_FUN_00544eb0(&this_ptr->base);
  (pCVar1->base).vtable = &g_CWinFontVTable;
  pCVar1->device_context_handle = (HDC)0x0;
  pCVar1->font_handle = (HFONT)0x0;
  pCVar1->object_handle = (HGDIOBJ)0x0;
  pCVar1->ppv_bits = (void **)0x0;
  pCVar1->right = 0;
  pCVar1->top = 0;
  pCVar1->bpp = 0;
  pCVar1->cached_foreground_color = 0;
  pCVar1->cached_background_color = 0;
  pHVar2 = (*g_CreateFontAFunc)(-font_height,0,0,0,400,0,0,0,1,0,0,0,0,font_name);
  pCVar1->font_handle = pHVar2;
  pCVar1->y_offset1 = y_offset1;
  pCVar1->y_offset2 = y_offset2;
  return pCVar1;
}
