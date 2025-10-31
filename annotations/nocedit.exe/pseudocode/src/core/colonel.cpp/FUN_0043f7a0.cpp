// Name: core_colonel.cpp_FUN_0043f7a0
// Address: 0043f7a0
// Address Range: [[0043f7a0, 0043f7c2]]
// Convention: unknown
// Signature: undefined core_colonel.cpp_FUN_0043f7a0()
// Cross-references:
//   core_colonel.cpp_staticInit_FUN_0043f770 (0043f770) at 0043f77c [DATA]
// Globals:
//   TerminatedCString s_core_colonel_cpp_00618b7a
// Function calls:
//   core_colonel.cpp_CColonel_ctor_FUN_0043f7e0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_colonel_cpp_FUN_0043f7a0(void)

{
  CColonel *this_ptr;
  
  this_ptr = (CColonel *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1fbec,"..\\core\\colonel.cpp",0x7e);
  if (this_ptr == (CColonel *)0x0) {
    return;
  }
  core_colonel_cpp_CColonel_ctor_FUN_0043f7e0(this_ptr);
  return;
}


// Assembly code:
// 0043f7a0: PUSH 0x7e
//   Label: core_colonel.cpp_FUN_0043f7a0
// 0043f7a2: PUSH 0x618b7a
//   XREF to: 00618b7a (DATA)
// 0043f7a7: PUSH 0x1fbec
// 0043f7ac: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0043f7b1: ADD ESP,0xc
// 0043f7b4: TEST EAX,EAX
// 0043f7b6: JNZ 0x0043f7b9
//   XREF to: 0043f7b9 (CONDITIONAL_JUMP)
// 0043f7b8: RET
// 0043f7b9: PUSH EAX
//   Label: LAB_0043f7b9
// 0043f7ba: CALL core_colonel.cpp_CColonel_ctor_FUN_0043f7e0
//   XREF to: 0043f7e0 (UNCONDITIONAL_CALL)
// 0043f7bf: ADD ESP,0x4
// 0043f7c2: RET
