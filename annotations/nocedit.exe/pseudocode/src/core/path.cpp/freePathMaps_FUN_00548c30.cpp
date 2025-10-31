// Name: core_path.cpp_freePathMaps_FUN_00548c30
// Address: 00548c30
// Address Range: [[00548c30, 00548c44]]
// Convention: __cdecl
// Signature: void core_path.cpp_freePathMaps_FUN_00548c30(CPathMap * * array)
// Globals:
//   WatcomTypeInfo g_CPathMapTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_path_cpp_freePathMaps_FUN_00548c30(CPathMap **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0xc,&g_CPathMapTypeInfo);
  return;
}


// Assembly code:
// 00548c30: PUSH 0x662110
//   Label: core_path.cpp_freePathMaps_FUN_00548c30
//   XREF to: 00662110 (DATA)
// 00548c35: PUSH 0xc
// 00548c37: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00548c3b: PUSH EDX
// 00548c3c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00548c41: ADD ESP,0xc
// 00548c44: RET
