// Name: core_bugs.cpp_FUN_00427cc0
// Address: 00427cc0
// Address Range: [[00427cc0, 00427cd7]]
// Convention: __cdecl
// Signature: int core_bugs.cpp_FUN_00427cc0(SBug * * objs)
// Cross-references:
//   core_bugs.cpp_CBugs_dtor_FUN_00427bd0 (00427bd0) at 00427be9 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SBugTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

int __cdecl core_bugs_cpp_FUN_00427cc0(SBug **objs)

{
  int iVar1;
  
  iVar1 = crt_memory_c_freeTypeArray_FUN_005feee9(objs,400,&g_SBugTypeInfo);
  return iVar1;
}


// Assembly code:
// 00427cc0: PUSH 0x65b750
//   Label: core_bugs.cpp_FUN_00427cc0
//   XREF to: 0065b750 (DATA)
// 00427cc5: PUSH 0x190
// 00427cca: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00427cce: PUSH EDX
// 00427ccf: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00427cd4: ADD ESP,0xc
// 00427cd7: RET
