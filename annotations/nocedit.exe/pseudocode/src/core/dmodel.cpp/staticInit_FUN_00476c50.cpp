// Name: core_dmodel.cpp_staticInit_FUN_00476c50
// Address: 00476c50
// Address Range: [[00476c50, 00476c74]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_staticInit_FUN_00476c50(void)
// Globals:
//   WatcomTypeInfo g_CKeyFramedModelTypeInfo
//   WatcomStaticDestructorNode g_CKeyFramedModelPoolDestructorNode
//   CKeyFramedModel[256] g_CKeyFramedModelPool
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_stdlib.c_atexit_FUN_005ff060

#include "nocturne.h"

void __cdecl core_dmodel_cpp_staticInit_FUN_00476c50(void)

{
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_CKeyFramedModelPool,0x100,&g_CKeyFramedModelTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CKeyFramedModelPoolDestructorNode);
  return;
}


// Assembly code:
// 00476c50: PUSH 0x65c9b0
//   Label: core_dmodel.cpp_staticInit_FUN_00476c50
//   XREF to: 0065c9b0 (DATA)
// 00476c55: PUSH 0x100
// 00476c5a: PUSH 0x26a7484
//   XREF to: 026a7484 (DATA)
// 00476c5f: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00476c64: ADD ESP,0xc
// 00476c67: PUSH 0x6700e0
//   XREF to: 006700e0 (DATA)
// 00476c6c: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00476c71: ADD ESP,0x4
// 00476c74: RET
