// Name: core_skeleton.cpp_SVert_ctor_FUN_005a1f70
// Address: 005a1f70
// Address Range: [[005a1f70, 005a1f8a]]
// Convention: __cdecl
// Signature: SVert * core_skeleton.cpp_SVert_ctor_FUN_005a1f70(SVert * this_ptr)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

SVert * __cdecl core_skeleton_cpp_SVert_ctor_FUN_005a1f70(SVert *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->field1_0x10,3,&g_CVectorTypeInfo);
  return (SVert *)((int)pvVar1 + -0x10);
}


// Assembly code:
// 005a1f70: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_skeleton.cpp_SVert_ctor_FUN_005a1f70
//   XREF to: Stack[0x4] (READ)
// 005a1f74: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 005a1f79: PUSH 0x3
// 005a1f7b: ADD EAX,0x10
// 005a1f7e: PUSH EAX
// 005a1f7f: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005a1f84: ADD ESP,0xc
// 005a1f87: SUB EAX,0x10
// 005a1f8a: RET
