// Name: core_dfilter.cpp_freeFilters_FUN_00470980
// Address: 00470980
// Address Range: [[00470980, 00470994]]
// Convention: __cdecl
// Signature: void core_dfilter.cpp_freeFilters_FUN_00470980(CDemonFilter * * array)
// Globals:
//   WatcomTypeInfo g_CDemonFilterTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_dfilter_cpp_freeFilters_FUN_00470980(CDemonFilter **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,4,&g_CDemonFilterTypeInfo);
  return;
}


// Assembly code:
// 00470980: PUSH 0x65b390
//   Label: core_dfilter.cpp_freeFilters_FUN_00470980
//   XREF to: 0065b390 (DATA)
// 00470985: PUSH 0x4
// 00470987: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0047098b: PUSH EDX
// 0047098c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00470991: ADD ESP,0xc
// 00470994: RET
