// Name: core_cloth.cpp_freeClothBones_FUN_0043e4a0
// Address: 0043e4a0
// Address Range: [[0043e4a0, 0043e4b4]]
// Convention: __cdecl
// Signature: void core_cloth.cpp_freeClothBones_FUN_0043e4a0(SClothBone * * array)
// Cross-references:
//   core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00 (00438c00) at 00438c17 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SClothBoneTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_cloth_cpp_freeClothBones_FUN_0043e4a0(SClothBone **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x32,&g_SClothBoneTypeInfo);
  return;
}


// Assembly code:
// 0043e4a0: PUSH 0x65bba0
//   Label: core_cloth.cpp_freeClothBones_FUN_0043e4a0
//   XREF to: 0065bba0 (DATA)
// 0043e4a5: PUSH 0x32
// 0043e4a7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0043e4ab: PUSH EDX
// 0043e4ac: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0043e4b1: ADD ESP,0xc
// 0043e4b4: RET
