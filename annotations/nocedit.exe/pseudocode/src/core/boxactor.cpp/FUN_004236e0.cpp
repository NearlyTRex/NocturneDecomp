// Name: core_boxactor.cpp_FUN_004236e0
// Address: 004236e0
// Address Range: [[004236e0, 004236f4]]
// Convention: __cdecl
// Signature: int core_boxactor.cpp_FUN_004236e0(CDemonFilter * * objs)
// Globals:
//   WatcomTypeInfo g_CDemonFilterTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

int __cdecl core_boxactor_cpp_FUN_004236e0(CDemonFilter **objs)

{
  int iVar1;
  
  iVar1 = crt_memory_c_freeTypeArray_FUN_005feee9(objs,8,&g_CDemonFilterTypeInfo);
  return iVar1;
}


// Assembly code:
// 004236e0: PUSH 0x65b390
//   Label: core_boxactor.cpp_FUN_004236e0
//   XREF to: 0065b390 (DATA)
// 004236e5: PUSH 0x8
// 004236e7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004236eb: PUSH EDX
// 004236ec: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004236f1: ADD ESP,0xc
// 004236f4: RET
