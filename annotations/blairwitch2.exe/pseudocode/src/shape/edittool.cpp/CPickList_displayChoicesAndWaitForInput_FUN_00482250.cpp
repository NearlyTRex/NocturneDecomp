// Name: shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250
// Address: 00482250
// Address Range: [[00482250, 0048231d]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

{
  int iVar1;
  int iVar2;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 160;
    core_main_c_displayErrorAndQuit_FUN_004e4500("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_EditorFont->max_char_width;
  g_INT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(g_EditorFont,0x6a);
  iVar1 = g_InputKeyMask;
  if (0 < (this_ptr->base).item_count) {
    g_InputKeyMask = 0x7f;
    shape_edittool_cpp_CPickList_initializeDialog_FUN_00482320
              (this_ptr,dialog_title,initial_selected_index,window_flags);
    do {
      iVar2 = shape_edittool_cpp_CPickList_handleDialogInput_FUN_00482770(this_ptr);
      shape_edittool_cpp_CPickList_renderDialog_FUN_004831d0(this_ptr);
      wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
    } while (iVar2 == -2);
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_0047e760(g_CEditorToolsPtr);
    g_InputKeyMask = iVar1;
    return iVar2;
  }
  return -1;
}
