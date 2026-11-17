// Name: core_dfont.cpp_freeFonts_FUN_0044cc00
// Address: 0044cc00
// Address Range: [[0044cc00, 0044cd77]]
// Convention: __cdecl
// Signature: void __cdecl core_dfont_cpp_freeFonts_FUN_0044cc00(void)

#include "nocturne.h"

void __cdecl core_dfont_cpp_freeFonts_FUN_0044cc00(void)

{
  CBitFont *pCVar1;
  
  if (g_CBitFont_PTR_014b98f8 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_0048fe30(g_CBitFont_PTR_014b98f8,0);
    operator_delete(pCVar1);
  }
  g_CBitFont_PTR_014b98f8 = (CBitFont *)0x0;
  if (g_CBitFont_PTR_014b98fc != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_0048fe30(g_CBitFont_PTR_014b98fc,0);
    operator_delete(pCVar1);
  }
  g_CBitFont_PTR_014b98fc = (CBitFont *)0x0;
  if (g_CBitFont_PTR_014b9900 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_0048fe30(g_CBitFont_PTR_014b9900,0);
    operator_delete(pCVar1);
  }
  g_CBitFont_PTR_014b9900 = (CBitFont *)0x0;
  if (g_CBitFont_PTR_014b9904 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_0048fe30(g_CBitFont_PTR_014b9904,0);
    operator_delete(pCVar1);
  }
  g_CBitFont_PTR_014b9904 = (CBitFont *)0x0;
  if (g_CBitFont_PTR_014b9908 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_0048fe30(g_CBitFont_PTR_014b9908,0);
    operator_delete(pCVar1);
  }
  g_CBitFont_PTR_01bcd070 = (CBitFont *)0x0;
  g_CBitFont_PTR_014b9908 = (CBitFont *)0x0;
  if (g_CBitFont_PTR_014b990c != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_0048fe30(g_CBitFont_PTR_014b990c,0);
    operator_delete(pCVar1);
  }
  g_CBitFont_PTR_014b990c = (CBitFont *)0x0;
  if (g_INT_01d16810 != 0) {
    if (g_CWinFont_PTR_014b9910 != (CWinFont *)0x0) {
      (*((g_CWinFont_PTR_014b9910->base).vtable)->ctor)(&g_CWinFont_PTR_014b9910->base);
    }
    g_CWinFont_PTR_014b9910 = (CWinFont *)0x0;
    if (g_CWinFont_PTR_014b9914 != (CWinFont *)0x0) {
      (*((g_CWinFont_PTR_014b9914->base).vtable)->ctor)(&g_CWinFont_PTR_014b9914->base);
    }
    g_CWinFont_PTR_014b9914 = (CWinFont *)0x0;
    if (g_CWinFont_PTR_014b9918 != (CWinFont *)0x0) {
      (*((g_CWinFont_PTR_014b9918->base).vtable)->ctor)(&g_CWinFont_PTR_014b9918->base);
    }
    g_CWinFont_PTR_014b9918 = (CWinFont *)0x0;
    if (g_CWinFont_PTR_014b991c != (CWinFont *)0x0) {
      (*((g_CWinFont_PTR_014b991c->base).vtable)->ctor)(&g_CWinFont_PTR_014b991c->base);
    }
    g_CWinFont_PTR_014b991c = (CWinFont *)0x0;
  }
  return;
}
