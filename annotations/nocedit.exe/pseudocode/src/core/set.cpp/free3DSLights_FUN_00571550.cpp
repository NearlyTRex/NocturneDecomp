// Name: core_set.cpp_free3DSLights_FUN_00571550
// Address: 00571550
// Address Range: [[00571550, 00571567]]
// Convention: __cdecl
// Signature: void core_set.cpp_free3DSLights_FUN_00571550(C3DSLight * * array)
// Cross-references:
//   core_set.cpp_CDemonSet_dtor_FUN_00569350 (00569350) at 00569387 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_C3DSLightTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_set_cpp_free3DSLights_FUN_00571550(C3DSLight **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,200,&g_C3DSLightTypeInfo);
  return;
}


// Assembly code:
// 00571550: PUSH 0x6628d0
//   Label: core_set.cpp_free3DSLights_FUN_00571550
//   XREF to: 006628d0 (DATA)
// 00571555: PUSH 0xc8
// 0057155a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0057155e: PUSH EDX
// 0057155f: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00571564: ADD ESP,0xc
// 00571567: RET
