// Name: core_stranger.cpp_FUN_005bb0e0
// Address: 005bb0e0
// Address Range: [[005bb0e0, 005bb105]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_FUN_005bb0e0()
// Cross-references:
//   core_stranger.cpp_staticInit_FUN_005bae80 (005bae80) at 005baea2 [DATA]
// Globals:
//   TerminatedCString s_core_stranger_cpp_006531b4
// Function calls:
//   core_stranger.cpp_CStranger_ctor_FUN_005bb120
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_stranger_cpp_FUN_005bb0e0(void)

{
  CStranger *this_ptr;
  
  this_ptr = (CStranger *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1fe70,"..\\core\\stranger.cpp",0x1d3);
  if (this_ptr == (CStranger *)0x0) {
    return;
  }
  core_stranger_cpp_CStranger_ctor_FUN_005bb120(this_ptr);
  return;
}


// Assembly code:
// 005bb0e0: PUSH 0x1d3
//   Label: core_stranger.cpp_FUN_005bb0e0
// 005bb0e5: PUSH 0x6531b4
//   XREF to: 006531b4 (DATA)
// 005bb0ea: PUSH 0x1fe70
// 005bb0ef: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005bb0f4: ADD ESP,0xc
// 005bb0f7: TEST EAX,EAX
// 005bb0f9: JNZ 0x005bb0fc
//   XREF to: 005bb0fc (CONDITIONAL_JUMP)
// 005bb0fb: RET
// 005bb0fc: PUSH EAX
//   Label: LAB_005bb0fc
// 005bb0fd: CALL core_stranger.cpp_CStranger_ctor_FUN_005bb120
//   XREF to: 005bb120 (UNCONDITIONAL_CALL)
// 005bb102: ADD ESP,0x4
// 005bb105: RET
