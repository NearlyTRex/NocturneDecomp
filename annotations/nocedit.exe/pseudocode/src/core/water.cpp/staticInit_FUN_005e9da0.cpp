// Name: core_water.cpp_staticInit_FUN_005e9da0
// Address: 005e9da0
// Address Range: [[005e9da0, 005e9dba]]
// Convention: __cdecl
// Signature: void core_water.cpp_staticInit_FUN_005e9da0(void)
// Globals:
//   WatcomStaticDestructorNode g_CWaterDestructorNode
//   CWater g_CWaterInstance
// Function calls:
//   core_water.cpp_CWater_ctor_FUN_005e9e10
//   crt_stdlib.c_atexit_FUN_005ff060

#include "nocturne.h"

void __cdecl core_water_cpp_staticInit_FUN_005e9da0(void)

{
  core_water_cpp_CWater_ctor_FUN_005e9e10(&g_CWaterInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CWaterDestructorNode);
  return;
}


// Assembly code:
// 005e9da0: PUSH 0x3f875e0
//   Label: core_water.cpp_staticInit_FUN_005e9da0
//   XREF to: 03f875e0 (DATA)
// 005e9da5: CALL core_water.cpp_CWater_ctor_FUN_005e9e10
//   XREF to: 005e9e10 (UNCONDITIONAL_CALL)
// 005e9daa: ADD ESP,0x4
// 005e9dad: PUSH 0x6844e0
//   XREF to: 006844e0 (DATA)
// 005e9db2: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 005e9db7: ADD ESP,0x4
// 005e9dba: RET
