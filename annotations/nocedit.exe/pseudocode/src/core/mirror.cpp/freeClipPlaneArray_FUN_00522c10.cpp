// Name: core_mirror.cpp_freeClipPlaneArray_FUN_00522c10
// Address: 00522c10
// Address Range: [[00522c10, 00522c24]]
// Convention: __cdecl
// Signature: void core_mirror.cpp_freeClipPlaneArray_FUN_00522c10(SClipPlane * * array_ptr)
// Cross-references:
//   core_mirror.cpp_CMirror_dtor_FUN_005213e0 (005213e0) at 005213ec [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SClipPlaneTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_mirror_cpp_freeClipPlaneArray_FUN_00522c10(SClipPlane **array_ptr)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array_ptr,5,&g_SClipPlaneTypeInfo);
  return;
}


// Assembly code:
// 00522c10: PUSH 0x661700
//   Label: core_mirror.cpp_freeClipPlaneArray_FUN_00522c10
//   XREF to: 00661700 (DATA)
// 00522c15: PUSH 0x5
// 00522c17: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00522c1b: PUSH EDX
// 00522c1c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00522c21: ADD ESP,0xc
// 00522c24: RET
