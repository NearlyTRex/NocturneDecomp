// Name: core_setedit.cpp_staticInit_FUN_00576930
// Address: 00576930
// Address Range: [[00576930, 0057694a]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_staticInit_FUN_00576930(void)
// Globals:
//   WatcomStaticDestructorNode DAT_006816a0
//   CPickList CPickList_03653fc0
// Function calls:
//   crt_stdlib.c_atexit_FUN_005ff060
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90

#include "nocturne.h"

void __cdecl core_setedit_cpp_staticInit_FUN_00576930(void)

{
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CPickList_03653fc0);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_006816a0);
  return;
}


// Assembly code:
// 00576930: PUSH 0x3653fc0
//   Label: core_setedit.cpp_staticInit_FUN_00576930
//   XREF to: 03653fc0 (DATA)
// 00576935: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0057693a: ADD ESP,0x4
// 0057693d: PUSH 0x6816a0
//   XREF to: 006816a0 (DATA)
// 00576942: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00576947: ADD ESP,0x4
// 0057694a: RET
