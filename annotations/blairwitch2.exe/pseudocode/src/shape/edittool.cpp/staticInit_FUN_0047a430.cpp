// Name: shape_edittool.cpp_staticInit_FUN_0047a430
// Address: 0047a430
// Address Range: [[0047a430, 0047a44a]]
// Convention: unknown
// Signature: void shape_edittool_cpp_staticInit_FUN_0047a430(void)

#include "nocturne.h"

void shape_edittool_cpp_staticInit_FUN_0047a430(void)

{
  shape_edittool_cpp_CEditorTools_ctor_FUN_0047b660(&g_CEditorToolsInstance);
  _atexit(&g_CEditorToolsDestructorNode);
  return;
}
