// Name: core_mimic.cpp_FUN_0051f190
// Address: 0051f190
// Address Range: [[0051f190, 0051f1b2]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_FUN_0051f190()
// Cross-references:
//   core_mimic.cpp_staticInit_FUN_0051f100 (0051f100) at 0051f10c [DATA]
// Globals:
//   TerminatedCString s_core_mimic_cpp_00638542
// Function calls:
//   core_mimic.cpp_FUN_0051f1d0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_mimic_cpp_FUN_0051f190(void)

{
  CMimic *this_ptr;
  
  this_ptr = (CMimic *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x4ca58,"..\\core\\mimic.cpp",0x77);
  if (this_ptr == (CMimic *)0x0) {
    return;
  }
  core_mimic_cpp_FUN_0051f1d0(this_ptr);
  return;
}


// Assembly code:
// 0051f190: PUSH 0x77
//   Label: core_mimic.cpp_FUN_0051f190
// 0051f192: PUSH 0x638542
//   XREF to: 00638542 (DATA)
// 0051f197: PUSH 0x4ca58
// 0051f19c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0051f1a1: ADD ESP,0xc
// 0051f1a4: TEST EAX,EAX
// 0051f1a6: JNZ 0x0051f1a9
//   XREF to: 0051f1a9 (CONDITIONAL_JUMP)
// 0051f1a8: RET
// 0051f1a9: PUSH EAX
//   Label: LAB_0051f1a9
// 0051f1aa: CALL core_mimic.cpp_FUN_0051f1d0
//   XREF to: 0051f1d0 (UNCONDITIONAL_CALL)
// 0051f1af: ADD ESP,0x4
// 0051f1b2: RET
