// Name: core_morph.cpp_freeBoundingBoxes_FUN_0052ccf0
// Address: 0052ccf0
// Address Range: [[0052ccf0, 0052cd04]]
// Convention: __cdecl
// Signature: void core_morph.cpp_freeBoundingBoxes_FUN_0052ccf0(CBoundingBox3D * * array)
// Globals:
//   WatcomTypeInfo g_CBoundingBox3DTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_morph_cpp_freeBoundingBoxes_FUN_0052ccf0(CBoundingBox3D **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,2,&g_CBoundingBox3DTypeInfo);
  return;
}


// Assembly code:
// 0052ccf0: PUSH 0x659900
//   Label: core_morph.cpp_freeBoundingBoxes_FUN_0052ccf0
//   XREF to: 00659900 (DATA)
// 0052ccf5: PUSH 0x2
// 0052ccf7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052ccfb: PUSH EDX
// 0052ccfc: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0052cd01: ADD ESP,0xc
// 0052cd04: RET
