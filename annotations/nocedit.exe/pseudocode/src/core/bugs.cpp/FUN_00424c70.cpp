// Name: core_bugs.cpp_FUN_00424c70
// Address: 00424c70
// Address Range: [[00424c70, 00424c92]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00424c70()
// Cross-references:
//   core_bugs.cpp_staticInit_FUN_00424c40 (00424c40) at 00424c4c [DATA]
// Globals:
//   TerminatedCString s_core_bugs_cpp_00616ccf
// Function calls:
//   core_bugs.cpp_CBugs_ctor_FUN_00424cb0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_bugs_cpp_FUN_00424c70(void)

{
  CBugs *this_ptr;
  
  this_ptr = (CBugs *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                                (0x199f8,"..\\core\\bugs.cpp",0x3e);
  if (this_ptr == (CBugs *)0x0) {
    return;
  }
  core_bugs_cpp_CBugs_ctor_FUN_00424cb0(this_ptr);
  return;
}


// Assembly code:
// 00424c70: PUSH 0x3e
//   Label: core_bugs.cpp_FUN_00424c70
// 00424c72: PUSH 0x616ccf
//   XREF to: 00616ccf (DATA)
// 00424c77: PUSH 0x199f8
// 00424c7c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00424c81: ADD ESP,0xc
// 00424c84: TEST EAX,EAX
// 00424c86: JNZ 0x00424c89
//   XREF to: 00424c89 (CONDITIONAL_JUMP)
// 00424c88: RET
// 00424c89: PUSH EAX
//   Label: LAB_00424c89
// 00424c8a: CALL core_bugs.cpp_CBugs_ctor_FUN_00424cb0
//   XREF to: 00424cb0 (UNCONDITIONAL_CALL)
// 00424c8f: ADD ESP,0x4
// 00424c92: RET
