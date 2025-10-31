// Name: core_boneguy.cpp_FUN_0041db30
// Address: 0041db30
// Address Range: [[0041db30, 0041db44]]
// Convention: __cdecl
// Signature: int core_boneguy.cpp_FUN_0041db30(SBoneGuyBox * * objs)
// Cross-references:
//   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40 (0041da40) at 0041da59 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SBoneGuyBoxTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

int __cdecl core_boneguy_cpp_FUN_0041db30(SBoneGuyBox **objs)

{
  int iVar1;
  
  iVar1 = crt_memory_c_freeTypeArray_FUN_005feee9(objs,0x14,&g_SBoneGuyBoxTypeInfo);
  return iVar1;
}


// Assembly code:
// 0041db30: PUSH 0x65b0e0
//   Label: core_boneguy.cpp_FUN_0041db30
//   XREF to: 0065b0e0 (DATA)
// 0041db35: PUSH 0x14
// 0041db37: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0041db3b: PUSH EDX
// 0041db3c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0041db41: ADD ESP,0xc
// 0041db44: RET
