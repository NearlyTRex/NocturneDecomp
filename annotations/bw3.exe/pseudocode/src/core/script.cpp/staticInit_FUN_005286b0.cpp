// Name: core_script.cpp_staticInit_FUN_005286b0
// Address: 005286b0
// Address Range: [[005286b0, 005286e4]]
// Convention: unknown
// Signature: void core_script_cpp_staticInit_FUN_005286b0(void)

#include "nocturne.h"

void core_script_cpp_staticInit_FUN_005286b0(void)

{
  shape_edittool_cpp_CPickList_ctor_FUN_004831c0(&g_ScriptPickList);
  _atexit(&WatcomStaticDestructorNode_006039c0);
  core_script_cpp_CScript_ctor_FUN_00528ce0(&g_CScriptInstance);
  _atexit(&WatcomStaticDestructorNode_006039d0);
  return;
}
