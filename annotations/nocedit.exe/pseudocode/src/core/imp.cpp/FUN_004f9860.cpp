// Name: core_imp.cpp_FUN_004f9860
// Address: 004f9860
// Address Range: [[004f9860, 004f9882]]
// Convention: unknown
// Signature: undefined core_imp.cpp_FUN_004f9860()
// Cross-references:
//   core_imp.cpp_staticInit_FUN_004f9830 (004f9830) at 004f983c [DATA]
// Globals:
//   TerminatedCString s_core_imp_cpp_0062f823
// Function calls:
//   core_imp.cpp_FUN_004f98a0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_imp_cpp_FUN_004f9860(void)

{
  CImp *this_ptr;
  
  this_ptr = (CImp *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbef4,"..\\core\\imp.cpp",0x59);
  if (this_ptr == (CImp *)0x0) {
    return;
  }
  core_imp_cpp_FUN_004f98a0(this_ptr);
  return;
}


// Assembly code:
// 004f9860: PUSH 0x59
//   Label: core_imp.cpp_FUN_004f9860
// 004f9862: PUSH 0x62f823
//   XREF to: 0062f823 (DATA)
// 004f9867: PUSH 0xbef4
// 004f986c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004f9871: ADD ESP,0xc
// 004f9874: TEST EAX,EAX
// 004f9876: JNZ 0x004f9879
//   XREF to: 004f9879 (CONDITIONAL_JUMP)
// 004f9878: RET
// 004f9879: PUSH EAX
//   Label: LAB_004f9879
// 004f987a: CALL core_imp.cpp_FUN_004f98a0
//   XREF to: 004f98a0 (UNCONDITIONAL_CALL)
// 004f987f: ADD ESP,0x4
// 004f9882: RET
