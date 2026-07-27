// Name: core_script.cpp_FUN_004fe500
// Address: 004fe500
// Address Range: [[004fe500, 004fe548]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_004fe500(int param_1)

#include "nocturne.h"

void core_script_cpp_FUN_004fe500(int param_1)

{
  shape_edittool_cpp_CStrList_clear_FUN_00473c50(param_1 + 0x30);
  core_script_cpp_CScript_freeParsedLines_FUN_004fe550(param_1);
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_005638d0(*(int *)(param_1 + 0x20));
    *(uint *)(param_1 + 0x20) = 0;
  }
  *(uint *)(param_1 + 0x1c) = 0;
  shape_edittool_cpp_FUN_00476160(0x1e56c30);
  return;
}
