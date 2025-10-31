// Name: core_frankgen.cpp_FUN_004d16e0
// Address: 004d16e0
// Address Range: [[004d16e0, 004d1702]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_FUN_004d16e0()
// Cross-references:
//   core_frankgen.cpp_staticInit_FUN_004d16b0 (004d16b0) at 004d16bc [DATA]
// Globals:
//   TerminatedCString s_core_frankgen_cpp_0062a8da
// Function calls:
//   core_frankgen.cpp_FUN_004d1720
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_frankgen_cpp_FUN_004d16e0(void)

{
  CFrankenstienMachine *this_ptr;
  
  this_ptr = (CFrankenstienMachine *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x49c,"..\\core\\frankgen.cpp",0x75);
  if (this_ptr == (CFrankenstienMachine *)0x0) {
    return;
  }
  core_frankgen_cpp_FUN_004d1720(this_ptr);
  return;
}


// Assembly code:
// 004d16e0: PUSH 0x75
//   Label: core_frankgen.cpp_FUN_004d16e0
// 004d16e2: PUSH 0x62a8da
//   XREF to: 0062a8da (DATA)
// 004d16e7: PUSH 0x49c
// 004d16ec: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004d16f1: ADD ESP,0xc
// 004d16f4: TEST EAX,EAX
// 004d16f6: JNZ 0x004d16f9
//   XREF to: 004d16f9 (CONDITIONAL_JUMP)
// 004d16f8: RET
// 004d16f9: PUSH EAX
//   Label: LAB_004d16f9
// 004d16fa: CALL core_frankgen.cpp_FUN_004d1720
//   XREF to: 004d1720 (UNCONDITIONAL_CALL)
// 004d16ff: ADD ESP,0x4
// 004d1702: RET
