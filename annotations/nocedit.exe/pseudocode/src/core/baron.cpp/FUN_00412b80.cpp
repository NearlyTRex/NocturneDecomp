// Name: core_baron.cpp_FUN_00412b80
// Address: 00412b80
// Address Range: [[00412b80, 00412ba2]]
// Convention: unknown
// Signature: undefined core_baron.cpp_FUN_00412b80()
// Cross-references:
//   core_baron.cpp_staticInit_FUN_00412b20 (00412b20) at 00412b2c [DATA]
// Globals:
//   TerminatedCString s_core_baron_cpp_00614ec5
// Function calls:
//   core_baron.cpp_CBaron_ctor_FUN_00412bc0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_baron_cpp_FUN_00412b80(void)

{
  CBaron *this_ptr;
  
  this_ptr = (CBaron *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1fcd4,"..\\core\\baron.cpp",0x52);
  if (this_ptr == (CBaron *)0x0) {
    return;
  }
  core_baron_cpp_CBaron_ctor_FUN_00412bc0(this_ptr);
  return;
}


// Assembly code:
// 00412b80: PUSH 0x52
//   Label: core_baron.cpp_FUN_00412b80
// 00412b82: PUSH 0x614ec5
//   XREF to: 00614ec5 (DATA)
// 00412b87: PUSH 0x1fcd4
// 00412b8c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00412b91: ADD ESP,0xc
// 00412b94: TEST EAX,EAX
// 00412b96: JNZ 0x00412b99
//   XREF to: 00412b99 (CONDITIONAL_JUMP)
// 00412b98: RET
// 00412b99: PUSH EAX
//   Label: LAB_00412b99
// 00412b9a: CALL core_baron.cpp_CBaron_ctor_FUN_00412bc0
//   XREF to: 00412bc0 (UNCONDITIONAL_CALL)
// 00412b9f: ADD ESP,0x4
// 00412ba2: RET
