// Name: core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
// Address: 00566910
// Address Range: [[00566910, 0056699e]]
// Convention: unknown
// Signature: void core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_CallingScriptEditorX2_2(uint param_1) */

void core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)(in_stack_00000004 + 0x38))
  ;
  CEdScrollBar_0310fcd8.current_value = iVar1 + 2;
  if (CEdScrollBar_0310fcd8.current_value <= DAT_0310fd48) {
    DAT_0310fd48 = iVar1 + 1;
  }
  if (DAT_0310fd48 < 0) {
    DAT_0310fd48 = 0;
  }
  if (DAT_0310fd44 < 0) {
    DAT_0310fd44 = 0;
  }
  DAT_0310fd44 = core_script_cpp_CScript_editorX2Index_FUN_00566a90();
  DAT_0310fd44 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
  return;
}
