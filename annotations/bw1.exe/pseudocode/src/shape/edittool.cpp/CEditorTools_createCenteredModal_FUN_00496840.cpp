// Name: shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840
// Address: 00496840
// Address Range: [[00496840, 00496912]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00496840(CEditorTools *this_ptr,int min_width,int min_height,char *text_content,uint window_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00496840(CEditorTools *this_ptr,int min_width,int min_height,char *text_content,uint window_flags)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_01c3eb50 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    core_main_c_FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = *(uint *)(_DAT_01c3eb50 + 0x41e8);
  _DAT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(_DAT_01c3eb50,0x6a);
  if (text_content != (char *)0x0) {
    iVar1 = *(int *)(_DAT_01c3eb50 + 0x3668);
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(_DAT_01c3eb50,text_content);
    iVar2 = iVar2 + iVar1 * 2;
    if (min_width < iVar2) {
      min_width = iVar2;
    }
  }
  iVar1 = (DAT_0061b498 - min_width) / 2;
  iVar2 = (DAT_0061b49c - min_height) / 2;
  shape_edittool_cpp_CEditorTools_createModalWindow_FUN_00496920
            (this_ptr,iVar1,iVar2,DAT_0061b498 - iVar1,DAT_0061b49c - iVar2,text_content,
             window_flags);
  return;
}
