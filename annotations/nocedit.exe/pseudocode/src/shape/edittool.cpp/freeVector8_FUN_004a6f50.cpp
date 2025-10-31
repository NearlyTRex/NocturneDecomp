// Name: shape_edittool.cpp_freeVector8_FUN_004a6f50
// Address: 004a6f50
// Address Range: [[004a6f50, 004a6f64]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_freeVector8_FUN_004a6f50(CVector3f * * array)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl shape_edittool_cpp_freeVector8_FUN_004a6f50(CVector3f **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,8,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 004a6f50: PUSH 0x6598c0
//   Label: shape_edittool.cpp_freeVector8_FUN_004a6f50
//   XREF to: 006598c0 (DATA)
// 004a6f55: PUSH 0x8
// 004a6f57: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004a6f5b: PUSH EDX
// 004a6f5c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004a6f61: ADD ESP,0xc
// 004a6f64: RET
