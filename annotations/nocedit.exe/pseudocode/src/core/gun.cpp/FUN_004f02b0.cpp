// Name: core_gun.cpp_FUN_004f02b0
// Address: 004f02b0
// Address Range: [[004f02b0, 004f02d2]]
// Convention: unknown
// Signature: undefined core_gun.cpp_FUN_004f02b0()
// Cross-references:
//   core_gun.cpp_staticInit_FUN_004f0280 (004f0280) at 004f028c [DATA]
// Globals:
//   TerminatedCString s_core_gun_cpp_0062e788
// Function calls:
//   core_gun.cpp_FUN_004f02f0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_gun_cpp_FUN_004f02b0(void)

{
  CGun *this_ptr;
  
  this_ptr = (CGun *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x578,"..\\core\\gun.cpp",0x29);
  if (this_ptr == (CGun *)0x0) {
    return;
  }
  core_gun_cpp_FUN_004f02f0(this_ptr);
  return;
}


// Assembly code:
// 004f02b0: PUSH 0x29
//   Label: core_gun.cpp_FUN_004f02b0
// 004f02b2: PUSH 0x62e788
//   XREF to: 0062e788 (DATA)
// 004f02b7: PUSH 0x578
// 004f02bc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004f02c1: ADD ESP,0xc
// 004f02c4: TEST EAX,EAX
// 004f02c6: JNZ 0x004f02c9
//   XREF to: 004f02c9 (CONDITIONAL_JUMP)
// 004f02c8: RET
// 004f02c9: PUSH EAX
//   Label: LAB_004f02c9
// 004f02ca: CALL core_gun.cpp_FUN_004f02f0
//   XREF to: 004f02f0 (UNCONDITIONAL_CALL)
// 004f02cf: ADD ESP,0x4
// 004f02d2: RET
