// Name: core_bodypart.cpp_freeBodyPartModels_FUN_0041b690
// Address: 0041b690
// Address Range: [[0041b690, 0041b6a4]]
// Convention: __cdecl
// Signature: int core_bodypart.cpp_freeBodyPartModels_FUN_0041b690(SBodyPartModel * * objs)
// Cross-references:
//   core_bodypart.cpp_CBodyPart_dtor_FUN_00419130 (00419130) at 0041917c [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SBodyPartModelTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

int __cdecl core_bodypart_cpp_freeBodyPartModels_FUN_0041b690(SBodyPartModel **objs)

{
  int iVar1;
  
  iVar1 = crt_memory_c_freeTypeArray_FUN_005feee9(objs,3,&g_SBodyPartModelTypeInfo);
  return iVar1;
}


// Assembly code:
// 0041b690: PUSH 0x65aec0
//   Label: core_bodypart.cpp_freeBodyPartModels_FUN_0041b690
//   XREF to: 0065aec0 (DATA)
// 0041b695: PUSH 0x3
// 0041b697: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0041b69b: PUSH EDX
// 0041b69c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0041b6a1: ADD ESP,0xc
// 0041b6a4: RET
