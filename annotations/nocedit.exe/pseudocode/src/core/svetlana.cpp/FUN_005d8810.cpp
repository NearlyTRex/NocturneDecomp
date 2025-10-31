// Name: core_svetlana.cpp_FUN_005d8810
// Address: 005d8810
// Address Range: [[005d8810, 005d8832]]
// Convention: unknown
// Signature: undefined core_svetlana.cpp_FUN_005d8810()
// Cross-references:
//   core_svetlana.cpp_staticInit_FUN_005d87e0 (005d87e0) at 005d87ec [DATA]
// Globals:
//   TerminatedCString s_core_svetlana_cpp_006548e4
// Function calls:
//   core_svetlana.cpp_CSvetlana_ctor_FUN_005d8850
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_svetlana_cpp_FUN_005d8810(void)

{
  CSvetlana *this_ptr;
  
  this_ptr = (CSvetlana *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x9f8d8,"..\\core\\svetlana.cpp",0x6e);
  if (this_ptr == (CSvetlana *)0x0) {
    return;
  }
  core_svetlana_cpp_CSvetlana_ctor_FUN_005d8850(this_ptr);
  return;
}


// Assembly code:
// 005d8810: PUSH 0x6e
//   Label: core_svetlana.cpp_FUN_005d8810
// 005d8812: PUSH 0x6548e4
//   XREF to: 006548e4 (DATA)
// 005d8817: PUSH 0x9f8d8
// 005d881c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005d8821: ADD ESP,0xc
// 005d8824: TEST EAX,EAX
// 005d8826: JNZ 0x005d8829
//   XREF to: 005d8829 (CONDITIONAL_JUMP)
// 005d8828: RET
// 005d8829: PUSH EAX
//   Label: LAB_005d8829
// 005d882a: CALL core_svetlana.cpp_CSvetlana_ctor_FUN_005d8850
//   XREF to: 005d8850 (UNCONDITIONAL_CALL)
// 005d882f: ADD ESP,0x4
// 005d8832: RET
