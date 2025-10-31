// Name: core_hpriest.cpp_FUN_004f7b30
// Address: 004f7b30
// Address Range: [[004f7b30, 004f7b52]]
// Convention: unknown
// Signature: undefined core_hpriest.cpp_FUN_004f7b30()
// Cross-references:
//   core_hpriest.cpp_staticInit_FUN_004f7b00 (004f7b00) at 004f7b0c [DATA]
// Globals:
//   TerminatedCString s_core_hpriest_cpp_0062f549
// Function calls:
//   core_hpriest.cpp_FUN_004f7b70
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_hpriest_cpp_FUN_004f7b30(void)

{
  CHighPriestOfGardath *this_ptr;
  
  this_ptr = (CHighPriestOfGardath *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1f76c,"..\\core\\hpriest.cpp",0x1d);
  if (this_ptr == (CHighPriestOfGardath *)0x0) {
    return;
  }
  core_hpriest_cpp_FUN_004f7b70(this_ptr);
  return;
}


// Assembly code:
// 004f7b30: PUSH 0x1d
//   Label: core_hpriest.cpp_FUN_004f7b30
// 004f7b32: PUSH 0x62f549
//   XREF to: 0062f549 (DATA)
// 004f7b37: PUSH 0x1f76c
// 004f7b3c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004f7b41: ADD ESP,0xc
// 004f7b44: TEST EAX,EAX
// 004f7b46: JNZ 0x004f7b49
//   XREF to: 004f7b49 (CONDITIONAL_JUMP)
// 004f7b48: RET
// 004f7b49: PUSH EAX
//   Label: LAB_004f7b49
// 004f7b4a: CALL core_hpriest.cpp_FUN_004f7b70
//   XREF to: 004f7b70 (UNCONDITIONAL_CALL)
// 004f7b4f: ADD ESP,0x4
// 004f7b52: RET
