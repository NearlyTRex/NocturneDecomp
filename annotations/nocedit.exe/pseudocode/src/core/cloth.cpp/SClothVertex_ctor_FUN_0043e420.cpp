// Name: core_cloth.cpp_SClothVertex_ctor_FUN_0043e420
// Address: 0043e420
// Address Range: [[0043e420, 0043e43e]]
// Convention: __cdecl
// Signature: SClothVertex * core_cloth.cpp_SClothVertex_ctor_FUN_0043e420(SClothVertex * this_ptr)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

SClothVertex * __cdecl core_cloth_cpp_SClothVertex_ctor_FUN_0043e420(SClothVertex *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr[0xd].field0_0x0 + 0xf,3,&g_CVectorTypeInfo);
  return (SClothVertex *)((int)pvVar1 + -0xec);
}


// Assembly code:
// 0043e420: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_cloth.cpp_SClothVertex_ctor_FUN_0043e420
//   XREF to: Stack[0x4] (READ)
// 0043e424: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 0043e429: PUSH 0x3
// 0043e42b: ADD EAX,0xec
// 0043e430: PUSH EAX
// 0043e431: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0043e436: ADD ESP,0xc
// 0043e439: SUB EAX,0xec
// 0043e43e: RET
