// Name: core_menu.cpp_staticInit_FUN_0050ee40
// Address: 0050ee40
// Address Range: [[0050ee40, 0050ee5a]]
// Convention: unknown
// Signature: undefined core_menu.cpp_staticInit_FUN_0050ee40()
// Globals:
//   WatcomStaticDestructorNode g_CLeakCheckerDestructorNode
//   CLeakChecker g_CLeakCheckerInstance
// Function calls:
//   crt_stdlib.c_atexit_FUN_005ff060
//   shape_memdbg.cpp_CLeakChecker_ctor_FUN_0050fba0

#include "nocturne.h"

void core_menu_cpp_staticInit_FUN_0050ee40(void)

{
  shape_memdbg_cpp_CLeakChecker_ctor_FUN_0050fba0(&g_CLeakCheckerInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CLeakCheckerDestructorNode);
  return;
}


// Assembly code:
// 0050ee40: PUSH 0x2f214ec
//   Label: core_menu.cpp_staticInit_FUN_0050ee40
//   XREF to: 02f214ec (DATA)
// 0050ee45: CALL shape_memdbg.cpp_CLeakChecker_ctor_FUN_0050fba0
//   XREF to: 0050fba0 (UNCONDITIONAL_CALL)
// 0050ee4a: ADD ESP,0x4
// 0050ee4d: PUSH 0x67d1e0
//   XREF to: 0067d1e0 (DATA)
// 0050ee52: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 0050ee57: ADD ESP,0x4
// 0050ee5a: RET
