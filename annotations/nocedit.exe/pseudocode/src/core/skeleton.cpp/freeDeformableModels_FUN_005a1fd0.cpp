// Name: core_skeleton.cpp_freeDeformableModels_FUN_005a1fd0
// Address: 005a1fd0
// Address Range: [[005a1fd0, 005a1fe4]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_freeDeformableModels_FUN_005a1fd0(CDeformableModel * * array)
// Globals:
//   WatcomTypeInfo g_CDeformableModelTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_skeleton_cpp_freeDeformableModels_FUN_005a1fd0(CDeformableModel **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x40,&g_CDeformableModelTypeInfo);
  return;
}


// Assembly code:
// 005a1fd0: PUSH 0x662ef0
//   Label: core_skeleton.cpp_freeDeformableModels_FUN_005a1fd0
//   XREF to: 00662ef0 (DATA)
// 005a1fd5: PUSH 0x40
// 005a1fd7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a1fdb: PUSH EDX
// 005a1fdc: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 005a1fe1: ADD ESP,0xc
// 005a1fe4: RET
