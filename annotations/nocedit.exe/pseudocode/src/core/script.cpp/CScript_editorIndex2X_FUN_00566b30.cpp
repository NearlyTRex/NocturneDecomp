// Name: core_script.cpp_CScript_editorIndex2X_FUN_00566b30
// Address: 00566b30
// Address Range: [[00566b30, 00566bbe]]
// Convention: __cdecl
// Signature: uint __cdecl core_script_cpp_CScript_editorIndex2X_FUN_00566b30 (CScript *this_ptr,int line_number,uint buffer_index)

#include "nocturne.h"

uint __cdecl
core_script_cpp_CScript_editorIndex2X_FUN_00566b30
          (CScript *this_ptr,int line_number,uint buffer_index)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  
  if (line_number < 0) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x1bde;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::editorIndex2X - invalid y");
  }
  iVar1 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
  if (line_number < iVar1) {
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       (&this_ptr->script_text,line_number);
    iVar1 = 0;
    uVar3 = 0;
    if (0 < (int)buffer_index) {
      while (*pcVar2 != '\0') {
        if (*pcVar2 == '\t') {
          uVar3 = uVar3 + 8 & 0xfffffff8;
          iVar1 = iVar1 + 1;
          pcVar2 = pcVar2 + 1;
          if ((int)buffer_index <= iVar1) {
            return uVar3;
          }
        }
        else {
          uVar3 = uVar3 + 1;
          iVar1 = iVar1 + 1;
          pcVar2 = pcVar2 + 1;
          if ((int)buffer_index <= iVar1) {
            return uVar3;
          }
        }
      }
      uVar3 = uVar3 + (buffer_index - iVar1);
    }
    return uVar3;
  }
  return buffer_index;
}
