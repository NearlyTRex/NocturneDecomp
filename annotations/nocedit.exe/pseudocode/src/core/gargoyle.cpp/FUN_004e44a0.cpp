// Name: core_gargoyle.cpp_FUN_004e44a0
// Address: 004e44a0
// Address Range: [[004e44a0, 004e44c2]]
// Convention: unknown
// Signature: undefined core_gargoyle.cpp_FUN_004e44a0()
// Cross-references:
//   core_gargoyle.cpp_staticInit_FUN_004e4470 (004e4470) at 004e447c [DATA]
// Globals:
//   TerminatedCString s_core_gargoyle_cpp_0062d7c1
// Function calls:
//   core_gargoyle.cpp_FUN_004e44e0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_gargoyle_cpp_FUN_004e44a0(void)

{
  CGargoyle *this_ptr;
  
  this_ptr = (CGargoyle *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbf18,"..\\core\\gargoyle.cpp",0x58);
  if (this_ptr == (CGargoyle *)0x0) {
    return;
  }
  core_gargoyle_cpp_FUN_004e44e0(this_ptr);
  return;
}


// Assembly code:
// 004e44a0: PUSH 0x58
//   Label: core_gargoyle.cpp_FUN_004e44a0
// 004e44a2: PUSH 0x62d7c1
//   XREF to: 0062d7c1 (DATA)
// 004e44a7: PUSH 0xbf18
// 004e44ac: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004e44b1: ADD ESP,0xc
// 004e44b4: TEST EAX,EAX
// 004e44b6: JNZ 0x004e44b9
//   XREF to: 004e44b9 (CONDITIONAL_JUMP)
// 004e44b8: RET
// 004e44b9: PUSH EAX
//   Label: LAB_004e44b9
// 004e44ba: CALL core_gargoyle.cpp_FUN_004e44e0
//   XREF to: 004e44e0 (UNCONDITIONAL_CALL)
// 004e44bf: ADD ESP,0x4
// 004e44c2: RET
