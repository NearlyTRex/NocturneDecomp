// Name: core_script.cpp_CScript_editorPutLine_FUN_005662a0
// Address: 005662a0
// Address Range: [[005662a0, 00566323]]
// Convention: unknown
// Signature: void core_script_cpp_CScript_editorPutLine_FUN_005662a0(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_editorPutLine(uint param_1, uint
   param_2) */

void core_script_cpp_CScript_editorPutLine_FUN_005662a0(void)

{
  CBitFont *font_ptr;
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (-1 < in_stack_00000008) {
    iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (in_stack_00000008 < iVar1 + 10) goto LAB_005662c2;
  }
  g_CurrentFilename = "..\\core\\script.cpp";
  g_CurrentLineNumber = 0x1a83;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::editorPutLine - invalid line number");
LAB_005662c2:
  font_ptr = (CBitFont *)(in_stack_00000004 + 0x38);
  while( true ) {
    iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(font_ptr);
    if (in_stack_00000008 < iVar1) break;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)font_ptr,&DAT_00643fd5);
  }
  shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120
            ((CStrList *)font_ptr,in_stack_00000008,&DAT_031101c0);
  core_script_cpp_FUN_00566800();
  return;
}
