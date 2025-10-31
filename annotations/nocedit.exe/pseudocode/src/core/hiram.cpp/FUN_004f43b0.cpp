// Name: core_hiram.cpp_FUN_004f43b0
// Address: 004f43b0
// Address Range: [[004f43b0, 004f43d2]]
// Convention: unknown
// Signature: undefined core_hiram.cpp_FUN_004f43b0()
// Cross-references:
//   core_hiram.cpp_staticInit_FUN_004f4380 (004f4380) at 004f438c [DATA]
// Globals:
//   TerminatedCString s_core_hiram_cpp_0062edd6
// Function calls:
//   core_hiram.cpp_FUN_004f43f0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_hiram_cpp_FUN_004f43b0(void)

{
  CHiram *this_ptr;
  
  this_ptr = (CHiram *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1f76c,"..\\core\\hiram.cpp",0x2c);
  if (this_ptr == (CHiram *)0x0) {
    return;
  }
  core_hiram_cpp_FUN_004f43f0(this_ptr);
  return;
}


// Assembly code:
// 004f43b0: PUSH 0x2c
//   Label: core_hiram.cpp_FUN_004f43b0
// 004f43b2: PUSH 0x62edd6
//   XREF to: 0062edd6 (DATA)
// 004f43b7: PUSH 0x1f76c
// 004f43bc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004f43c1: ADD ESP,0xc
// 004f43c4: TEST EAX,EAX
// 004f43c6: JNZ 0x004f43c9
//   XREF to: 004f43c9 (CONDITIONAL_JUMP)
// 004f43c8: RET
// 004f43c9: PUSH EAX
//   Label: LAB_004f43c9
// 004f43ca: CALL core_hiram.cpp_FUN_004f43f0
//   XREF to: 004f43f0 (UNCONDITIONAL_CALL)
// 004f43cf: ADD ESP,0x4
// 004f43d2: RET
