// Name: shape_edittool.cpp_CPickList_setOkButtonText_FUN_004a3d20
// Address: 004a3d20
// MANUAL RECONSTRUCTION
// Address Range: [[004a3d20, 004a3d8b]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_setOkButtonText_FUN_004a3d20(CPickList *this_ptr,char *text)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_setOkButtonText_FUN_004a3d20(CPickList *this_ptr,char *text)

{
  if (text == (char *)0x0) {
    this_ptr->ok_button_text[0] = '\0';
    return;
  }
  if (99 < strlen(text)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xd78;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::setOkButtonText - too long!");
  }
  strcpy(this_ptr->ok_button_text, text);
  return;
}
