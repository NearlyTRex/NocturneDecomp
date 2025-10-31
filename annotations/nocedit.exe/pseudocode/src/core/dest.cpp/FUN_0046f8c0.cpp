// Name: core_dest.cpp_FUN_0046f8c0
// Address: 0046f8c0
// Address Range: [[0046f8c0, 0046f8e2]]
// Convention: unknown
// Signature: undefined core_dest.cpp_FUN_0046f8c0()
// Cross-references:
//   core_dest.cpp_staticInit_FUN_0046f890 (0046f890) at 0046f89c [DATA]
// Globals:
//   TerminatedCString s_core_dest_cpp_0061e38c
// Function calls:
//   core_dest.cpp_FUN_0046f900
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_dest_cpp_FUN_0046f8c0(void)

{
  CActorDestination *this_ptr;
  
  this_ptr = (CActorDestination *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(500,"..\\core\\dest.cpp",0x29);
  if (this_ptr == (CActorDestination *)0x0) {
    return;
  }
  core_dest_cpp_FUN_0046f900(this_ptr);
  return;
}


// Assembly code:
// 0046f8c0: PUSH 0x29
//   Label: core_dest.cpp_FUN_0046f8c0
// 0046f8c2: PUSH 0x61e38c
//   XREF to: 0061e38c (DATA)
// 0046f8c7: PUSH 0x1f4
// 0046f8cc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0046f8d1: ADD ESP,0xc
// 0046f8d4: TEST EAX,EAX
// 0046f8d6: JNZ 0x0046f8d9
//   XREF to: 0046f8d9 (CONDITIONAL_JUMP)
// 0046f8d8: RET
// 0046f8d9: PUSH EAX
//   Label: LAB_0046f8d9
// 0046f8da: CALL core_dest.cpp_FUN_0046f900
//   XREF to: 0046f900 (UNCONDITIONAL_CALL)
// 0046f8df: ADD ESP,0x4
// 0046f8e2: RET
