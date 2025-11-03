// Name: core_msnedit.cpp_staticInit_FUN_00535c30
// Address: 00535c30
// Address Range: [[00535c30, 00535c57]]
// Convention: __cdecl
// Signature: void core_msnedit.cpp_staticInit_FUN_00535c30(void)
// Globals:
//   WatcomStaticDestructorNode g_CEdCheckDestructorNode
//   undefined4 DAT_02f7a024
//   CEdCheck g_CEdCheckInstance
// Function calls:
//   core_actor.cpp_FUN_0040e130
//   crt_stdlib.c_atexit_FUN_005ff060
//   shape_edittool.cpp_CEdCheck_ctor_FUN_004a6a00

#include "nocturne.h"

void __cdecl core_msnedit_cpp_staticInit_FUN_00535c30(void)

{
  core_actor_cpp_FUN_0040e130();
  shape_edittool_cpp_CEdCheck_ctor_FUN_004a6a00(&g_CEdCheckInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CEdCheckDestructorNode);
  return;
}


// Assembly code:
// 00535c30: PUSH 0x2f7a024
//   Label: core_msnedit.cpp_staticInit_FUN_00535c30
//   XREF to: 02f7a024 (DATA)
// 00535c35: CALL core_actor.cpp_FUN_0040e130
//   XREF to: 0040e130 (UNCONDITIONAL_CALL)
// 00535c3a: ADD ESP,0x4
// 00535c3d: PUSH 0x2f7c544
//   XREF to: 02f7c544 (DATA)
// 00535c42: CALL shape_edittool.cpp_CEdCheck_ctor_FUN_004a6a00
//   XREF to: 004a6a00 (UNCONDITIONAL_CALL)
// 00535c47: ADD ESP,0x4
// 00535c4a: PUSH 0x6804a0
//   XREF to: 006804a0 (DATA)
// 00535c4f: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00535c54: ADD ESP,0x4
// 00535c57: RET
