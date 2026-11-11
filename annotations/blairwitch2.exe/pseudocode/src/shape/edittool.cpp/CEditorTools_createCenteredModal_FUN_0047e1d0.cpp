// Name: shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
// Address: 0047e1d0
// Address Range: [[0047e1d0, 0047e2a2]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047e1d0(CEditorTools *this_ptr,int min_width,int min_height,char *text_content,uint window_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047e1d0(CEditorTools *this_ptr,int min_width,int min_height,char *text_content,uint window_flags)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = _DAT_01c25590->max_char_width;
  _DAT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(_DAT_01c25590,0x6a);
  if (text_content != (char *)0x0) {
    iVar1 = _DAT_01c25590->char_widths[0x20];
    iVar2 = engine_font_cpp_FUN_004aaf00(_DAT_01c25590,text_content);
    iVar2 = iVar2 + iVar1 * 2;
    if (min_width < iVar2) {
      min_width = iVar2;
    }
  }
  iVar1 = (DAT_006141b8 - min_width) / 2;
  iVar2 = (DAT_006141bc - min_height) / 2;
  shape_edittool_cpp_CEditorTools_createModalWindow_FUN_0047e2b0
            (this_ptr,iVar1,iVar2,DAT_006141b8 - iVar1,DAT_006141bc - iVar2,text_content,
             window_flags);
  return;
}
