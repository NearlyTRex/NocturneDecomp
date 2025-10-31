// Name: core_dmodel.cpp_freeModels_FUN_0047efc0
// Address: 0047efc0
// Address Range: [[0047efc0, 0047efd7]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_freeModels_FUN_0047efc0(CKeyFramedModel * * array)
// Globals:
//   WatcomTypeInfo g_CKeyFramedModelTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_dmodel_cpp_freeModels_FUN_0047efc0(CKeyFramedModel **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x100,&g_CKeyFramedModelTypeInfo);
  return;
}


// Assembly code:
// 0047efc0: PUSH 0x65c9b0
//   Label: core_dmodel.cpp_freeModels_FUN_0047efc0
//   XREF to: 0065c9b0 (DATA)
// 0047efc5: PUSH 0x100
// 0047efca: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0047efce: PUSH EDX
// 0047efcf: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0047efd4: ADD ESP,0xc
// 0047efd7: RET
