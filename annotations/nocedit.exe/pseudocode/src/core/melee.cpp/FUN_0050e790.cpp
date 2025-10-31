// Name: core_melee.cpp_FUN_0050e790
// Address: 0050e790
// Address Range: [[0050e790, 0050e7b2]]
// Convention: unknown
// Signature: undefined core_melee.cpp_FUN_0050e790()
// Cross-references:
//   core_melee.cpp_staticInit_FUN_0050e760 (0050e760) at 0050e76c [DATA]
// Globals:
//   TerminatedCString s_core_melee_cpp_00635bc4
// Function calls:
//   core_melee.cpp_FUN_0050e7d0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_melee_cpp_FUN_0050e790(void)

{
  CMelee *this_ptr;
  
  this_ptr = (CMelee *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x6cc,"..\\core\\melee.cpp",0x26);
  if (this_ptr == (CMelee *)0x0) {
    return;
  }
  core_melee_cpp_FUN_0050e7d0(this_ptr);
  return;
}


// Assembly code:
// 0050e790: PUSH 0x26
//   Label: core_melee.cpp_FUN_0050e790
// 0050e792: PUSH 0x635bc4
//   XREF to: 00635bc4 (DATA)
// 0050e797: PUSH 0x6cc
// 0050e79c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0050e7a1: ADD ESP,0xc
// 0050e7a4: TEST EAX,EAX
// 0050e7a6: JNZ 0x0050e7a9
//   XREF to: 0050e7a9 (CONDITIONAL_JUMP)
// 0050e7a8: RET
// 0050e7a9: PUSH EAX
//   Label: LAB_0050e7a9
// 0050e7aa: CALL core_melee.cpp_FUN_0050e7d0
//   XREF to: 0050e7d0 (UNCONDITIONAL_CALL)
// 0050e7af: ADD ESP,0x4
// 0050e7b2: RET
