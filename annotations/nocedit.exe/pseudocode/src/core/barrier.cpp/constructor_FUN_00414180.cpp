// Name: core_barrier.cpp_constructor_FUN_00414180
// Address: 00414180
// Address Range: [[00414180, 004141a2]]
// Convention: unknown
// Signature: undefined core_barrier.cpp_constructor_FUN_00414180()
// Cross-references:
//   core_barrier.cpp_staticInit_FUN_00414150 (00414150) at 0041415c [DATA]
// Globals:
//   TerminatedCString s_core_barrier_cpp_00615148
// Function calls:
//   core_barrier.cpp_CBarrier_ctor_FUN_004141c0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_barrier_cpp_constructor_FUN_00414180(void)

{
  CBarrier *this_ptr;
  
  this_ptr = (CBarrier *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x230,"..\\core\\barrier.cpp",0x26);
  if (this_ptr == (CBarrier *)0x0) {
    return;
  }
  core_barrier_cpp_CBarrier_ctor_FUN_004141c0(this_ptr);
  return;
}


// Assembly code:
// 00414180: PUSH 0x26
//   Label: core_barrier.cpp_constructor_FUN_00414180
// 00414182: PUSH 0x615148
//   XREF to: 00615148 (DATA)
// 00414187: PUSH 0x230
// 0041418c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00414191: ADD ESP,0xc
// 00414194: TEST EAX,EAX
// 00414196: JNZ 0x00414199
//   XREF to: 00414199 (CONDITIONAL_JUMP)
// 00414198: RET
// 00414199: PUSH EAX
//   Label: LAB_00414199
// 0041419a: CALL core_barrier.cpp_CBarrier_ctor_FUN_004141c0
//   XREF to: 004141c0 (UNCONDITIONAL_CALL)
// 0041419f: ADD ESP,0x4
// 004141a2: RET
