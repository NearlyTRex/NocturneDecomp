// Name: core_script.cpp_FUN_00528d50
// Address: 00528d50
// Address Range: [[00528d50, 00528d98]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_00528d50(CScript *param_1)

#include "nocturne.h"

void core_script_cpp_FUN_00528d50(CScript *param_1)

{
  shape_edittool_cpp_CStrList_clear_FUN_00482010((CStrList *)&param_1->field_0x34);
  core_script_cpp_FUN_00528da0(param_1);
  if (*(int *)&param_1->field_0x24 != 0) {
    FUN_005a3770(*(int *)&param_1->field_0x24);
    *(uint *)&param_1->field_0x24 = 0;
  }
  *(uint *)&param_1->field_0x20 = 0;
  shape_edittool_cpp_FUN_00484f10(&g_ScriptPickList);
  return;
}
