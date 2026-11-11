// Name: shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_0047db40
// Address: 0047db40
// Address Range: [[0047db40, 0047dc37]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_0047db40(CEditorTools *this_ptr,char *message_text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_0047db40(CEditorTools *this_ptr,char *message_text)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = _DAT_01c25590->max_char_width;
  _DAT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(_DAT_01c25590,0x6a);
  iVar1 = DAT_006141b8 / 2;
  if (message_text != (char *)0x0) {
    iVar3 = engine_font_cpp_FUN_004aaf00(_DAT_01c25590,message_text);
    if (iVar1 < iVar3) {
      iVar1 = engine_font_cpp_FUN_004aaf00(_DAT_01c25590,message_text);
    }
  }
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
            (this_ptr,iVar1,_DAT_01c25f7c * 6,message_text,0);
  uVar2 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  iVar1 = (_DAT_01c2559c + -1) * 0x1f8;
  *(uint *)(iVar1 + 0x1c2578c) = uVar2;
  *(uint *)(iVar1 + 0x1c25790) = 0xffffffff;
  shape_edittool_cpp_FUN_0047dc40(this_ptr,0,0x3f800000);
  return;
}
