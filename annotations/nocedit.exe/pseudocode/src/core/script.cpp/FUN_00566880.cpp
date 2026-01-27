// Name: core_script.cpp_FUN_00566880
// Address: 00566880
// Address Range: [[00566880, 00566906]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00566880()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00566880(uint param_1) */

void core_script_cpp_FUN_00566880(void)

{
  core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
  if (CEdScrollBar_0310fcd8.scroll_position + CEdScrollBar_0310fcd8.max_value <= DAT_0310fd48) {
    DAT_0310fd48 = CEdScrollBar_0310fcd8.scroll_position + CEdScrollBar_0310fcd8.max_value + -1;
  }
  if (DAT_0310fd48 < CEdScrollBar_0310fcd8.scroll_position) {
    DAT_0310fd48 = CEdScrollBar_0310fcd8.scroll_position;
  }
  if (CEdScrollBar_0310fd0c.scroll_position + CEdScrollBar_0310fd0c.max_value <= DAT_0310fd44) {
    DAT_0310fd44 = CEdScrollBar_0310fd0c.scroll_position + CEdScrollBar_0310fd0c.max_value + -1;
  }
  if (DAT_0310fd44 < CEdScrollBar_0310fd0c.scroll_position) {
    DAT_0310fd44 = CEdScrollBar_0310fd0c.scroll_position;
  }
  core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
  return;
}
