// Name: shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450
// Address: 00483450
// Address Range: [[00483450, 0048351d]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

{
  int iVar1;
  int iVar2;
  
  if (g_CBitFont_PTR_01c5b0e0 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 167;
    core_main_c_displayErrorAndQuit_FUN_004e4330("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01c5b0e0->max_char_width;
  g_INT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(g_CBitFont_PTR_01c5b0e0,0x6a)
  ;
  iVar1 = g_InputKeyMask;
  if (0 < (this_ptr->base).item_count) {
    g_InputKeyMask = 0x7f;
    shape_edittool_cpp_CPickList_initializeDialog_FUN_00483520
              (this_ptr,dialog_title,initial_selected_index,window_flags);
    do {
      iVar2 = shape_edittool_cpp_CPickList_handleDialogInput_FUN_00483970(this_ptr);
      shape_edittool_cpp_CPickList_renderDialog_FUN_004843d0(this_ptr);
      wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    } while (iVar2 == -2);
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_0047f970(g_CEditorToolsPtr);
    g_InputKeyMask = iVar1;
    return iVar2;
  }
  return -1;
}
