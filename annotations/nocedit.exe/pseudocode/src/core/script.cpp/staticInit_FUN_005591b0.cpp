// Name: core_script.cpp_staticInit_FUN_005591b0
// Address: 005591b0
// Address Range: [[005591b0, 00559218]]
// Convention: unknown
// Signature: undefined core_script.cpp_staticInit_FUN_005591b0()
// Globals:
//   WatcomStaticDestructorNode DAT_00680d10
//   WatcomStaticDestructorNode DAT_00680d20
//   WatcomStaticDestructorNode DAT_00680d30
//   WatcomStaticDestructorNode DAT_00680d40
//   undefined4 DAT_0310f4b0
//   CScript g_CScriptInstance
//   undefined4 DAT_0310fcd8
//   undefined4 DAT_0310fd0c
// Function calls:
//   core_script.cpp_CScript_ctor_FUN_005597f0
//   crt_stdlib.c_atexit_FUN_005ff060
//   shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90

#include "nocturne.h"

void core_script_cpp_staticInit_FUN_005591b0(void)

{
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&DAT_0310f4b0);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_00680d10);
  core_script_cpp_CScript_ctor_FUN_005597f0(&g_CScriptInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_00680d20);
  shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0((CEdScrollBar *)&DAT_0310fcd8);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_00680d30);
  shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0((CEdScrollBar *)&DAT_0310fd0c);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_00680d40);
  return;
}


// Assembly code:
// 005591b0: PUSH 0x310f4b0
//   Label: core_script.cpp_staticInit_FUN_005591b0
//   XREF to: 0310f4b0 (DATA)
// 005591b5: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 005591ba: ADD ESP,0x4
// 005591bd: PUSH 0x680d10
//   XREF to: 00680d10 (DATA)
// 005591c2: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 005591c7: ADD ESP,0x4
// 005591ca: PUSH 0x310f858
//   XREF to: 0310f858 (DATA)
// 005591cf: CALL core_script.cpp_CScript_ctor_FUN_005597f0
//   XREF to: 005597f0 (UNCONDITIONAL_CALL)
// 005591d4: ADD ESP,0x4
// 005591d7: PUSH 0x680d20
//   XREF to: 00680d20 (DATA)
// 005591dc: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 005591e1: ADD ESP,0x4
// 005591e4: PUSH 0x310fcd8
//   XREF to: 0310fcd8 (DATA)
// 005591e9: CALL shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
//   XREF to: 004a5ae0 (UNCONDITIONAL_CALL)
// 005591ee: ADD ESP,0x4
// 005591f1: PUSH 0x680d30
//   XREF to: 00680d30 (DATA)
// 005591f6: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 005591fb: ADD ESP,0x4
// 005591fe: PUSH 0x310fd0c
//   XREF to: 0310fd0c (DATA)
// 00559203: CALL shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
//   XREF to: 004a5ae0 (UNCONDITIONAL_CALL)
// 00559208: ADD ESP,0x4
// 0055920b: PUSH 0x680d40
//   XREF to: 00680d40 (DATA)
// 00559210: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00559215: ADD ESP,0x4
// 00559218: RET
