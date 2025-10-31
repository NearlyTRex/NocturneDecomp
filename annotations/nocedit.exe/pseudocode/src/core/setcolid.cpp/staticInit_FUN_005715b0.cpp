// Name: core_setcolid.cpp_staticInit_FUN_005715b0
// Address: 005715b0
// Address Range: [[005715b0, 005715c4]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_staticInit_FUN_005715b0(void)
// Globals:
//   WatcomTypeInfo g_SRaytraceStateTypeInfo
//   SRaytraceState[5] g_RaytraceStateStack
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

void __cdecl core_setcolid_cpp_staticInit_FUN_005715b0(void)

{
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_RaytraceStateStack,5,&g_SRaytraceStateTypeInfo);
  return;
}


// Assembly code:
// 005715b0: PUSH 0x662950
//   Label: core_setcolid.cpp_staticInit_FUN_005715b0
//   XREF to: 00662950 (DATA)
// 005715b5: PUSH 0x5
// 005715b7: PUSH 0x33469f0
//   XREF to: 033469f0 (DATA)
// 005715bc: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005715c1: ADD ESP,0xc
// 005715c4: RET
