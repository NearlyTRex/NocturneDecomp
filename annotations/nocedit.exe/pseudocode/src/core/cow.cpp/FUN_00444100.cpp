// Name: core_cow.cpp_FUN_00444100
// Address: 00444100
// Address Range: [[00444100, 00444122]]
// Convention: unknown
// Signature: undefined core_cow.cpp_FUN_00444100()
// Cross-references:
//   core_cow.cpp_staticInit_FUN_004440d0 (004440d0) at 004440dc [DATA]
// Globals:
//   TerminatedCString s_core_cow_cpp_00619460
// Function calls:
//   core_cow.cpp_FUN_00444140
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_cow_cpp_FUN_00444100(void)

{
  CZombieCow *this_ptr;
  
  this_ptr = (CZombieCow *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbef0,"..\\core\\cow.cpp",0x36);
  if (this_ptr == (CZombieCow *)0x0) {
    return;
  }
  core_cow_cpp_FUN_00444140(this_ptr);
  return;
}


// Assembly code:
// 00444100: PUSH 0x36
//   Label: core_cow.cpp_FUN_00444100
// 00444102: PUSH 0x619460
//   XREF to: 00619460 (DATA)
// 00444107: PUSH 0xbef0
// 0044410c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00444111: ADD ESP,0xc
// 00444114: TEST EAX,EAX
// 00444116: JNZ 0x00444119
//   XREF to: 00444119 (CONDITIONAL_JUMP)
// 00444118: RET
// 00444119: PUSH EAX
//   Label: LAB_00444119
// 0044411a: CALL core_cow.cpp_FUN_00444140
//   XREF to: 00444140 (UNCONDITIONAL_CALL)
// 0044411f: ADD ESP,0x4
// 00444122: RET
