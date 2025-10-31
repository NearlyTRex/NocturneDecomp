// Name: core_emitter.cpp_FUN_004a7c60
// Address: 004a7c60
// Address Range: [[004a7c60, 004a7c82]]
// Convention: unknown
// Signature: undefined core_emitter.cpp_FUN_004a7c60()
// Cross-references:
//   core_emitter.cpp_staticInit_FUN_004a7c30 (004a7c30) at 004a7c3c [DATA]
// Globals:
//   TerminatedCString s_core_emitter_cpp_00624053
// Function calls:
//   core_emitter.cpp_ctor_FUN_004a7ca0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_emitter_cpp_FUN_004a7c60(void)

{
  CEmitter *this_ptr;
  
  this_ptr = (CEmitter *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x494,"..\\core\\emitter.cpp",0x3a);
  if (this_ptr == (CEmitter *)0x0) {
    return;
  }
  core_emitter_cpp_ctor_FUN_004a7ca0(this_ptr);
  return;
}


// Assembly code:
// 004a7c60: PUSH 0x3a
//   Label: core_emitter.cpp_FUN_004a7c60
// 004a7c62: PUSH 0x624053
//   XREF to: 00624053 (DATA)
// 004a7c67: PUSH 0x494
// 004a7c6c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004a7c71: ADD ESP,0xc
// 004a7c74: TEST EAX,EAX
// 004a7c76: JNZ 0x004a7c79
//   XREF to: 004a7c79 (CONDITIONAL_JUMP)
// 004a7c78: RET
// 004a7c79: PUSH EAX
//   Label: LAB_004a7c79
// 004a7c7a: CALL core_emitter.cpp_ctor_FUN_004a7ca0
//   XREF to: 004a7ca0 (UNCONDITIONAL_CALL)
// 004a7c7f: ADD ESP,0x4
// 004a7c82: RET
