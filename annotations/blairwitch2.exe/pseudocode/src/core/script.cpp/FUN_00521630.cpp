// Name: core_script.cpp_FUN_00521630
// Address: 00521630
// Address Range: [[00521630, 00521678]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_00521630(CScript *param_1)

#include "nocturne.h"

void core_script_cpp_FUN_00521630(CScript *param_1)

{
  shape_edittool_cpp_CStrList_clear_FUN_00480e10((CStrList *)&param_1->field_0x34);
  core_script_cpp_FUN_00521680(param_1);
  if (*(int *)&param_1->field_0x24 != 0) {
    FUN_005b86a0(*(int *)&param_1->field_0x24);
    *(uint *)&param_1->field_0x24 = 0;
  }
  *(uint *)&param_1->field_0x20 = 0;
  shape_edittool_cpp_FUN_00483d10(&g_ScriptPickList);
  return;
}
