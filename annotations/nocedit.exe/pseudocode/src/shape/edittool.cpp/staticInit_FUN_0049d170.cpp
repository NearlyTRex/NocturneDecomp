// Name: shape_edittool.cpp_staticInit_FUN_0049d170
// Address: 0049d170
// Address Range: [[0049d170, 0049d18a]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_staticInit_FUN_0049d170(void)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_staticInit_FUN_0049d170(void)

{
  shape_edittool_cpp_CEditorTools_ctor_FUN_0049df80(&g_CEditorToolsInstance);
  _atexit(&g_CEditorToolsDestructorNode);
  return;
}
