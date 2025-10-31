// Name: core_flies.cpp_FUN_004ccd20
// Address: 004ccd20
// Address Range: [[004ccd20, 004ccd3a]]
// Convention: __cdecl
// Signature: SFly * core_flies.cpp_FUN_004ccd20(SFly * this_ptr)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

SFly * __cdecl core_flies_cpp_FUN_004ccd20(SFly *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->field0_0x0 + 4,4,&g_CVectorTypeInfo);
  return (SFly *)((int)pvVar1 + -4);
}


// Assembly code:
// 004ccd20: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_flies.cpp_FUN_004ccd20
//   XREF to: Stack[0x4] (READ)
// 004ccd24: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 004ccd29: PUSH 0x4
// 004ccd2b: ADD EAX,0x4
// 004ccd2e: PUSH EAX
// 004ccd2f: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004ccd34: ADD ESP,0xc
// 004ccd37: SUB EAX,0x4
// 004ccd3a: RET
