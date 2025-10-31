// Name: core_beast.cpp_constructor_FUN_004181e0
// Address: 004181e0
// Address Range: [[004181e0, 00418202]]
// Convention: unknown
// Signature: undefined core_beast.cpp_constructor_FUN_004181e0()
// Cross-references:
//   core_beast.cpp_staticInit_FUN_004181b0 (004181b0) at 004181bc [DATA]
// Globals:
//   TerminatedCString s_core_beast_cpp_00615a5c
// Function calls:
//   core_beast.cpp_CBeast_ctor_FUN_00418220
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_beast_cpp_constructor_FUN_004181e0(void)

{
  CBeast *this_ptr;
  
  this_ptr = (CBeast *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbebc,"..\\core\\beast.cpp",0x2d);
  if (this_ptr == (CBeast *)0x0) {
    return;
  }
  core_beast_cpp_CBeast_ctor_FUN_00418220(this_ptr);
  return;
}


// Assembly code:
// 004181e0: PUSH 0x2d
//   Label: core_beast.cpp_constructor_FUN_004181e0
// 004181e2: PUSH 0x615a5c
//   XREF to: 00615a5c (DATA)
// 004181e7: PUSH 0xbebc
// 004181ec: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004181f1: ADD ESP,0xc
// 004181f4: TEST EAX,EAX
// 004181f6: JNZ 0x004181f9
//   XREF to: 004181f9 (CONDITIONAL_JUMP)
// 004181f8: RET
// 004181f9: PUSH EAX
//   Label: LAB_004181f9
// 004181fa: CALL core_beast.cpp_CBeast_ctor_FUN_00418220
//   XREF to: 00418220 (UNCONDITIONAL_CALL)
// 004181ff: ADD ESP,0x4
// 00418202: RET
