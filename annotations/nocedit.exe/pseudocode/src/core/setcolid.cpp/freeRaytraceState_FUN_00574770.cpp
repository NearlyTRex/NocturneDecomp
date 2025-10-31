// Name: core_setcolid.cpp_freeRaytraceState_FUN_00574770
// Address: 00574770
// Address Range: [[00574770, 00574784]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_freeRaytraceState_FUN_00574770(SRaytraceState * * array)
// Globals:
//   WatcomTypeInfo g_SRaytraceStateTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_setcolid_cpp_freeRaytraceState_FUN_00574770(SRaytraceState **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,5,&g_SRaytraceStateTypeInfo);
  return;
}


// Assembly code:
// 00574770: PUSH 0x662950
//   Label: core_setcolid.cpp_freeRaytraceState_FUN_00574770
//   XREF to: 00662950 (DATA)
// 00574775: PUSH 0x5
// 00574777: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0057477b: PUSH EDX
// 0057477c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00574781: ADD ESP,0xc
// 00574784: RET
