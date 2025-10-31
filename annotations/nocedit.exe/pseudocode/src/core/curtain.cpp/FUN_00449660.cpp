// Name: core_curtain.cpp_FUN_00449660
// Address: 00449660
// Address Range: [[00449660, 00449682]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_00449660()
// Cross-references:
//   core_curtain.cpp_staticInit_FUN_00449610 (00449610) at 00449644 [DATA]
// Globals:
//   TerminatedCString s_core_curtain_cpp_00619bc3
// Function calls:
//   core_curtain.cpp_FUN_004496a0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_curtain_cpp_FUN_00449660(void)

{
  CCurtain *this_ptr;
  
  this_ptr = (CCurtain *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x65b38,"..\\core\\curtain.cpp",0x36);
  if (this_ptr == (CCurtain *)0x0) {
    return;
  }
  core_curtain_cpp_FUN_004496a0(this_ptr);
  return;
}


// Assembly code:
// 00449660: PUSH 0x36
//   Label: core_curtain.cpp_FUN_00449660
// 00449662: PUSH 0x619bc3
//   XREF to: 00619bc3 (DATA)
// 00449667: PUSH 0x65b38
// 0044966c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00449671: ADD ESP,0xc
// 00449674: TEST EAX,EAX
// 00449676: JNZ 0x00449679
//   XREF to: 00449679 (CONDITIONAL_JUMP)
// 00449678: RET
// 00449679: PUSH EAX
//   Label: LAB_00449679
// 0044967a: CALL core_curtain.cpp_FUN_004496a0
//   XREF to: 004496a0 (UNCONDITIONAL_CALL)
// 0044967f: ADD ESP,0x4
// 00449682: RET
