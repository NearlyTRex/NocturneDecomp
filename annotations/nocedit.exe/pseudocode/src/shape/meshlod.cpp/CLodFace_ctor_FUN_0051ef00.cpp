// Name: shape_meshlod.cpp_CLodFace_ctor_FUN_0051ef00
// Address: 0051ef00
// Address Range: [[0051ef00, 0051ef1a]]
// Convention: __cdecl
// Signature: CLodFace * shape_meshlod.cpp_CLodFace_ctor_FUN_0051ef00(CLodFace * this_ptr)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CLodFace * __cdecl shape_meshlod_cpp_CLodFace_ctor_FUN_0051ef00(CLodFace *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->vertices,3,&g_CVectorTypeInfo);
  return (CLodFace *)((int)pvVar1 + -0x54);
}


// Assembly code:
// 0051ef00: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_meshlod.cpp_CLodFace_ctor_FUN_0051ef00
//   XREF to: Stack[0x4] (READ)
// 0051ef04: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 0051ef09: PUSH 0x3
// 0051ef0b: ADD EAX,0x54
// 0051ef0e: PUSH EAX
// 0051ef0f: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0051ef14: ADD ESP,0xc
// 0051ef17: SUB EAX,0x54
// 0051ef1a: RET
