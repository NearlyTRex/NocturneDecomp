// Name: core_manpuz.cpp_FUN_005088e0
// Address: 005088e0
// Address Range: [[005088e0, 00508905]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_005088e0()
// Cross-references:
//   core_manpuz.cpp_staticInit_FUN_00508890 (00508890) at 0050889c [DATA]
// Globals:
//   TerminatedCString s_core_manpuz_cpp_0063568e
// Function calls:
//   core_manpuz.cpp_FUN_00508920
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_manpuz_cpp_FUN_005088e0(void)

{
  CMansionPuzzleCircle *this_ptr;
  
  this_ptr = (CMansionPuzzleCircle *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1514,"..\\core\\manpuz.cpp",0xeb);
  if (this_ptr == (CMansionPuzzleCircle *)0x0) {
    return;
  }
  core_manpuz_cpp_FUN_00508920(this_ptr);
  return;
}


// Assembly code:
// 005088e0: PUSH 0xeb
//   Label: core_manpuz.cpp_FUN_005088e0
// 005088e5: PUSH 0x63568e
//   XREF to: 0063568e (DATA)
// 005088ea: PUSH 0x1514
// 005088ef: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005088f4: ADD ESP,0xc
// 005088f7: TEST EAX,EAX
// 005088f9: JNZ 0x005088fc
//   XREF to: 005088fc (CONDITIONAL_JUMP)
// 005088fb: RET
// 005088fc: PUSH EAX
//   Label: LAB_005088fc
// 005088fd: CALL core_manpuz.cpp_FUN_00508920
//   XREF to: 00508920 (UNCONDITIONAL_CALL)
// 00508902: ADD ESP,0x4
// 00508905: RET
