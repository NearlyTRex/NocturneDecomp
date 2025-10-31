// Name: core_crossbow.cpp_FUN_00448c30
// Address: 00448c30
// Address Range: [[00448c30, 00448c52]]
// Convention: unknown
// Signature: undefined core_crossbow.cpp_FUN_00448c30()
// Cross-references:
//   core_crossbow.cpp_staticInit_FUN_00448c00 (00448c00) at 00448c0c [DATA]
// Globals:
//   TerminatedCString s_core_crossbow_cpp_00619b64
// Function calls:
//   core_crossbow.cpp_FUN_00448c70
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_crossbow_cpp_FUN_00448c30(void)

{
  CCrossbow *this_ptr;
  
  this_ptr = (CCrossbow *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x820,"..\\core\\crossbow.cpp",0x2f);
  if (this_ptr == (CCrossbow *)0x0) {
    return;
  }
  core_crossbow_cpp_FUN_00448c70(this_ptr);
  return;
}


// Assembly code:
// 00448c30: PUSH 0x2f
//   Label: core_crossbow.cpp_FUN_00448c30
// 00448c32: PUSH 0x619b64
//   XREF to: 00619b64 (DATA)
// 00448c37: PUSH 0x820
// 00448c3c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00448c41: ADD ESP,0xc
// 00448c44: TEST EAX,EAX
// 00448c46: JNZ 0x00448c49
//   XREF to: 00448c49 (CONDITIONAL_JUMP)
// 00448c48: RET
// 00448c49: PUSH EAX
//   Label: LAB_00448c49
// 00448c4a: CALL core_crossbow.cpp_FUN_00448c70
//   XREF to: 00448c70 (UNCONDITIONAL_CALL)
// 00448c4f: ADD ESP,0x4
// 00448c52: RET
