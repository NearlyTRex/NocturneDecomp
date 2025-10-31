// Name: core_set.cpp_free3DSCameras_FUN_00571530
// Address: 00571530
// Address Range: [[00571530, 00571547]]
// Convention: __cdecl
// Signature: void core_set.cpp_free3DSCameras_FUN_00571530(C3DSCamera * * array)
// Cross-references:
//   core_set.cpp_CDemonSet_dtor_FUN_00569350 (00569350) at 00569397 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_C3DSCameraTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_set_cpp_free3DSCameras_FUN_00571530(C3DSCamera **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0xfa,&g_C3DSCameraTypeInfo);
  return;
}


// Assembly code:
// 00571530: PUSH 0x6628b0
//   Label: core_set.cpp_free3DSCameras_FUN_00571530
//   XREF to: 006628b0 (DATA)
// 00571535: PUSH 0xfa
// 0057153a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0057153e: PUSH EDX
// 0057153f: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00571544: ADD ESP,0xc
// 00571547: RET
