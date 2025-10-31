// Name: core_cloth.cpp_freeClothVertices_FUN_0043e480
// Address: 0043e480
// Address Range: [[0043e480, 0043e497]]
// Convention: __cdecl
// Signature: int core_cloth.cpp_freeClothVertices_FUN_0043e480(SClothVertex * * array)
// Cross-references:
//   core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00 (00438c00) at 00438c27 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SClothVertexTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

int __cdecl core_cloth_cpp_freeClothVertices_FUN_0043e480(SClothVertex **array)

{
  int iVar1;
  
  iVar1 = crt_memory_c_freeTypeArray_FUN_005feee9(array,800,&g_SClothVertexTypeInfo);
  return iVar1;
}


// Assembly code:
// 0043e480: PUSH 0x65bb80
//   Label: core_cloth.cpp_freeClothVertices_FUN_0043e480
//   XREF to: 0065bb80 (DATA)
// 0043e485: PUSH 0x320
// 0043e48a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0043e48e: PUSH EDX
// 0043e48f: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0043e494: ADD ESP,0xc
// 0043e497: RET
