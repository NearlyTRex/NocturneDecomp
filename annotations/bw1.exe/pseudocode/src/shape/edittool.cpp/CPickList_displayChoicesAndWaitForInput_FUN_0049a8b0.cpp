// Name: shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0
// Address: 0049a8b0
// Address Range: [[0049a8b0, 0049a97d]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

{
  int iVar1;
  int iVar2;
  
  if (g_CBitFont_PTR_01c3eb50 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 164;
    core_main_c_displayErrorAndQuit_FUN_005030e0("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01c3eb50->max_char_width;
  g_INT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(g_CBitFont_PTR_01c3eb50,0x6a)
  ;
  iVar1 = g_InputKeyMask;
  if (0 < (this_ptr->base).item_count) {
    g_InputKeyMask = 0x7f;
    shape_edittool_cpp_CPickList_initializeDialog_FUN_0049a980
              (this_ptr,dialog_title,initial_selected_index,window_flags);
    do {
      iVar2 = shape_edittool_cpp_CPickList_handleDialogInput_FUN_0049add0(this_ptr);
      shape_edittool_cpp_CPickList_renderDialog_FUN_0049b830(this_ptr);
      wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    } while (iVar2 == -2);
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_00496dd0(g_CEditorToolsPtr);
    g_InputKeyMask = iVar1;
    return iVar2;
  }
  return -1;
}
