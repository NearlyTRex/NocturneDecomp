// Name: core_pendulum.cpp_FUN_00549350
// Address: 00549350
// Address Range: [[00549350, 00549372]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_00549350()
// Cross-references:
//   core_pendulum.cpp_staticInit_FUN_00549320 (00549320) at 0054932c [DATA]
// Globals:
//   TerminatedCString s_core_pendulum_cpp_0063ec5b
// Function calls:
//   core_pendulum.cpp_CPendulum_ctor_FUN_00549390
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_pendulum_cpp_FUN_00549350(void)

{
  CPendulum *this_ptr;
  
  this_ptr = (CPendulum *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x444,"..\\core\\pendulum.cpp",0x2b);
  if (this_ptr == (CPendulum *)0x0) {
    return;
  }
  core_pendulum_cpp_CPendulum_ctor_FUN_00549390(this_ptr);
  return;
}


// Assembly code:
// 00549350: PUSH 0x2b
//   Label: core_pendulum.cpp_FUN_00549350
// 00549352: PUSH 0x63ec5b
//   XREF to: 0063ec5b (DATA)
// 00549357: PUSH 0x444
// 0054935c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00549361: ADD ESP,0xc
// 00549364: TEST EAX,EAX
// 00549366: JNZ 0x00549369
//   XREF to: 00549369 (CONDITIONAL_JUMP)
// 00549368: RET
// 00549369: PUSH EAX
//   Label: LAB_00549369
// 0054936a: CALL core_pendulum.cpp_CPendulum_ctor_FUN_00549390
//   XREF to: 00549390 (UNCONDITIONAL_CALL)
// 0054936f: ADD ESP,0x4
// 00549372: RET
