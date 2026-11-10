// Name: core_dfont.cpp_FUN_0045e7a0
// Address: 0045e7a0
// Address Range: [[0045e7a0, 0045e950]]
// Convention: __cdecl
// Signature: void __cdecl core_dfont_cpp_FUN_0045e7a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfont_cpp_FUN_0045e7a0(void)

{
  CBitFont *pCVar1;
  
  if (_DAT_0152d23c != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004c0b60(_DAT_0152d23c,0);
    FUN_005c0344(pCVar1);
  }
  _DAT_0152d23c = (CBitFont *)0x0;
  if (_DAT_0152d240 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004c0b60(_DAT_0152d240,0);
    FUN_005c0344(pCVar1);
  }
  _DAT_0152d240 = (CBitFont *)0x0;
  if (_DAT_0152d244 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004c0b60(_DAT_0152d244,0);
    FUN_005c0344(pCVar1);
  }
  _DAT_0152d244 = (CBitFont *)0x0;
  if (_DAT_0152d248 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004c0b60(_DAT_0152d248,0);
    FUN_005c0344(pCVar1);
  }
  _DAT_0152d248 = (CBitFont *)0x0;
  if (_DAT_0152d24c != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004c0b60(_DAT_0152d24c,0);
    FUN_005c0344(pCVar1);
  }
  _DAT_01c3eb50 = 0;
  _DAT_0152d24c = (CBitFont *)0x0;
  if (_DAT_0152d250 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004c0b60(_DAT_0152d250,0);
    FUN_005c0344(pCVar1);
  }
  _DAT_0152d250 = (CBitFont *)0x0;
  if (_DAT_0152d254 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004c0b60(_DAT_0152d254,0);
    FUN_005c0344(pCVar1);
  }
  _DAT_0152d254 = (CBitFont *)0x0;
  if (_DAT_01d7f1b8 != 0) {
    if (_DAT_0152d258 != 0) {
      (*(code *)**(uint **)(_DAT_0152d258 + 0x6a44))(_DAT_0152d258,2);
    }
    _DAT_0152d258 = 0;
    if (_DAT_0152d25c != 0) {
      (*(code *)**(uint **)(_DAT_0152d25c + 0x6a44))(_DAT_0152d25c,2);
    }
    _DAT_0152d25c = 0;
    if (_DAT_0152d260 != 0) {
      (*(code *)**(uint **)(_DAT_0152d260 + 0x6a44))(_DAT_0152d260,2);
    }
    _DAT_0152d260 = 0;
    if (_DAT_0152d264 != 0) {
      (*(code *)**(uint **)(_DAT_0152d264 + 0x6a44))(_DAT_0152d264,2);
    }
    _DAT_0152d264 = 0;
  }
  return;
}
