// Name: core_dcamera.cpp_freeVectors_FUN_00454700
// Address: 00454700
// Address Range: [[00454700, 00454717]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_freeVectors_FUN_00454700(CVector3f * * array)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_dcamera_cpp_freeVectors_FUN_00454700(CVector3f **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x12d40,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 00454700: PUSH 0x6598c0
//   Label: core_dcamera.cpp_freeVectors_FUN_00454700
//   XREF to: 006598c0 (DATA)
// 00454705: PUSH 0x12d40
// 0045470a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0045470e: PUSH EDX
// 0045470f: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00454714: ADD ESP,0xc
// 00454717: RET
