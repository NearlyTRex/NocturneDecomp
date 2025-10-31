// Name: core_mirror.cpp_staticInit_FUN_00520fb0
// Address: 00520fb0
// Address Range: [[00520fb0, 00520fd8]]
// Convention: __cdecl
// Signature: void core_mirror.cpp_staticInit_FUN_00520fb0(void)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
//   CVector3f[32] g_MirrorInputVertices
//   CVector3f[32] g_MirrorOutputVertices
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

void __cdecl core_mirror_cpp_staticInit_FUN_00520fb0(void)

{
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_MirrorInputVertices,0x20,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_MirrorOutputVertices,0x20,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 00520fb0: PUSH 0x6598c0
//   Label: core_mirror.cpp_staticInit_FUN_00520fb0
//   XREF to: 006598c0 (DATA)
// 00520fb5: PUSH 0x20
// 00520fb7: PUSH 0x2f33408
//   XREF to: 02f33408 (DATA)
// 00520fbc: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00520fc1: ADD ESP,0xc
// 00520fc4: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 00520fc9: PUSH 0x20
// 00520fcb: PUSH 0x2f3358c
//   XREF to: 02f3358c (DATA)
// 00520fd0: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00520fd5: ADD ESP,0xc
// 00520fd8: RET
