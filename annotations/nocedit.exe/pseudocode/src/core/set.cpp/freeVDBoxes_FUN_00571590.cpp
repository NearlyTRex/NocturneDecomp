// Name: core_set.cpp_freeVDBoxes_FUN_00571590
// Address: 00571590
// Address Range: [[00571590, 005715a7]]
// Convention: __cdecl
// Signature: void core_set.cpp_freeVDBoxes_FUN_00571590(SVDBox * * array)
// Cross-references:
//   core_set.cpp_CDemonSet_dtor_FUN_00569350 (00569350) at 00569367 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SVDBoxTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_set_cpp_freeVDBoxes_FUN_00571590(SVDBox **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0xfa,&g_SVDBoxTypeInfo);
  return;
}


// Assembly code:
// 00571590: PUSH 0x662910
//   Label: core_set.cpp_freeVDBoxes_FUN_00571590
//   XREF to: 00662910 (DATA)
// 00571595: PUSH 0xfa
// 0057159a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0057159e: PUSH EDX
// 0057159f: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 005715a4: ADD ESP,0xc
// 005715a7: RET
