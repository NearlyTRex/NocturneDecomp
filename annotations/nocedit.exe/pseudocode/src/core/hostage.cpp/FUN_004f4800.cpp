// Name: core_hostage.cpp_FUN_004f4800
// Address: 004f4800
// Address Range: [[004f4800, 004f4822]]
// Convention: unknown
// Signature: undefined core_hostage.cpp_FUN_004f4800()
// Cross-references:
//   core_hostage.cpp_staticInit_FUN_004f47d0 (004f47d0) at 004f47dc [DATA]
// Globals:
//   TerminatedCString s_core_hostage_cpp_0062ee1b
// Function calls:
//   core_hostage.cpp_FUN_004f4840
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_hostage_cpp_FUN_004f4800(void)

{
  CHostage *this_ptr;
  
  this_ptr = (CHostage *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1faf0,"..\\core\\hostage.cpp",0x59);
  if (this_ptr == (CHostage *)0x0) {
    return;
  }
  core_hostage_cpp_FUN_004f4840(this_ptr);
  return;
}


// Assembly code:
// 004f4800: PUSH 0x59
//   Label: core_hostage.cpp_FUN_004f4800
// 004f4802: PUSH 0x62ee1b
//   XREF to: 0062ee1b (DATA)
// 004f4807: PUSH 0x1faf0
// 004f480c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004f4811: ADD ESP,0xc
// 004f4814: TEST EAX,EAX
// 004f4816: JNZ 0x004f4819
//   XREF to: 004f4819 (CONDITIONAL_JUMP)
// 004f4818: RET
// 004f4819: PUSH EAX
//   Label: LAB_004f4819
// 004f481a: CALL core_hostage.cpp_FUN_004f4840
//   XREF to: 004f4840 (UNCONDITIONAL_CALL)
// 004f481f: ADD ESP,0x4
// 004f4822: RET
