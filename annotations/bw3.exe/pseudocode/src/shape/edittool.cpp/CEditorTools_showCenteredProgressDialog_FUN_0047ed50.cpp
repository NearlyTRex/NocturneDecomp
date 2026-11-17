// Name: shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_0047ed50
// Address: 0047ed50
// Address Range: [[0047ed50, 0047ee47]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_0047ed50(CEditorTools *this_ptr,char *message_text)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_0047ed50(CEditorTools *this_ptr,char *message_text)

{
  int iVar1;
  int iVar2;
  
  if (g_CBitFont_PTR_01c5b0e0 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\shape\\edittool.cpp";
    g_INT_01d71de4 = 0xa7;
    core_main_c_displayErrorAndQuit_FUN_004e4330("gEdFont must be set by the application.");
  }
  g_INT_01c5bae0 = g_CBitFont_PTR_01c5b0e0->max_char_width;
  g_INT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(g_CBitFont_PTR_01c5b0e0,0x6a)
  ;
  iVar1 = g_INT_005fba18 / 2;
  if (message_text != (char *)0x0) {
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(g_CBitFont_PTR_01c5b0e0,message_text)
    ;
    if (iVar1 < iVar2) {
      iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80
                        (g_CBitFont_PTR_01c5b0e0,message_text);
    }
  }
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047f3e0
            (this_ptr,iVar1,g_INT_01c5bae4 * 6,message_text,0);
  iVar2 = wincore_winrun_cpp_getTime_FUN_005806a0();
  iVar1 = (g_INT_01c5b104 + -1) * 0x1f8;
  *(int *)(iVar1 + 0x1c5b2f4) = iVar2;
  *(uint *)(iVar1 + 0x1c5b2f8) = 0xffffffff;
  shape_edittool_cpp_CEditorTools_updatePercentage_FUN_0047ee50(this_ptr,0.0,1.0);
  return;
}
