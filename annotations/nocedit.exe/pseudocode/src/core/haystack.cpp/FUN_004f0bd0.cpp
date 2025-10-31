// Name: core_haystack.cpp_FUN_004f0bd0
// Address: 004f0bd0
// Address Range: [[004f0bd0, 004f0bf2]]
// Convention: unknown
// Signature: undefined core_haystack.cpp_FUN_004f0bd0()
// Cross-references:
//   core_haystack.cpp_staticInit_FUN_004f0ba0 (004f0ba0) at 004f0bac [DATA]
// Globals:
//   TerminatedCString s_core_haystack_cpp_0062e7e5
// Function calls:
//   core_haystack.cpp_FUN_004f0c10
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_haystack_cpp_FUN_004f0bd0(void)

{
  CHaystack *this_ptr;
  
  this_ptr = (CHaystack *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1fbec,"..\\core\\haystack.cpp",0x5c);
  if (this_ptr == (CHaystack *)0x0) {
    return;
  }
  core_haystack_cpp_FUN_004f0c10(this_ptr);
  return;
}


// Assembly code:
// 004f0bd0: PUSH 0x5c
//   Label: core_haystack.cpp_FUN_004f0bd0
// 004f0bd2: PUSH 0x62e7e5
//   XREF to: 0062e7e5 (DATA)
// 004f0bd7: PUSH 0x1fbec
// 004f0bdc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004f0be1: ADD ESP,0xc
// 004f0be4: TEST EAX,EAX
// 004f0be6: JNZ 0x004f0be9
//   XREF to: 004f0be9 (CONDITIONAL_JUMP)
// 004f0be8: RET
// 004f0be9: PUSH EAX
//   Label: LAB_004f0be9
// 004f0bea: CALL core_haystack.cpp_FUN_004f0c10
//   XREF to: 004f0c10 (UNCONDITIONAL_CALL)
// 004f0bef: ADD ESP,0x4
// 004f0bf2: RET
