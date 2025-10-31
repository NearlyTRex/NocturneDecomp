// Name: core_icepick.cpp_FUN_004f7db0
// Address: 004f7db0
// Address Range: [[004f7db0, 004f7dd2]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f7db0()
// Cross-references:
//   core_icepick.cpp_staticInit_FUN_004f7d80 (004f7d80) at 004f7d8c [DATA]
// Globals:
//   TerminatedCString s_core_icepick_cpp_0062f594
// Function calls:
//   core_icepick.cpp_FUN_004f7df0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_icepick_cpp_FUN_004f7db0(void)

{
  CIcePick *this_ptr;
  
  this_ptr = (CIcePick *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1fc04,"..\\core\\icepick.cpp",0x66);
  if (this_ptr == (CIcePick *)0x0) {
    return;
  }
  core_icepick_cpp_FUN_004f7df0(this_ptr);
  return;
}


// Assembly code:
// 004f7db0: PUSH 0x66
//   Label: core_icepick.cpp_FUN_004f7db0
// 004f7db2: PUSH 0x62f594
//   XREF to: 0062f594 (DATA)
// 004f7db7: PUSH 0x1fc04
// 004f7dbc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004f7dc1: ADD ESP,0xc
// 004f7dc4: TEST EAX,EAX
// 004f7dc6: JNZ 0x004f7dc9
//   XREF to: 004f7dc9 (CONDITIONAL_JUMP)
// 004f7dc8: RET
// 004f7dc9: PUSH EAX
//   Label: LAB_004f7dc9
// 004f7dca: CALL core_icepick.cpp_FUN_004f7df0
//   XREF to: 004f7df0 (UNCONDITIONAL_CALL)
// 004f7dcf: ADD ESP,0x4
// 004f7dd2: RET
