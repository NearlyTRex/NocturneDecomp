// Name: shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660
// Address: 00471660
// Address Range: [[00471660, 0047175c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660(CEditorTools *this_ptr,char *message_text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660(CEditorTools *this_ptr,char *message_text)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_01bcd070 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 139;
    core_main_c_displayErrorAndQuit_FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = _DAT_01bcd070->max_char_width;
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  iVar1 = g_WindowWidth / 2;
  if (message_text != (char *)0x0) {
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_01bcd070,message_text);
    if (iVar1 < iVar2) {
      iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_01bcd070,message_text);
    }
  }
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80
            (this_ptr,iVar1,_DAT_01bcd9bc * 6,message_text,0);
  iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
  iVar2 = _DAT_01bcd07c + -1;
  *(int *)(iVar2 * 0x1d8 + 0x1bcd24c) = iVar1;
  *(uint *)(iVar2 * 0x1d8 + 0x1bcd250) = 0xffffffff;
  shape_edittool_cpp_CEditorTools_updatePercentage_FUN_00471760(this_ptr,0.0,1.0);
  return;
}
