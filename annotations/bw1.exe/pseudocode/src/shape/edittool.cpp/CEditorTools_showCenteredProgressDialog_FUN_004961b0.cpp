// Name: shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004961b0
// Address: 004961b0
// Address Range: [[004961b0, 004962a7]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004961b0(CEditorTools *this_ptr,char *message_text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004961b0(CEditorTools *this_ptr,char *message_text)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_01c3eb50 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    core_main_c_FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = _DAT_01c3eb50->max_char_width;
  _DAT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(_DAT_01c3eb50,0x6a);
  iVar1 = DAT_0061b498 / 2;
  if (message_text != (char *)0x0) {
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(_DAT_01c3eb50,message_text);
    if (iVar1 < iVar2) {
      iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(_DAT_01c3eb50,message_text);
    }
  }
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00496840
            (this_ptr,iVar1,_DAT_01c3f53c * 6,message_text,0);
  iVar2 = wincore_winrun_cpp_getTime_FUN_005b2420();
  iVar1 = (_DAT_01c3eb5c + -1) * 0x1f8;
  *(int *)(iVar1 + 0x1c3ed4c) = iVar2;
  *(uint *)(iVar1 + 0x1c3ed50) = 0xffffffff;
  shape_edittool_cpp_FUN_004962b0(this_ptr,0,0x3f800000);
  return;
}
