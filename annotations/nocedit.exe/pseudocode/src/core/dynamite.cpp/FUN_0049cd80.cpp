// Name: core_dynamite.cpp_FUN_0049cd80
// Address: 0049cd80
// Address Range: [[0049cd80, 0049cda2]]
// Convention: unknown
// Signature: undefined core_dynamite.cpp_FUN_0049cd80()
// Cross-references:
//   core_dynamite.cpp_staticInit_FUN_0049cd40 (0049cd40) at 0049cd4c [DATA]
// Globals:
//   TerminatedCString s_core_dynamite_cpp_00622e6c
// Function calls:
//   core_dynamite.cpp_ctor_FUN_0049cdc0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_dynamite_cpp_FUN_0049cd80(void)

{
  CDynamite *this_ptr;
  
  this_ptr = (CDynamite *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x58c,"..\\core\\dynamite.cpp",0x21);
  if (this_ptr == (CDynamite *)0x0) {
    return;
  }
  core_dynamite_cpp_ctor_FUN_0049cdc0(this_ptr);
  return;
}


// Assembly code:
// 0049cd80: PUSH 0x21
//   Label: core_dynamite.cpp_FUN_0049cd80
// 0049cd82: PUSH 0x622e6c
//   XREF to: 00622e6c (DATA)
// 0049cd87: PUSH 0x58c
// 0049cd8c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0049cd91: ADD ESP,0xc
// 0049cd94: TEST EAX,EAX
// 0049cd96: JNZ 0x0049cd99
//   XREF to: 0049cd99 (CONDITIONAL_JUMP)
// 0049cd98: RET
// 0049cd99: PUSH EAX
//   Label: LAB_0049cd99
// 0049cd9a: CALL core_dynamite.cpp_ctor_FUN_0049cdc0
//   XREF to: 0049cdc0 (UNCONDITIONAL_CALL)
// 0049cd9f: ADD ESP,0x4
// 0049cda2: RET
