// Name: core_gore.cpp_FUN_004ee370
// Address: 004ee370
// Address Range: [[004ee370, 004ee38a]]
// Convention: __cdecl
// Signature: CFootstep * core_gore.cpp_FUN_004ee370(CFootstep * this_ptr)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CFootstep * __cdecl core_gore_cpp_FUN_004ee370(CFootstep *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->field0_0x0 + 8,4,&g_CVectorTypeInfo);
  return (CFootstep *)((int)pvVar1 + -8);
}


// Assembly code:
// 004ee370: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_gore.cpp_FUN_004ee370
//   XREF to: Stack[0x4] (READ)
// 004ee374: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 004ee379: PUSH 0x4
// 004ee37b: ADD EAX,0x8
// 004ee37e: PUSH EAX
// 004ee37f: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004ee384: ADD ESP,0xc
// 004ee387: SUB EAX,0x8
// 004ee38a: RET
