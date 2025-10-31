// Name: core_weather.cpp_FUN_005efb50
// Address: 005efb50
// Address Range: [[005efb50, 005efb67]]
// Convention: unknown
// Signature: undefined core_weather.cpp_FUN_005efb50()
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void core_weather_cpp_FUN_005efb50(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,200,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 005efb50: PUSH 0x6598c0
//   Label: core_weather.cpp_FUN_005efb50
//   XREF to: 006598c0 (DATA)
// 005efb55: PUSH 0xc8
// 005efb5a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005efb5e: PUSH EDX
// 005efb5f: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 005efb64: ADD ESP,0xc
// 005efb67: RET
