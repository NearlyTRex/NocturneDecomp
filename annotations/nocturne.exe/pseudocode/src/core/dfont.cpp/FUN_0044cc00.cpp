// Name: core_dfont.cpp_FUN_0044cc00
// Address: 0044cc00
// Address Range: [[0044cc00, 0044cd77]]
// Convention: __cdecl
// Signature: void __cdecl core_dfont_cpp_FUN_0044cc00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfont_cpp_FUN_0044cc00(void)

{
  CBitFont *pCVar1;
  
  if (_DAT_014b98f8 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_FUN_0048fe30(_DAT_014b98f8,0);
    FUN_00564494(pCVar1);
  }
  _DAT_014b98f8 = (CBitFont *)0x0;
  if (_DAT_014b98fc != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_FUN_0048fe30(_DAT_014b98fc,0);
    FUN_00564494(pCVar1);
  }
  _DAT_014b98fc = (CBitFont *)0x0;
  if (_DAT_014b9900 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_FUN_0048fe30(_DAT_014b9900,0);
    FUN_00564494(pCVar1);
  }
  _DAT_014b9900 = (CBitFont *)0x0;
  if (_DAT_014b9904 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_FUN_0048fe30(_DAT_014b9904,0);
    FUN_00564494(pCVar1);
  }
  _DAT_014b9904 = (CBitFont *)0x0;
  if (_DAT_014b9908 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_FUN_0048fe30(_DAT_014b9908,0);
    FUN_00564494(pCVar1);
  }
  _DAT_01bcd070 = 0;
  _DAT_014b9908 = (CBitFont *)0x0;
  if (_DAT_014b990c != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_FUN_0048fe30(_DAT_014b990c,0);
    FUN_00564494(pCVar1);
  }
  _DAT_014b990c = (CBitFont *)0x0;
  if (_DAT_01d16810 != 0) {
    if (_DAT_014b9910 != (uint *)0x0) {
      (**(code **)*_DAT_014b9910)(_DAT_014b9910,2);
    }
    _DAT_014b9910 = (uint *)0x0;
    if (_DAT_014b9914 != (uint *)0x0) {
      (**(code **)*_DAT_014b9914)(_DAT_014b9914,2);
    }
    _DAT_014b9914 = (uint *)0x0;
    if (_DAT_014b9918 != (uint *)0x0) {
      (**(code **)*_DAT_014b9918)(_DAT_014b9918,2);
    }
    _DAT_014b9918 = (uint *)0x0;
    if (_DAT_014b991c != (uint *)0x0) {
      (**(code **)*_DAT_014b991c)(_DAT_014b991c,2);
    }
    _DAT_014b991c = (uint *)0x0;
  }
  return;
}
