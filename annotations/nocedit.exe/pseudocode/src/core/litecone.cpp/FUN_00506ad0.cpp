// Name: core_litecone.cpp_FUN_00506ad0
// Address: 00506ad0
// Address Range: [[00506ad0, 00506af2]]
// Convention: unknown
// Signature: undefined core_litecone.cpp_FUN_00506ad0()
// Cross-references:
//   core_litecone.cpp_staticInit_FUN_00506aa0 (00506aa0) at 00506aac [DATA]
// Globals:
//   TerminatedCString s_core_litecone_cpp_00631541
// Function calls:
//   core_litecone.cpp_FUN_00506b10
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_litecone_cpp_FUN_00506ad0(void)

{
  CLightCone *this_ptr;
  
  this_ptr = (CLightCone *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x22c,"..\\core\\litecone.cpp",0x26);
  if (this_ptr == (CLightCone *)0x0) {
    return;
  }
  core_litecone_cpp_FUN_00506b10(this_ptr);
  return;
}


// Assembly code:
// 00506ad0: PUSH 0x26
//   Label: core_litecone.cpp_FUN_00506ad0
// 00506ad2: PUSH 0x631541
//   XREF to: 00631541 (DATA)
// 00506ad7: PUSH 0x22c
// 00506adc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00506ae1: ADD ESP,0xc
// 00506ae4: TEST EAX,EAX
// 00506ae6: JNZ 0x00506ae9
//   XREF to: 00506ae9 (CONDITIONAL_JUMP)
// 00506ae8: RET
// 00506ae9: PUSH EAX
//   Label: LAB_00506ae9
// 00506aea: CALL core_litecone.cpp_FUN_00506b10
//   XREF to: 00506b10 (UNCONDITIONAL_CALL)
// 00506aef: ADD ESP,0x4
// 00506af2: RET
