// Name: shape_quantize.cpp_reallocMemory_FUN_00556d20
// Address: 00556d20
// Address Range: [[00556d20, 00556d39]]
// Convention: __cdecl
// Signature: void shape_quantize.cpp_reallocMemory_FUN_00556d20(void * ptr, int new_size)
// Globals:
//   TerminatedCString s_shape_quantize_cpp_00640a9f
// Function calls:
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

void __cdecl shape_quantize_cpp_reallocMemory_FUN_00556d20(void *ptr,int new_size)

{
  shape_memdbg_cpp_debugRealloc_FUN_0050f540(ptr,new_size,"..\\shape\\quantize.cpp",0x73);
  return;
}


// Assembly code:
// 00556d20: PUSH 0x73
//   Label: shape_quantize.cpp_reallocMemory_FUN_00556d20
// 00556d22: PUSH 0x640a9f
//   XREF to: 00640a9f (DATA)
// 00556d27: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00556d2b: PUSH EDX
// 00556d2c: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00556d30: PUSH ECX
// 00556d31: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 00556d36: ADD ESP,0x10
// 00556d39: RET
