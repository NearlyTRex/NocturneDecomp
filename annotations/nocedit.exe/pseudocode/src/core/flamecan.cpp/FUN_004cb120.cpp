// Name: core_flamecan.cpp_FUN_004cb120
// Address: 004cb120
// Address Range: [[004cb120, 004cb142]]
// Convention: unknown
// Signature: undefined core_flamecan.cpp_FUN_004cb120()
// Cross-references:
//   core_flamecan.cpp_staticInit_FUN_004cb0f0 (004cb0f0) at 004cb0fc [DATA]
// Globals:
//   TerminatedCString s_core_flamecan_cpp_0062a2b2
// Function calls:
//   core_flamecan.cpp_FUN_004cb160
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_flamecan_cpp_FUN_004cb120(void)

{
  CFlameCan *this_ptr;
  
  this_ptr = (CFlameCan *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x5e8,"..\\core\\flamecan.cpp",0x22);
  if (this_ptr == (CFlameCan *)0x0) {
    return;
  }
  core_flamecan_cpp_FUN_004cb160(this_ptr);
  return;
}


// Assembly code:
// 004cb120: PUSH 0x22
//   Label: core_flamecan.cpp_FUN_004cb120
// 004cb122: PUSH 0x62a2b2
//   XREF to: 0062a2b2 (DATA)
// 004cb127: PUSH 0x5e8
// 004cb12c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004cb131: ADD ESP,0xc
// 004cb134: TEST EAX,EAX
// 004cb136: JNZ 0x004cb139
//   XREF to: 004cb139 (CONDITIONAL_JUMP)
// 004cb138: RET
// 004cb139: PUSH EAX
//   Label: LAB_004cb139
// 004cb13a: CALL core_flamecan.cpp_FUN_004cb160
//   XREF to: 004cb160 (UNCONDITIONAL_CALL)
// 004cb13f: ADD ESP,0x4
// 004cb142: RET
