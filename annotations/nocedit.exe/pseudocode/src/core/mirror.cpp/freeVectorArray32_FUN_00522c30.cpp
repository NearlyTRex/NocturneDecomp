// Name: core_mirror.cpp_freeVectorArray32_FUN_00522c30
// Address: 00522c30
// Address Range: [[00522c30, 00522c44]]
// Convention: __cdecl
// Signature: void core_mirror.cpp_freeVectorArray32_FUN_00522c30(CVector3f * * array_ptr)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_mirror_cpp_freeVectorArray32_FUN_00522c30(CVector3f **array_ptr)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array_ptr,0x20,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 00522c30: PUSH 0x6598c0
//   Label: core_mirror.cpp_freeVectorArray32_FUN_00522c30
//   XREF to: 006598c0 (DATA)
// 00522c35: PUSH 0x20
// 00522c37: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00522c3b: PUSH EDX
// 00522c3c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00522c41: ADD ESP,0xc
// 00522c44: RET
