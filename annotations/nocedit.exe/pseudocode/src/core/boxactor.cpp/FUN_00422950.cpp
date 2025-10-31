// Name: core_boxactor.cpp_FUN_00422950
// Address: 00422950
// Address Range: [[00422950, 00422975]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422950()
// Cross-references:
//   core_boxactor.cpp_staticInit_FUN_00421650 (00421650) at 004216a0 [DATA]
// Globals:
//   TerminatedCString s_core_boxactor_cpp_006168f3
// Function calls:
//   core_boxactor.cpp_CLightActor_ctor_FUN_00422990
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_boxactor_cpp_FUN_00422950(void)

{
  CLightActor *this_ptr;
  
  this_ptr = (CLightActor *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3678,"..\\core\\boxactor.cpp",0x2e3);
  if (this_ptr == (CLightActor *)0x0) {
    return;
  }
  core_boxactor_cpp_CLightActor_ctor_FUN_00422990(this_ptr);
  return;
}


// Assembly code:
// 00422950: PUSH 0x2e3
//   Label: core_boxactor.cpp_FUN_00422950
// 00422955: PUSH 0x6168f3
//   XREF to: 006168f3 (DATA)
// 0042295a: PUSH 0x3678
// 0042295f: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00422964: ADD ESP,0xc
// 00422967: TEST EAX,EAX
// 00422969: JNZ 0x0042296c
//   XREF to: 0042296c (CONDITIONAL_JUMP)
// 0042296b: RET
// 0042296c: PUSH EAX
//   Label: LAB_0042296c
// 0042296d: CALL core_boxactor.cpp_CLightActor_ctor_FUN_00422990
//   XREF to: 00422990 (UNCONDITIONAL_CALL)
// 00422972: ADD ESP,0x4
// 00422975: RET
