// Name: core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004702c0
// Address: 004702c0
// Address Range: [[004702c0, 004702e9]]
// Convention: __cdecl
// Signature: void core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004702c0(CDemonFilter * this_ptr)
// Cross-references:
//   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260 (00470260) at 00470266 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CDemonFilter_dtor_FUN_00470240 (00470240) at 00470246 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dfilter_cpp_0061e59b
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_004702c0(CDemonFilter *this_ptr)

{
  if (this_ptr->data_buffer == (void *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->data_buffer,"..\\core\\dfilter.cpp",0x98);
  this_ptr->data_buffer = (void *)0x0;
  return;
}


// Assembly code:
// 004702c0: PUSH EBX
//   Label: core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004702c0
// 004702c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004702c5: MOV EDX,dword ptr [EBX + 0x48]
// 004702c8: TEST EDX,EDX
// 004702ca: JNZ 0x004702ce
//   XREF to: 004702ce (CONDITIONAL_JUMP)
// 004702cc: POP EBX
// 004702cd: RET
// 004702ce: PUSH 0x98
//   Label: LAB_004702ce
// 004702d3: PUSH 0x61e59b
//   XREF to: 0061e59b (DATA)
// 004702d8: PUSH EDX
// 004702d9: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004702de: ADD ESP,0xc
// 004702e1: MOV dword ptr [EBX + 0x48],0x0
// 004702e8: POP EBX
// 004702e9: RET
