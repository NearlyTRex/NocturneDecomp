// Name: shape_quantize.cpp_freeMemory_FUN_00556d40
// Address: 00556d40
// Address Range: [[00556d40, 00556d54]]
// Convention: __cdecl
// Signature: void shape_quantize.cpp_freeMemory_FUN_00556d40(void * ptr)
// Globals:
//   TerminatedCString s_shape_quantize_cpp_00640ab5
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl shape_quantize_cpp_freeMemory_FUN_00556d40(void *ptr)

{
  shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\shape\\quantize.cpp",0x79);
  return;
}


// Assembly code:
// 00556d40: PUSH 0x79
//   Label: shape_quantize.cpp_freeMemory_FUN_00556d40
// 00556d42: PUSH 0x640ab5
//   XREF to: 00640ab5 (DATA)
// 00556d47: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00556d4b: PUSH EDX
// 00556d4c: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00556d51: ADD ESP,0xc
// 00556d54: RET
