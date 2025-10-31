// Name: core_fire.cpp_CCrater_ctor_FUN_004c9580
// Address: 004c9580
// Address Range: [[004c9580, 004c959a]]
// Convention: __cdecl
// Signature: CCrater * core_fire.cpp_CCrater_ctor_FUN_004c9580(CCrater * this_ptr)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CCrater * __cdecl core_fire_cpp_CCrater_ctor_FUN_004c9580(CCrater *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->field0_0x0 + 0x1c,3,&g_CVectorTypeInfo);
  return (CCrater *)((int)pvVar1 + -0x1c);
}


// Assembly code:
// 004c9580: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CCrater_ctor_FUN_004c9580
//   XREF to: Stack[0x4] (READ)
// 004c9584: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 004c9589: PUSH 0x3
// 004c958b: ADD EAX,0x1c
// 004c958e: PUSH EAX
// 004c958f: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004c9594: ADD ESP,0xc
// 004c9597: SUB EAX,0x1c
// 004c959a: RET
