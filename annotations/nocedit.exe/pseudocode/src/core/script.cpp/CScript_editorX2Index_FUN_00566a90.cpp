// Name: core_script.cpp_CScript_editorX2Index_FUN_00566a90
// Address: 00566a90
// Address Range: [[00566a90, 00566b24]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_editorX2Index_FUN_00566a90 (CScript *this_ptr,int line_number,int visual_column)

#include "nocturne.h"

int __cdecl
core_script_cpp_CScript_editorX2Index_FUN_00566a90
          (CScript *this_ptr,int line_number,int visual_column)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  
  if (line_number < 0) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x1bc5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::editorX2Index - invalid y");
  }
  iVar1 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
  if (line_number < iVar1) {
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       (&this_ptr->script_text,line_number);
    iVar1 = 0;
    uVar3 = 0;
    if (0 < visual_column) {
      while (*pcVar2 != '\0') {
        if (*pcVar2 == '\t') {
          uVar3 = uVar3 + 8 & 0xfffffff8;
          pcVar2 = pcVar2 + 1;
          iVar1 = iVar1 + 1;
          if (visual_column <= (int)uVar3) {
            return iVar1;
          }
        }
        else {
          uVar3 = uVar3 + 1;
          pcVar2 = pcVar2 + 1;
          iVar1 = iVar1 + 1;
          if (visual_column <= (int)uVar3) {
            return iVar1;
          }
        }
      }
      iVar1 = iVar1 + (visual_column - uVar3);
    }
    return iVar1;
  }
  return visual_column;
}
