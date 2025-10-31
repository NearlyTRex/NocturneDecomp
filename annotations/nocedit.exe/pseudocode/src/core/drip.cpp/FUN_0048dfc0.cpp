// Name: core_drip.cpp_FUN_0048dfc0
// Address: 0048dfc0
// Address Range: [[0048dfc0, 0048dfe2]]
// Convention: unknown
// Signature: undefined core_drip.cpp_FUN_0048dfc0()
// Cross-references:
//   core_drip.cpp_staticInit_FUN_0048df80 (0048df80) at 0048df8c [DATA]
// Globals:
//   TerminatedCString s_core_drip_cpp_00622205
// Function calls:
//   core_drip.cpp_ctor_FUN_0048e000
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_drip_cpp_FUN_0048dfc0(void)

{
  CDrip *this_ptr;
  
  this_ptr = (CDrip *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x33c,"..\\core\\drip.cpp",0x32);
  if (this_ptr == (CDrip *)0x0) {
    return;
  }
  core_drip_cpp_ctor_FUN_0048e000(this_ptr);
  return;
}


// Assembly code:
// 0048dfc0: PUSH 0x32
//   Label: core_drip.cpp_FUN_0048dfc0
// 0048dfc2: PUSH 0x622205
//   XREF to: 00622205 (DATA)
// 0048dfc7: PUSH 0x33c
// 0048dfcc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0048dfd1: ADD ESP,0xc
// 0048dfd4: TEST EAX,EAX
// 0048dfd6: JNZ 0x0048dfd9
//   XREF to: 0048dfd9 (CONDITIONAL_JUMP)
// 0048dfd8: RET
// 0048dfd9: PUSH EAX
//   Label: LAB_0048dfd9
// 0048dfda: CALL core_drip.cpp_ctor_FUN_0048e000
//   XREF to: 0048e000 (UNCONDITIONAL_CALL)
// 0048dfdf: ADD ESP,0x4
// 0048dfe2: RET
