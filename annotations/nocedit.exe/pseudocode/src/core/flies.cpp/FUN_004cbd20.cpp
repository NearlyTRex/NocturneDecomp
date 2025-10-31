// Name: core_flies.cpp_FUN_004cbd20
// Address: 004cbd20
// Address Range: [[004cbd20, 004cbd42]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004cbd20()
// Cross-references:
//   core_flies.cpp_staticInit_FUN_004cbcf0 (004cbcf0) at 004cbcfc [DATA]
// Globals:
//   TerminatedCString s_core_flies_cpp_0062a3dd
// Function calls:
//   core_flies.cpp_FUN_004cbd60
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_flies_cpp_FUN_004cbd20(void)

{
  CFlies *this_ptr;
  
  this_ptr = (CFlies *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2a20,"..\\core\\flies.cpp",0x19);
  if (this_ptr == (CFlies *)0x0) {
    return;
  }
  core_flies_cpp_FUN_004cbd60(this_ptr);
  return;
}


// Assembly code:
// 004cbd20: PUSH 0x19
//   Label: core_flies.cpp_FUN_004cbd20
// 004cbd22: PUSH 0x62a3dd
//   XREF to: 0062a3dd (DATA)
// 004cbd27: PUSH 0x2a20
// 004cbd2c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004cbd31: ADD ESP,0xc
// 004cbd34: TEST EAX,EAX
// 004cbd36: JNZ 0x004cbd39
//   XREF to: 004cbd39 (CONDITIONAL_JUMP)
// 004cbd38: RET
// 004cbd39: PUSH EAX
//   Label: LAB_004cbd39
// 004cbd3a: CALL core_flies.cpp_FUN_004cbd60
//   XREF to: 004cbd60 (UNCONDITIONAL_CALL)
// 004cbd3f: ADD ESP,0x4
// 004cbd42: RET
