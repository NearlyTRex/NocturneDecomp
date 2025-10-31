// Name: core_manpuz.cpp_FUN_0050b940
// Address: 0050b940
// Address Range: [[0050b940, 0050b95a]]
// Convention: __cdecl
// Signature: SGem * core_manpuz.cpp_FUN_0050b940(SGem * this_ptr)
// Globals:
//   WatcomTypeInfo g_CDemonTriangleTypeInfo
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

SGem * __cdecl core_manpuz_cpp_FUN_0050b940(SGem *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->field0_0x0 + 0x3c,2,&g_CDemonTriangleTypeInfo);
  return (SGem *)((int)pvVar1 + -0x3c);
}


// Assembly code:
// 0050b940: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_manpuz.cpp_FUN_0050b940
//   XREF to: Stack[0x4] (READ)
// 0050b944: PUSH 0x65c990
//   XREF to: 0065c990 (DATA)
// 0050b949: PUSH 0x2
// 0050b94b: ADD EAX,0x3c
// 0050b94e: PUSH EAX
// 0050b94f: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0050b954: ADD ESP,0xc
// 0050b957: SUB EAX,0x3c
// 0050b95a: RET
