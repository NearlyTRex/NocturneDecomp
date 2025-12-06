// Name: engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0
// Address: 005f22e0
// Address Range: [[005f22e0, 005f238c]]
// Convention: __cdecl
// Signature: CWinFont * engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0(CWinFont * this_ptr, char * font_name, int font_height, int font_width)

#include "nocturne.h"

CWinFont * __cdecl
engine_winfont_cpp_CWinFont_ctor_FUN_005f22e0
          (CWinFont *this_ptr,char *font_name,int font_height,int font_width)

{
  CWinFont *pCVar1;
  HFONT pHVar2;
  int in_stack_00000050;
  int in_stack_00000054;
  
  pCVar1 = (CWinFont *)engine_palette_cpp_CFont_ctor_FUN_00544eb0(&this_ptr->base_font);
  (pCVar1->base_font).vtable = &g_CWinFontVTable;
  pCVar1->deviceContextHandle = (HDC)0x0;
  pCVar1->fontHandle = (HFONT)0x0;
  pCVar1->objectHandle = (HGDIOBJ)0x0;
  pCVar1->ppvBits = (void **)0x0;
  pCVar1->right = 0;
  pCVar1->top = 0;
  pCVar1->bpp = 0;
  pCVar1->cached_foreground_color = 0;
  pCVar1->cached_background_color = 0;
  pHVar2 = (*CreateFontA)(-font_width,0,0,0,400,0,0,0,1,0,0,0,0,(LPCSTR)font_height);
  pCVar1->fontHandle = pHVar2;
  pCVar1->yOffset1 = in_stack_00000050;
  pCVar1->yOffset2 = in_stack_00000054;
  return pCVar1;
}
