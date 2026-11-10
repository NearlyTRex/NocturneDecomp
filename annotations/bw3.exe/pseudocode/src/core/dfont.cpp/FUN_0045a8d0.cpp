// Name: core_dfont.cpp_FUN_0045a8d0
// Address: 0045a8d0
// Address Range: [[0045a8d0, 0045aac9]]
// Convention: __cdecl
// Signature: void __cdecl core_dfont_cpp_FUN_0045a8d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfont_cpp_FUN_0045a8d0(void)

{
  CBitFont *pCVar1;
  
  if (_DAT_01549aa0 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004af7b0(_DAT_01549aa0,0);
    FUN_005a30c4(pCVar1);
  }
  _DAT_01549aa0 = (CBitFont *)0x0;
  if (_DAT_01549aa4 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004af7b0(_DAT_01549aa4,0);
    FUN_005a30c4(pCVar1);
  }
  _DAT_01549aa4 = (CBitFont *)0x0;
  if (_DAT_01549aa8 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004af7b0(_DAT_01549aa8,0);
    FUN_005a30c4(pCVar1);
  }
  _DAT_01549aa8 = (CBitFont *)0x0;
  if (_DAT_01549aac != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004af7b0(_DAT_01549aac,0);
    FUN_005a30c4(pCVar1);
  }
  _DAT_01549aac = (CBitFont *)0x0;
  if (_DAT_01549ab0 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004af7b0(_DAT_01549ab0,0);
    FUN_005a30c4(pCVar1);
  }
  _DAT_01549ab0 = (CBitFont *)0x0;
  if (_DAT_01549ab4 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004af7b0(_DAT_01549ab4,0);
    FUN_005a30c4(pCVar1);
  }
  _DAT_01549ab4 = (CBitFont *)0x0;
  if (_DAT_01549ab8 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004af7b0(_DAT_01549ab8,0);
    FUN_005a30c4(pCVar1);
  }
  _DAT_01c5b0e0 = 0;
  _DAT_01549ab8 = (CBitFont *)0x0;
  if (_DAT_01549abc != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004af7b0(_DAT_01549abc,0);
    FUN_005a30c4(pCVar1);
  }
  _DAT_01549abc = (CBitFont *)0x0;
  if (_DAT_01549ac0 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004af7b0(_DAT_01549ac0,0);
    FUN_005a30c4(pCVar1);
  }
  _DAT_01549ac0 = (CBitFont *)0x0;
  if (_DAT_01dd4890 != 0) {
    if (_DAT_01549ac4 != 0) {
      (*(code *)**(uint **)(_DAT_01549ac4 + 0x6a44))(_DAT_01549ac4,2);
    }
    _DAT_01549ac4 = 0;
    if (_DAT_01549ac8 != 0) {
      (*(code *)**(uint **)(_DAT_01549ac8 + 0x6a44))(_DAT_01549ac8,2);
    }
    _DAT_01549ac8 = 0;
    if (_DAT_01549acc != 0) {
      (*(code *)**(uint **)(_DAT_01549acc + 0x6a44))(_DAT_01549acc,2);
    }
    _DAT_01549acc = 0;
    if (_DAT_01549ad0 != 0) {
      (*(code *)**(uint **)(_DAT_01549ad0 + 0x6a44))(_DAT_01549ad0,2);
    }
    _DAT_01549ad0 = 0;
  }
  return;
}
