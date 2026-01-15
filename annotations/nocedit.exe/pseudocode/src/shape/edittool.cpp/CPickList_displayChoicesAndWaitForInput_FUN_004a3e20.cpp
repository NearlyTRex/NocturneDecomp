// Name: shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
// Address: 004a3e20
// Address Range: [[004a3e20, 004a3eed]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
          (CPickList *this_ptr,char *dialog_title,int config_param1,int config_param2)

{
  int iVar1;
  int iVar2;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  iVar1 = g_InputKeyMask;
  if (0 < (this_ptr->base_strlist).item_count) {
    g_InputKeyMask = 0x7f;
    shape_edittool_cpp_CPickList_initializeDialog_FUN_004a3ef0
              (this_ptr,dialog_title,config_param1,config_param2);
    do {
      iVar2 = shape_edittool_cpp_CPickList_handleDialogInput_FUN_004a4340(this_ptr);
      shape_edittool_cpp_CPickList_renderDialog_FUN_004a4d40(this_ptr);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    } while (iVar2 == -2);
    engine_2d_c_clearInputAndWait_FUN_00403260();
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    g_InputKeyMask = iVar1;
    return iVar2;
  }
  return -1;
}
