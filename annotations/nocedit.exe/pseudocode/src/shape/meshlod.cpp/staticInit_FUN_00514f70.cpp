// Name: shape_meshlod.cpp_staticInit_FUN_00514f70
// Address: 00514f70
// Address Range: [[00514f70, 00514f87]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_staticInit_FUN_00514f70()
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
//   CVector3f[400] CVector3f_ARRAY_02f313f0
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

void shape_meshlod_cpp_staticInit_FUN_00514f70(void)

{
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (CVector3f_ARRAY_02f313f0,400,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 00514f70: PUSH 0x6598c0
//   Label: shape_meshlod.cpp_staticInit_FUN_00514f70
//   XREF to: 006598c0 (DATA)
// 00514f75: PUSH 0x190
// 00514f7a: PUSH 0x2f313f0
//   XREF to: 02f313f0 (DATA)
// 00514f7f: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00514f84: ADD ESP,0xc
// 00514f87: RET
