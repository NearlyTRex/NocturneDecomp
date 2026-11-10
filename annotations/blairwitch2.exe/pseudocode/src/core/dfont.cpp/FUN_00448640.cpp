// Name: core_dfont.cpp_FUN_00448640
// Address: 00448640
// Address Range: [[00448640, 004487f0]]
// Convention: __cdecl
// Signature: void __cdecl core_dfont_cpp_FUN_00448640(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfont_cpp_FUN_00448640(void)

{
  CBitFont *pCVar1;
  
  if (_DAT_01511cb8 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004a7b90(_DAT_01511cb8,0);
    FUN_005b7fdc(pCVar1);
  }
  _DAT_01511cb8 = (CBitFont *)0x0;
  if (_DAT_01511cbc != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004a7b90(_DAT_01511cbc,0);
    FUN_005b7fdc(pCVar1);
  }
  _DAT_01511cbc = (CBitFont *)0x0;
  if (_DAT_01511cc0 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004a7b90(_DAT_01511cc0,0);
    FUN_005b7fdc(pCVar1);
  }
  _DAT_01511cc0 = (CBitFont *)0x0;
  if (_DAT_01511cc4 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004a7b90(_DAT_01511cc4,0);
    FUN_005b7fdc(pCVar1);
  }
  _DAT_01511cc4 = (CBitFont *)0x0;
  if (_DAT_01511cc8 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004a7b90(_DAT_01511cc8,0);
    FUN_005b7fdc(pCVar1);
  }
  _DAT_01c25590 = 0;
  _DAT_01511cc8 = (CBitFont *)0x0;
  if (_DAT_01511ccc != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004a7b90(_DAT_01511ccc,0);
    FUN_005b7fdc(pCVar1);
  }
  _DAT_01511ccc = (CBitFont *)0x0;
  if (_DAT_01511cd0 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004a7b90(_DAT_01511cd0,0);
    FUN_005b7fdc(pCVar1);
  }
  _DAT_01511cd0 = (CBitFont *)0x0;
  if (_DAT_01d63250 != 0) {
    if (_DAT_01511cd4 != 0) {
      (*(code *)**(uint **)(_DAT_01511cd4 + 0x6a44))(_DAT_01511cd4,2);
    }
    _DAT_01511cd4 = 0;
    if (_DAT_01511cd8 != 0) {
      (*(code *)**(uint **)(_DAT_01511cd8 + 0x6a44))(_DAT_01511cd8,2);
    }
    _DAT_01511cd8 = 0;
    if (_DAT_01511cdc != 0) {
      (*(code *)**(uint **)(_DAT_01511cdc + 0x6a44))(_DAT_01511cdc,2);
    }
    _DAT_01511cdc = 0;
    if (_DAT_01511ce0 != 0) {
      (*(code *)**(uint **)(_DAT_01511ce0 + 0x6a44))(_DAT_01511ce0,2);
    }
    _DAT_01511ce0 = 0;
  }
  return;
}
