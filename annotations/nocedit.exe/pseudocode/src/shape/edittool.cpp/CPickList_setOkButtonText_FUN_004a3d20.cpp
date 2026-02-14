// Name: shape_edittool.cpp_CPickList_setOkButtonText_FUN_004a3d20
// Address: 004a3d20
// Address Range: [[004a3d20, 004a3d8b]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_setOkButtonText_FUN_004a3d20(CPickList *this_ptr,char *text)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_setOkButtonText_FUN_004a3d20(CPickList *this_ptr,char *text)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (text == (char *)0x0) {
    this_ptr->ok_button_text[0] = '\0';
    return;
  }
  uVar2 = 0xffffffff;
  pcVar3 = text;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (99 < ~uVar2 - 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xd78;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::setOkButtonText - too long!");
  }
  pcVar3 = this_ptr->ok_button_text;
  do {
    cVar1 = *text;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = text[1];
    text = text + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return;
}
