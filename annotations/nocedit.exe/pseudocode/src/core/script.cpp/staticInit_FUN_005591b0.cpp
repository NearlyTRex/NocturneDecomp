// Name: core_script.cpp_staticInit_FUN_005591b0
// Address: 005591b0
// Address Range: [[005591b0, 00559218]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_staticInit_FUN_005591b0(void)

#include "nocturne.h"

void __cdecl core_script_cpp_staticInit_FUN_005591b0(void)

{
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&DAT_0310f4b0);
  _atexit(&DAT_00680d10);
  core_script_cpp_CScript_ctor_FUN_005597f0(&g_CScriptInstance);
  _atexit(&DAT_00680d20);
  shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0(&CEdScrollBar_0310fcd8);
  _atexit(&DAT_00680d30);
  shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0(&CEdScrollBar_0310fd0c);
  _atexit(&DAT_00680d40);
  return;
}
