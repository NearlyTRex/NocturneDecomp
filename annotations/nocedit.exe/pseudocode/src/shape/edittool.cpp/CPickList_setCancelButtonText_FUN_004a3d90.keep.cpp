// Name: shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90
// Address: 004a3d90
// MANUAL RECONSTRUCTION
// Address Range: [[004a3d90, 004a3e01]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004a3d90(CPickList *this_ptr,char *text)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004a3d90(CPickList *this_ptr,char *text)

{
  if (text == (char *)0x0) {
    this_ptr->cancel_button_text[0] = '\0';
    return;
  }
  if (99 < strlen(text)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 3463;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::setCancelButtonText - too long!");
  }
  strcpy(this_ptr->cancel_button_text, text);
  return;
}
