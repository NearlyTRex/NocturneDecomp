// Name: core_setdir.cpp_freeBoundingBoxes_FUN_005768f0
// Address: 005768f0
// Address Range: [[005768f0, 00576907]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_freeBoundingBoxes_FUN_005768f0(CBoundingBox3D * * array)
// Globals:
//   WatcomTypeInfo g_CBoundingBox3DTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_setdir_cpp_freeBoundingBoxes_FUN_005768f0(CBoundingBox3D **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,2000,&g_CBoundingBox3DTypeInfo);
  return;
}


// Assembly code:
// 005768f0: PUSH 0x659900
//   Label: core_setdir.cpp_freeBoundingBoxes_FUN_005768f0
//   XREF to: 00659900 (DATA)
// 005768f5: PUSH 0x7d0
// 005768fa: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005768fe: PUSH EDX
// 005768ff: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00576904: ADD ESP,0xc
// 00576907: RET
