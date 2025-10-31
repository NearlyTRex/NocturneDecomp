// Name: core_grave.cpp_FUN_004ee4d0
// Address: 004ee4d0
// Address Range: [[004ee4d0, 004ee4f2]]
// Convention: unknown
// Signature: undefined core_grave.cpp_FUN_004ee4d0()
// Cross-references:
//   core_grave.cpp_staticInit_FUN_004ee4a0 (004ee4a0) at 004ee4ac [DATA]
// Globals:
//   TerminatedCString s_core_grave_cpp_0062e46f
// Function calls:
//   core_grave.cpp_FUN_004ee510
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_grave_cpp_FUN_004ee4d0(void)

{
  CGrave *this_ptr;
  
  this_ptr = (CGrave *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3b0,"..\\core\\grave.cpp",0x26);
  if (this_ptr == (CGrave *)0x0) {
    return;
  }
  core_grave_cpp_FUN_004ee510(this_ptr);
  return;
}


// Assembly code:
// 004ee4d0: PUSH 0x26
//   Label: core_grave.cpp_FUN_004ee4d0
// 004ee4d2: PUSH 0x62e46f
//   XREF to: 0062e46f (DATA)
// 004ee4d7: PUSH 0x3b0
// 004ee4dc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004ee4e1: ADD ESP,0xc
// 004ee4e4: TEST EAX,EAX
// 004ee4e6: JNZ 0x004ee4e9
//   XREF to: 004ee4e9 (CONDITIONAL_JUMP)
// 004ee4e8: RET
// 004ee4e9: PUSH EAX
//   Label: LAB_004ee4e9
// 004ee4ea: CALL core_grave.cpp_FUN_004ee510
//   XREF to: 004ee510 (UNCONDITIONAL_CALL)
// 004ee4ef: ADD ESP,0x4
// 004ee4f2: RET
