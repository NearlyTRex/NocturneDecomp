// Name: core_script.cpp_FUN_00543740
// Address: 00543740
// Address Range: [[00543740, 00543788]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_00543740(CScript *param_1)

#include "nocturne.h"

void core_script_cpp_FUN_00543740(CScript *param_1)

{
  shape_edittool_cpp_CStrList_clear_FUN_00499470((CStrList *)&param_1->field_0x34);
  core_script_cpp_FUN_00543790(param_1);
  if (*(int *)&param_1->field_0x24 != 0) {
    FUN_005c09f0(*(int *)&param_1->field_0x24);
    *(uint *)&param_1->field_0x24 = 0;
  }
  *(uint *)&param_1->field_0x20 = 0;
  shape_edittool_cpp_FUN_0049c370(&g_ScriptPickList);
  return;
}
