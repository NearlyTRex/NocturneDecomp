// Name: core_script.cpp_staticInit_FUN_005430c0
// Address: 005430c0
// Address Range: [[005430c0, 005430f4]]
// Convention: unknown
// Signature: void core_script_cpp_staticInit_FUN_005430c0(void)

#include "nocturne.h"

void core_script_cpp_staticInit_FUN_005430c0(void)

{
  shape_edittool_cpp_CPickList_ctor_FUN_0049a620(&g_ScriptPickList);
  _atexit(&WatcomStaticDestructorNode_00622ab0);
  core_script_cpp_CScript_ctor_FUN_005436d0(&g_CScriptInstance);
  _atexit();
  return;
}
