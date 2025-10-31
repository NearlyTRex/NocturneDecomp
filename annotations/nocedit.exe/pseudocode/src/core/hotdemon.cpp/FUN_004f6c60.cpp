// Name: core_hotdemon.cpp_FUN_004f6c60
// Address: 004f6c60
// Address Range: [[004f6c60, 004f6c82]]
// Convention: unknown
// Signature: undefined core_hotdemon.cpp_FUN_004f6c60()
// Cross-references:
//   core_hotdemon.cpp_staticInit_FUN_004f6c30 (004f6c30) at 004f6c3c [DATA]
// Globals:
//   TerminatedCString s_core_hotdemon_cpp_0062f342
// Function calls:
//   core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_hotdemon_cpp_FUN_004f6c60(void)

{
  CHotDemon *this_ptr;
  
  this_ptr = (CHotDemon *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbef0,"..\\core\\hotdemon.cpp",0x54);
  if (this_ptr == (CHotDemon *)0x0) {
    return;
  }
  core_hotdemon_cpp_CHotDemon_ctor_FUN_004f6ca0(this_ptr);
  return;
}


// Assembly code:
// 004f6c60: PUSH 0x54
//   Label: core_hotdemon.cpp_FUN_004f6c60
// 004f6c62: PUSH 0x62f342
//   XREF to: 0062f342 (DATA)
// 004f6c67: PUSH 0xbef0
// 004f6c6c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004f6c71: ADD ESP,0xc
// 004f6c74: TEST EAX,EAX
// 004f6c76: JNZ 0x004f6c79
//   XREF to: 004f6c79 (CONDITIONAL_JUMP)
// 004f6c78: RET
// 004f6c79: PUSH EAX
//   Label: LAB_004f6c79
// 004f6c7a: CALL core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0
//   XREF to: 004f6ca0 (UNCONDITIONAL_CALL)
// 004f6c7f: ADD ESP,0x4
// 004f6c82: RET
