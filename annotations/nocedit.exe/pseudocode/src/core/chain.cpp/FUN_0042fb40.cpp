// Name: core_chain.cpp_FUN_0042fb40
// Address: 0042fb40
// Address Range: [[0042fb40, 0042fb62]]
// Convention: unknown
// Signature: undefined core_chain.cpp_FUN_0042fb40()
// Cross-references:
//   core_chain.cpp_staticInit_FUN_0042fb10 (0042fb10) at 0042fb1c [DATA]
// Globals:
//   TerminatedCString s_core_chain_cpp_00617791
// Function calls:
//   core_chain.cpp_CChain_ctor_FUN_0042fb80
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_chain_cpp_FUN_0042fb40(void)

{
  CChain *this_ptr;
  
  this_ptr = (CChain *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x578,"..\\core\\chain.cpp",0x30);
  if (this_ptr == (CChain *)0x0) {
    return;
  }
  core_chain_cpp_CChain_ctor_FUN_0042fb80(this_ptr);
  return;
}


// Assembly code:
// 0042fb40: PUSH 0x30
//   Label: core_chain.cpp_FUN_0042fb40
// 0042fb42: PUSH 0x617791
//   XREF to: 00617791 (DATA)
// 0042fb47: PUSH 0x578
// 0042fb4c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0042fb51: ADD ESP,0xc
// 0042fb54: TEST EAX,EAX
// 0042fb56: JNZ 0x0042fb59
//   XREF to: 0042fb59 (CONDITIONAL_JUMP)
// 0042fb58: RET
// 0042fb59: PUSH EAX
//   Label: LAB_0042fb59
// 0042fb5a: CALL core_chain.cpp_CChain_ctor_FUN_0042fb80
//   XREF to: 0042fb80 (UNCONDITIONAL_CALL)
// 0042fb5f: ADD ESP,0x4
// 0042fb62: RET
