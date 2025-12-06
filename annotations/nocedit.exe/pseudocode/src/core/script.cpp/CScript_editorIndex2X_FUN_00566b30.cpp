// Name: core_script.cpp_CScript_editorIndex2X_FUN_00566b30
// Address: 00566b30
// Address Range: [[00566b30, 00566bbe]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_editorIndex2X_FUN_00566b30()

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_editorIndex2X(CScript* param_1, uint param_2,
   uint param_3) */

uint core_script_cpp_CScript_editorIndex2X_FUN_00566b30(void)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int in_stack_00000008;
  uint in_stack_0000000c;
  
  if (in_stack_00000008 < 0) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x1bde;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::editorIndex2X - invalid y");
  }
  iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)(in_stack_00000008 + 0x38))
  ;
  if (in_stack_00000008 < iVar1) {
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)(in_stack_00000008 + 0x38),in_stack_00000008);
    iVar1 = 0;
    uVar3 = 0;
    if (0 < (int)in_stack_0000000c) {
      while (*pcVar2 != '\0') {
        if (*pcVar2 == '\t') {
          uVar3 = uVar3 + 8 & 0xfffffff8;
          iVar1 = iVar1 + 1;
          pcVar2 = pcVar2 + 1;
          if ((int)in_stack_0000000c <= iVar1) {
            return uVar3;
          }
        }
        else {
          uVar3 = uVar3 + 1;
          iVar1 = iVar1 + 1;
          pcVar2 = pcVar2 + 1;
          if ((int)in_stack_0000000c <= iVar1) {
            return uVar3;
          }
        }
      }
      uVar3 = uVar3 + (in_stack_0000000c - iVar1);
    }
    return uVar3;
  }
  return in_stack_0000000c;
}
