// Name: core_script.cpp_FUN_00566bc0
// Address: 00566bc0
// Address Range: [[00566bc0, 00566c14]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_00566bc0(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00566bc0(uint param_1) */

void core_script_cpp_FUN_00566bc0(void)

{
  int iVar1;
  
  iVar1 = core_script_cpp_FUN_00566c20();
  if (iVar1 == 0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920
            (g_CEditorToolsPtr,1,DAT_03114208,0);
  return;
}
