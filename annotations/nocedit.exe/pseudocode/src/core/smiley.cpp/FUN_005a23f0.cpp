// Name: core_smiley.cpp_FUN_005a23f0
// Address: 005a23f0
// Address Range: [[005a23f0, 005a2412]]
// Convention: unknown
// Signature: undefined core_smiley.cpp_FUN_005a23f0()
// Cross-references:
//   core_smiley.cpp_staticInit_FUN_005a23c0 (005a23c0) at 005a23cc [DATA]
// Globals:
//   TerminatedCString s_core_smiley_cpp_0064f152
// Function calls:
//   core_smiley.cpp_CSmiley_ctor_FUN_005a2430
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_smiley_cpp_FUN_005a23f0(void)

{
  CSmiley *this_ptr;
  
  this_ptr = (CSmiley *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbf00,"..\\core\\smiley.cpp",0x6e);
  if (this_ptr == (CSmiley *)0x0) {
    return;
  }
  core_smiley_cpp_CSmiley_ctor_FUN_005a2430(this_ptr);
  return;
}


// Assembly code:
// 005a23f0: PUSH 0x6e
//   Label: core_smiley.cpp_FUN_005a23f0
// 005a23f2: PUSH 0x64f152
//   XREF to: 0064f152 (DATA)
// 005a23f7: PUSH 0xbf00
// 005a23fc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005a2401: ADD ESP,0xc
// 005a2404: TEST EAX,EAX
// 005a2406: JNZ 0x005a2409
//   XREF to: 005a2409 (CONDITIONAL_JUMP)
// 005a2408: RET
// 005a2409: PUSH EAX
//   Label: LAB_005a2409
// 005a240a: CALL core_smiley.cpp_CSmiley_ctor_FUN_005a2430
//   XREF to: 005a2430 (UNCONDITIONAL_CALL)
// 005a240f: ADD ESP,0x4
// 005a2412: RET
