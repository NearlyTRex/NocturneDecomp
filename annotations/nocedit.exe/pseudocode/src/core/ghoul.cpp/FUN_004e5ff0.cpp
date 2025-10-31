// Name: core_ghoul.cpp_FUN_004e5ff0
// Address: 004e5ff0
// Address Range: [[004e5ff0, 004e6015]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_FUN_004e5ff0()
// Cross-references:
//   core_ghoul.cpp_staticInit_FUN_004e5f90 (004e5f90) at 004e5fa9 [DATA]
// Globals:
//   TerminatedCString s_core_ghoul_cpp_0062dae9
// Function calls:
//   core_ghoul.cpp_FUN_004e6030
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_ghoul_cpp_FUN_004e5ff0(void)

{
  CGhoul *this_ptr;
  
  this_ptr = (CGhoul *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbf38,"..\\core\\ghoul.cpp",0x9e);
  if (this_ptr == (CGhoul *)0x0) {
    return;
  }
  core_ghoul_cpp_FUN_004e6030(this_ptr);
  return;
}


// Assembly code:
// 004e5ff0: PUSH 0x9e
//   Label: core_ghoul.cpp_FUN_004e5ff0
// 004e5ff5: PUSH 0x62dae9
//   XREF to: 0062dae9 (DATA)
// 004e5ffa: PUSH 0xbf38
// 004e5fff: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004e6004: ADD ESP,0xc
// 004e6007: TEST EAX,EAX
// 004e6009: JNZ 0x004e600c
//   XREF to: 004e600c (CONDITIONAL_JUMP)
// 004e600b: RET
// 004e600c: PUSH EAX
//   Label: LAB_004e600c
// 004e600d: CALL core_ghoul.cpp_FUN_004e6030
//   XREF to: 004e6030 (UNCONDITIONAL_CALL)
// 004e6012: ADD ESP,0x4
// 004e6015: RET
