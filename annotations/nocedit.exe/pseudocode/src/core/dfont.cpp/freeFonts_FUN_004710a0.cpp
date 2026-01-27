// Name: core_dfont.cpp_freeFonts_FUN_004710a0
// Address: 004710a0
// Address Range: [[004710a0, 004712f6]]
// Convention: __cdecl
// Signature: void core_dfont.cpp_freeFonts_FUN_004710a0(void)

#include "nocturne.h"

void __cdecl core_dfont_cpp_freeFonts_FUN_004710a0(void)

{
  CBitFont *pCVar1;
  
  g_CurrentDebugLine = 199;
  g_CurrentDebugFilename = "..\\core\\dfont.cpp";
  if (g_MediumFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004cceb0(g_MediumFont);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  }
  g_CurrentDebugFilename = "..\\core\\dfont.cpp";
  g_CurrentDebugLine = 0xc9;
  g_MediumFont = (CBitFont *)0x0;
  if (g_TinyFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004cceb0(g_TinyFont);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  }
  g_CurrentDebugFilename = "..\\core\\dfont.cpp";
  g_CurrentDebugLine = 0xcb;
  g_TinyFont = (CBitFont *)0x0;
  if (g_ThemeFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004cceb0(g_ThemeFont);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  }
  g_CurrentDebugFilename = "..\\core\\dfont.cpp";
  g_CurrentDebugLine = 0xcd;
  g_ThemeFont = (CBitFont *)0x0;
  if (g_SmallEditorFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004cceb0(g_SmallEditorFont);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  }
  g_CurrentDebugFilename = "..\\core\\dfont.cpp";
  g_CurrentDebugLine = 0xcf;
  g_SmallEditorFont = (CBitFont *)0x0;
  if (g_ConsoleFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004cceb0(g_ConsoleFont);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  }
  g_EditorFont = (CBitFont *)0x0;
  g_CurrentDebugFilename = "..\\core\\dfont.cpp";
  g_CurrentDebugLine = 0xd2;
  g_ConsoleFont = (CBitFont *)0x0;
  if (g_MicroFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004cceb0(g_MicroFont);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  }
  g_MicroFont = (CBitFont *)0x0;
  if (g_MessageCount != 0) {
    g_CurrentDebugLine = 0xd5;
    g_CurrentDebugFilename = "..\\core\\dfont.cpp";
    if (g_MediumWinFont != (CWinFont *)0x0) {
      (*((g_MediumWinFont->base).vtable)->ctor)(&g_MediumWinFont->base);
    }
    g_CurrentDebugFilename = "..\\core\\dfont.cpp";
    g_CurrentDebugLine = 0xd7;
    g_MediumWinFont = (CWinFont *)0x0;
    if (g_TinyWinFont != (CWinFont *)0x0) {
      (*((g_TinyWinFont->base).vtable)->ctor)(&g_TinyWinFont->base);
    }
    g_CurrentDebugFilename = "..\\core\\dfont.cpp";
    g_CurrentDebugLine = 0xd9;
    g_TinyWinFont = (CWinFont *)0x0;
    if (g_ThemeWinFont != (CWinFont *)0x0) {
      (*((g_ThemeWinFont->base).vtable)->ctor)(&g_ThemeWinFont->base);
    }
    g_CurrentDebugFilename = "..\\core\\dfont.cpp";
    g_CurrentDebugLine = 0xdb;
    g_ThemeWinFont = (CWinFont *)0x0;
    if (g_DebugWinFont != (CWinFont *)0x0) {
      (*((g_DebugWinFont->base).vtable)->ctor)(&g_DebugWinFont->base);
    }
    g_DebugWinFont = (CWinFont *)0x0;
  }
  return;
}
