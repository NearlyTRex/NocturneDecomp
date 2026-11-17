// Name: core_dfont.cpp_freeFonts_FUN_00448640
// Address: 00448640
// Address Range: [[00448640, 004487f0]]
// Convention: __cdecl
// Signature: void __cdecl core_dfont_cpp_freeFonts_FUN_00448640(void)

#include "nocturne.h"

void __cdecl core_dfont_cpp_freeFonts_FUN_00448640(void)

{
  CBitFont *pCVar1;
  
  if (g_MediumFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004a7b90(g_MediumFont,0);
    debugFreeChecked(pCVar1);
  }
  g_MediumFont = (CBitFont *)0x0;
  if (g_TinyFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004a7b90(g_TinyFont,0);
    debugFreeChecked(pCVar1);
  }
  g_TinyFont = (CBitFont *)0x0;
  if (g_ThemeFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004a7b90(g_ThemeFont,0);
    debugFreeChecked(pCVar1);
  }
  g_ThemeFont = (CBitFont *)0x0;
  if (g_SmallEditorFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004a7b90(g_SmallEditorFont,0);
    debugFreeChecked(pCVar1);
  }
  g_SmallEditorFont = (CBitFont *)0x0;
  if (g_CBitFont_PTR_01511cc8 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004a7b90(g_CBitFont_PTR_01511cc8,0);
    debugFreeChecked(pCVar1);
  }
  g_EditorFont = (CBitFont *)0x0;
  g_CBitFont_PTR_01511cc8 = (CBitFont *)0x0;
  if (g_MicroFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004a7b90(g_MicroFont,0);
    debugFreeChecked(pCVar1);
  }
  g_MicroFont = (CBitFont *)0x0;
  if (g_CBitFont_PTR_01511cd0 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004a7b90(g_CBitFont_PTR_01511cd0,0);
    debugFreeChecked(pCVar1);
  }
  g_CBitFont_PTR_01511cd0 = (CBitFont *)0x0;
  if (g_UseOSFonts != 0) {
    if (g_CWinFont_PTR_01511cd4 != (CWinFont *)0x0) {
      (*((g_CWinFont_PTR_01511cd4->base).vtable)->ctor)(g_CWinFont_PTR_01511cd4,2);
    }
    g_CWinFont_PTR_01511cd4 = (CWinFont *)0x0;
    if (g_CWinFont_PTR_01511cd8 != (CWinFont *)0x0) {
      (*((g_CWinFont_PTR_01511cd8->base).vtable)->ctor)(g_CWinFont_PTR_01511cd8,2);
    }
    g_CWinFont_PTR_01511cd8 = (CWinFont *)0x0;
    if (g_CWinFont_PTR_01511cdc != (CWinFont *)0x0) {
      (*((g_CWinFont_PTR_01511cdc->base).vtable)->ctor)(g_CWinFont_PTR_01511cdc,2);
    }
    g_CWinFont_PTR_01511cdc = (CWinFont *)0x0;
    if (g_CWinFont_PTR_01511ce0 != (CWinFont *)0x0) {
      (*((g_CWinFont_PTR_01511ce0->base).vtable)->ctor)(g_CWinFont_PTR_01511ce0,2);
    }
    g_CWinFont_PTR_01511ce0 = (CWinFont *)0x0;
  }
  return;
}
