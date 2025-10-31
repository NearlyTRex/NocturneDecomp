// Name: core_boxactor.cpp_FUN_004216c0
// Address: 004216c0
// Address Range: [[004216c0, 004216e2]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_004216c0()
// Cross-references:
//   core_boxactor.cpp_staticInit_FUN_00421650 (00421650) at 0042165c [DATA]
// Globals:
//   TerminatedCString s_core_boxactor_cpp_0061661b
// Function calls:
//   core_boxactor.cpp_CBoxActor_ctor_FUN_00421700
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_boxactor_cpp_FUN_004216c0(void)

{
  CBoxActor *this_ptr;
  
  this_ptr = (CBoxActor *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x66c,"..\\core\\boxactor.cpp",0x39);
  if (this_ptr == (CBoxActor *)0x0) {
    return;
  }
  core_boxactor_cpp_CBoxActor_ctor_FUN_00421700(this_ptr);
  return;
}


// Assembly code:
// 004216c0: PUSH 0x39
//   Label: core_boxactor.cpp_FUN_004216c0
// 004216c2: PUSH 0x61661b
//   XREF to: 0061661b (DATA)
// 004216c7: PUSH 0x66c
// 004216cc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004216d1: ADD ESP,0xc
// 004216d4: TEST EAX,EAX
// 004216d6: JNZ 0x004216d9
//   XREF to: 004216d9 (CONDITIONAL_JUMP)
// 004216d8: RET
// 004216d9: PUSH EAX
//   Label: LAB_004216d9
// 004216da: CALL core_boxactor.cpp_CBoxActor_ctor_FUN_00421700
//   XREF to: 00421700 (UNCONDITIONAL_CALL)
// 004216df: ADD ESP,0x4
// 004216e2: RET
