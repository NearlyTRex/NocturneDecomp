// Name: core_dracbrid.cpp_ctor_FUN_00486d30
// Address: 00486d30
// Address Range: [[00486d30, 00486d4a]]
// Convention: __cdecl
// Signature: SFreaky * core_dracbrid.cpp_ctor_FUN_00486d30(SFreaky * this_ptr)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

SFreaky * __cdecl core_dracbrid_cpp_ctor_FUN_00486d30(SFreaky *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->field1_0x20,4,&g_CVectorTypeInfo);
  return (SFreaky *)((int)pvVar1 + -0x20);
}


// Assembly code:
// 00486d30: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dracbrid.cpp_ctor_FUN_00486d30
//   XREF to: Stack[0x4] (READ)
// 00486d34: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 00486d39: PUSH 0x4
// 00486d3b: ADD EAX,0x20
// 00486d3e: PUSH EAX
// 00486d3f: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00486d44: ADD ESP,0xc
// 00486d47: SUB EAX,0x20
// 00486d4a: RET
