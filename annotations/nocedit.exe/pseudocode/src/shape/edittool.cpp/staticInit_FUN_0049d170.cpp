// Name: shape_edittool.cpp_staticInit_FUN_0049d170
// Address: 0049d170
// Address Range: [[0049d170, 0049d18a]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_staticInit_FUN_0049d170(void)
// Globals:
//   WatcomStaticDestructorNode g_CEditorToolsDestructorNode
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   crt_stdlib.c_atexit_FUN_005ff060
//   shape_edittool.cpp_CEditorTools_ctor_FUN_0049df80

#include "nocturne.h"

void __cdecl shape_edittool_cpp_staticInit_FUN_0049d170(void)

{
  shape_edittool_cpp_CEditorTools_ctor_FUN_0049df80(&g_CEditorToolsPtr);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CEditorToolsDestructorNode);
  return;
}


// Assembly code:
// 0049d170: PUSH 0x2cf1cd4
//   Label: shape_edittool.cpp_staticInit_FUN_0049d170
//   XREF to: 02cf1cd4 (DATA)
// 0049d175: CALL shape_edittool.cpp_CEditorTools_ctor_FUN_0049df80
//   XREF to: 0049df80 (UNCONDITIONAL_CALL)
// 0049d17a: ADD ESP,0x4
// 0049d17d: PUSH 0x678a50
//   XREF to: 00678a50 (DATA)
// 0049d182: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 0049d187: ADD ESP,0x4
// 0049d18a: RET
