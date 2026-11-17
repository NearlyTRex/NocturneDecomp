// Name: core_dfont.cpp_freeFonts_FUN_0045a8d0
// Address: 0045a8d0
// Address Range: [[0045a8d0, 0045aac9]]
// Convention: __cdecl
// Signature: void __cdecl core_dfont_cpp_freeFonts_FUN_0045a8d0(void)

#include "nocturne.h"

void __cdecl core_dfont_cpp_freeFonts_FUN_0045a8d0(void)

{
  CBitFont *pCVar1;
  
  if (g_CBitFont_PTR_01549aa0 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004af7b0(g_CBitFont_PTR_01549aa0,0);
    debugFreeChecked(pCVar1);
  }
  g_CBitFont_PTR_01549aa0 = (CBitFont *)0x0;
  if (g_CBitFont_PTR_01549aa4 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004af7b0(g_CBitFont_PTR_01549aa4,0);
    debugFreeChecked(pCVar1);
  }
  g_CBitFont_PTR_01549aa4 = (CBitFont *)0x0;
  if (g_CBitFont_PTR_01549aa8 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004af7b0(g_CBitFont_PTR_01549aa8,0);
    debugFreeChecked(pCVar1);
  }
  g_CBitFont_PTR_01549aa8 = (CBitFont *)0x0;
  if (g_CBitFont_PTR_01549aac != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004af7b0(g_CBitFont_PTR_01549aac,0);
    debugFreeChecked(pCVar1);
  }
  g_CBitFont_PTR_01549aac = (CBitFont *)0x0;
  if (g_CBitFont_PTR_01549ab0 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004af7b0(g_CBitFont_PTR_01549ab0,0);
    debugFreeChecked(pCVar1);
  }
  g_CBitFont_PTR_01549ab0 = (CBitFont *)0x0;
  if (g_CBitFont_PTR_01549ab4 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004af7b0(g_CBitFont_PTR_01549ab4,0);
    debugFreeChecked(pCVar1);
  }
  g_CBitFont_PTR_01549ab4 = (CBitFont *)0x0;
  if (g_CBitFont_PTR_01549ab8 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004af7b0(g_CBitFont_PTR_01549ab8,0);
    debugFreeChecked(pCVar1);
  }
  g_CBitFont_PTR_01c5b0e0 = (CBitFont *)0x0;
  g_CBitFont_PTR_01549ab8 = (CBitFont *)0x0;
  if (g_CBitFont_PTR_01549abc != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004af7b0(g_CBitFont_PTR_01549abc,0);
    debugFreeChecked(pCVar1);
  }
  g_CBitFont_PTR_01549abc = (CBitFont *)0x0;
  if (g_CBitFont_PTR_01549ac0 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004af7b0(g_CBitFont_PTR_01549ac0,0);
    debugFreeChecked(pCVar1);
  }
  g_CBitFont_PTR_01549ac0 = (CBitFont *)0x0;
  if (g_INT_01dd4890 != 0) {
    if (g_CWinFont_PTR_01549ac4 != (CWinFont *)0x0) {
      (*((g_CWinFont_PTR_01549ac4->base).vtable)->ctor)(g_CWinFont_PTR_01549ac4,2);
    }
    g_CWinFont_PTR_01549ac4 = (CWinFont *)0x0;
    if (g_CWinFont_PTR_01549ac8 != (CWinFont *)0x0) {
      (*((g_CWinFont_PTR_01549ac8->base).vtable)->ctor)(g_CWinFont_PTR_01549ac8,2);
    }
    g_CWinFont_PTR_01549ac8 = (CWinFont *)0x0;
    if (g_CWinFont_PTR_01549acc != (CWinFont *)0x0) {
      (*((g_CWinFont_PTR_01549acc->base).vtable)->ctor)(g_CWinFont_PTR_01549acc,2);
    }
    g_CWinFont_PTR_01549acc = (CWinFont *)0x0;
    if (g_CWinFont_PTR_01549ad0 != (CWinFont *)0x0) {
      (*((g_CWinFont_PTR_01549ad0->base).vtable)->ctor)(g_CWinFont_PTR_01549ad0,2);
    }
    g_CWinFont_PTR_01549ad0 = (CWinFont *)0x0;
  }
  return;
}
