// Name: core_script.cpp_staticInit_FUN_00520f90
// Address: 00520f90
// Address Range: [[00520f90, 00520fc4]]
// Convention: unknown
// Signature: void core_script_cpp_staticInit_FUN_00520f90(void)

#include "nocturne.h"

void core_script_cpp_staticInit_FUN_00520f90(void)

{
  shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(&g_ScriptPickList);
  _atexit(&WatcomStaticDestructorNode_0061b440);
  core_script_cpp_CScript_ctor_FUN_005215c0(&g_CScriptInstance);
  _atexit();
  return;
}
