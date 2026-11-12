// Name: shape_edittool.cpp_staticInit_FUN_00492920
// Address: 00492920
// Address Range: [[00492920, 0049293a]]
// Convention: unknown
// Signature: void shape_edittool_cpp_staticInit_FUN_00492920(void)

#include "nocturne.h"

void shape_edittool_cpp_staticInit_FUN_00492920(void)

{
  shape_edittool_cpp_CEditorTools_ctor_FUN_00493ba0(&g_CEditorToolsInstance);
  _atexit(&g_CEditorToolsDestructorNode);
  return;
}
