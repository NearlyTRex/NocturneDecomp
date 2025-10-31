// Name: core_marquee.cpp_FUN_0050bb20
// Address: 0050bb20
// Address Range: [[0050bb20, 0050bb42]]
// Convention: unknown
// Signature: undefined core_marquee.cpp_FUN_0050bb20()
// Cross-references:
//   core_marquee.cpp_staticInit_FUN_0050baf0 (0050baf0) at 0050bafc [DATA]
// Globals:
//   TerminatedCString s_core_marquee_cpp_006359a3
// Function calls:
//   core_marquee.cpp_FUN_0050bb60
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_marquee_cpp_FUN_0050bb20(void)

{
  CMarquee *this_ptr;
  
  this_ptr = (CMarquee *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1bc,"..\\core\\marquee.cpp",0x22);
  if (this_ptr == (CMarquee *)0x0) {
    return;
  }
  core_marquee_cpp_FUN_0050bb60(this_ptr);
  return;
}


// Assembly code:
// 0050bb20: PUSH 0x22
//   Label: core_marquee.cpp_FUN_0050bb20
// 0050bb22: PUSH 0x6359a3
//   XREF to: 006359a3 (DATA)
// 0050bb27: PUSH 0x1bc
// 0050bb2c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0050bb31: ADD ESP,0xc
// 0050bb34: TEST EAX,EAX
// 0050bb36: JNZ 0x0050bb39
//   XREF to: 0050bb39 (CONDITIONAL_JUMP)
// 0050bb38: RET
// 0050bb39: PUSH EAX
//   Label: LAB_0050bb39
// 0050bb3a: CALL core_marquee.cpp_FUN_0050bb60
//   XREF to: 0050bb60 (UNCONDITIONAL_CALL)
// 0050bb3f: ADD ESP,0x4
// 0050bb42: RET
