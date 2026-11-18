// Name: core_dfont.cpp_freeFonts_FUN_0045e7a0
// Address: 0045e7a0
// Address Range: [[0045e7a0, 0045e950]]
// Convention: __cdecl
// Signature: void __cdecl core_dfont_cpp_freeFonts_FUN_0045e7a0(void)

#include "nocturne.h"

void __cdecl core_dfont_cpp_freeFonts_FUN_0045e7a0(void)

{
  CBitFont *pCVar1;
  
  if (g_MediumFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004c0b60(g_MediumFont,0);
    debugFreeChecked(pCVar1);
  }
  g_MediumFont = (CBitFont *)0x0;
  if (g_TinyFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004c0b60(g_TinyFont,0);
    debugFreeChecked(pCVar1);
  }
  g_TinyFont = (CBitFont *)0x0;
  if (g_ThemeFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004c0b60(g_ThemeFont,0);
    debugFreeChecked(pCVar1);
  }
  g_ThemeFont = (CBitFont *)0x0;
  if (g_SmallEditorFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004c0b60(g_SmallEditorFont,0);
    debugFreeChecked(pCVar1);
  }
  g_SmallEditorFont = (CBitFont *)0x0;
  if (g_CBitFont_PTR_0152d24c != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004c0b60(g_CBitFont_PTR_0152d24c,0);
    debugFreeChecked(pCVar1);
  }
  g_CBitFont_PTR_01c3eb50 = (CBitFont *)0x0;
  g_CBitFont_PTR_0152d24c = (CBitFont *)0x0;
  if (g_MicroFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004c0b60(g_MicroFont,0);
    debugFreeChecked(pCVar1);
  }
  g_MicroFont = (CBitFont *)0x0;
  if (g_CBitFont_PTR_0152d254 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004c0b60(g_CBitFont_PTR_0152d254,0);
    debugFreeChecked(pCVar1);
  }
  g_CBitFont_PTR_0152d254 = (CBitFont *)0x0;
  if (g_UseOSFonts != 0) {
    if (g_CWinFont_PTR_0152d258 != (CWinFont *)0x0) {
      (*((g_CWinFont_PTR_0152d258->base).vtable)->ctor)(g_CWinFont_PTR_0152d258,2);
    }
    g_CWinFont_PTR_0152d258 = (CWinFont *)0x0;
    if (g_CWinFont_PTR_0152d25c != (CWinFont *)0x0) {
      (*((g_CWinFont_PTR_0152d25c->base).vtable)->ctor)(g_CWinFont_PTR_0152d25c,2);
    }
    g_CWinFont_PTR_0152d25c = (CWinFont *)0x0;
    if (g_CWinFont_PTR_0152d260 != (CWinFont *)0x0) {
      (*((g_CWinFont_PTR_0152d260->base).vtable)->ctor)(g_CWinFont_PTR_0152d260,2);
    }
    g_CWinFont_PTR_0152d260 = (CWinFont *)0x0;
    if (g_CWinFont_PTR_0152d264 != (CWinFont *)0x0) {
      (*((g_CWinFont_PTR_0152d264->base).vtable)->ctor)(g_CWinFont_PTR_0152d264,2);
    }
    g_CWinFont_PTR_0152d264 = (CWinFont *)0x0;
  }
  return;
}
