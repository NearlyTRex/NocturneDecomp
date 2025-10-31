// Name: core_morph.cpp_SMorphControlPoint_ctor_FUN_0052cc50
// Address: 0052cc50
// Address Range: [[0052cc50, 0052cc6a]]
// Convention: __cdecl
// Signature: SMorphControlPoint * core_morph.cpp_SMorphControlPoint_ctor_FUN_0052cc50(SMorphControlPoint * this_ptr)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

SMorphControlPoint * __cdecl
core_morph_cpp_SMorphControlPoint_ctor_FUN_0052cc50(SMorphControlPoint *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->field0_0x0 + 8,2,&g_CVectorTypeInfo);
  return (SMorphControlPoint *)((int)pvVar1 + -8);
}


// Assembly code:
// 0052cc50: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_morph.cpp_SMorphControlPoint_ctor_FUN_0052cc50
//   XREF to: Stack[0x4] (READ)
// 0052cc54: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 0052cc59: PUSH 0x2
// 0052cc5b: ADD EAX,0x8
// 0052cc5e: PUSH EAX
// 0052cc5f: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0052cc64: ADD ESP,0xc
// 0052cc67: SUB EAX,0x8
// 0052cc6a: RET
