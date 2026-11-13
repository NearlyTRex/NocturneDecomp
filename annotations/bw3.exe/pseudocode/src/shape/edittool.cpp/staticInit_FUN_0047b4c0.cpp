// Name: shape_edittool.cpp_staticInit_FUN_0047b4c0
// Address: 0047b4c0
// Address Range: [[0047b4c0, 0047b4da]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_staticInit_FUN_0047b4c0(void)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_staticInit_FUN_0047b4c0(void)

{
  shape_edittool_cpp_CEditorTools_ctor_FUN_0047c740(&g_CEditorToolsInstance);
  _atexit(&g_CEditorToolsDestructorNode);
  return;
}
