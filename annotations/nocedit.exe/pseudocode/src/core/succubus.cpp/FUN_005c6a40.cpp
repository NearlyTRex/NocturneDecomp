// Name: core_succubus.cpp_FUN_005c6a40
// Address: 005c6a40
// Address Range: [[005c6a40, 005c6a62]]
// Convention: unknown
// Signature: undefined core_succubus.cpp_FUN_005c6a40()
// Cross-references:
//   core_succubus.cpp_staticInit_FUN_005c6a10 (005c6a10) at 005c6a1c [DATA]
// Globals:
//   TerminatedCString s_core_succubus_cpp_00653fc3
// Function calls:
//   core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_succubus_cpp_FUN_005c6a40(void)

{
  CSuccubus *this_ptr;
  
  this_ptr = (CSuccubus *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xef68,"..\\core\\succubus.cpp",0x4b);
  if (this_ptr == (CSuccubus *)0x0) {
    return;
  }
  core_succubus_cpp_CSuccubus_ctor_FUN_005c6a80(this_ptr);
  return;
}


// Assembly code:
// 005c6a40: PUSH 0x4b
//   Label: core_succubus.cpp_FUN_005c6a40
// 005c6a42: PUSH 0x653fc3
//   XREF to: 00653fc3 (DATA)
// 005c6a47: PUSH 0xef68
// 005c6a4c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005c6a51: ADD ESP,0xc
// 005c6a54: TEST EAX,EAX
// 005c6a56: JNZ 0x005c6a59
//   XREF to: 005c6a59 (CONDITIONAL_JUMP)
// 005c6a58: RET
// 005c6a59: PUSH EAX
//   Label: LAB_005c6a59
// 005c6a5a: CALL core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80
//   XREF to: 005c6a80 (UNCONDITIONAL_CALL)
// 005c6a5f: ADD ESP,0x4
// 005c6a62: RET
