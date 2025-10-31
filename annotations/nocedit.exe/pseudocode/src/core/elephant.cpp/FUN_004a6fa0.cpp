// Name: core_elephant.cpp_FUN_004a6fa0
// Address: 004a6fa0
// Address Range: [[004a6fa0, 004a6fc2]]
// Convention: unknown
// Signature: undefined core_elephant.cpp_FUN_004a6fa0()
// Cross-references:
//   core_elephant.cpp_staticInit_FUN_004a6f70 (004a6f70) at 004a6f7c [DATA]
// Globals:
//   TerminatedCString s_core_elephant_cpp_00623faf
// Function calls:
//   core_elephant.cpp_ctor_FUN_004a6fe0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_elephant_cpp_FUN_004a6fa0(void)

{
  CElephantGun *this_ptr;
  
  this_ptr = (CElephantGun *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x584,"..\\core\\elephant.cpp",0x2e);
  if (this_ptr == (CElephantGun *)0x0) {
    return;
  }
  core_elephant_cpp_ctor_FUN_004a6fe0(this_ptr);
  return;
}


// Assembly code:
// 004a6fa0: PUSH 0x2e
//   Label: core_elephant.cpp_FUN_004a6fa0
// 004a6fa2: PUSH 0x623faf
//   XREF to: 00623faf (DATA)
// 004a6fa7: PUSH 0x584
// 004a6fac: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004a6fb1: ADD ESP,0xc
// 004a6fb4: TEST EAX,EAX
// 004a6fb6: JNZ 0x004a6fb9
//   XREF to: 004a6fb9 (CONDITIONAL_JUMP)
// 004a6fb8: RET
// 004a6fb9: PUSH EAX
//   Label: LAB_004a6fb9
// 004a6fba: CALL core_elephant.cpp_ctor_FUN_004a6fe0
//   XREF to: 004a6fe0 (UNCONDITIONAL_CALL)
// 004a6fbf: ADD ESP,0x4
// 004a6fc2: RET
