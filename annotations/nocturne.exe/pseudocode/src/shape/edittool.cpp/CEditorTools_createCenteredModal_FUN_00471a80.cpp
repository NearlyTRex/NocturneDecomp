// Name: shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80
// Address: 00471a80
// Address Range: [[00471a80, 00471b48]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80(uint param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_01bcd070 == 0) {
    _DAT_01cc4800 = "?..\\shape\\edittool.cpp" + 1;
    _DAT_01cc4804 = 0x8b;
    FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = *(uint *)(_DAT_01bcd070 + 0x3168);
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  if (param_4 != 0) {
    iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_01bcd070,param_4);
    if (param_2 < iVar1) {
      param_2 = iVar1;
    }
  }
  iVar1 = (DAT_005b761c - param_2) / 2;
  iVar2 = (DAT_005b7620 - param_3) / 2;
  shape_edittool_cpp_CEditorTools_createModalWindow_FUN_00471b50
            (param_1,iVar1,iVar2,DAT_005b761c - iVar1,DAT_005b7620 - iVar2,param_4,param_5);
  return;
}
