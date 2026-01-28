// Name: core_script.cpp_CScript_CalltoScriptEditorX2Index_FUN_00565aa0
// Address: 00565aa0
// Address Range: [[00565aa0, 00565ad3]]
// Convention: unknown
// Signature: void core_script_cpp_CScript_CalltoScriptEditorX2Index_FUN_00565aa0(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_CalltoScriptEditorX2Index(uint param_1,
   uint param_2, uint param_3) */

void core_script_cpp_CScript_CalltoScriptEditorX2Index_FUN_00565aa0(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_0000000c;
  
  if (-1 < in_stack_0000000c) {
    iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (in_stack_0000000c < iVar1) {
      core_script_cpp_CScript_editorX2Index_FUN_00566a90();
      return;
    }
  }
  return;
}
