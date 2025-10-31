// Name: core_box.cpp_freeScrapes_FUN_00420220
// Address: 00420220
// Address Range: [[00420220, 00420234]]
// Convention: __cdecl
// Signature: int core_box.cpp_freeScrapes_FUN_00420220(SScrape * * array)
// Cross-references:
//   core_box.cpp_CBox_dtor_FUN_0041dd00 (0041dd00) at 0041dd0c [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SScrapeTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

int __cdecl core_box_cpp_freeScrapes_FUN_00420220(SScrape **array)

{
  int iVar1;
  
  iVar1 = crt_memory_c_freeTypeArray_FUN_005feee9(array,8,&g_SScrapeTypeInfo);
  return iVar1;
}


// Assembly code:
// 00420220: PUSH 0x65b140
//   Label: core_box.cpp_freeScrapes_FUN_00420220
//   XREF to: 0065b140 (DATA)
// 00420225: PUSH 0x8
// 00420227: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0042022b: PUSH EDX
// 0042022c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00420231: ADD ESP,0xc
// 00420234: RET
