// Name: core_boneguy.cpp_constructor_FUN_0041b820
// Address: 0041b820
// Address Range: [[0041b820, 0041b842]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_constructor_FUN_0041b820()
// Cross-references:
//   core_boneguy.cpp_staticInit_FUN_0041b6d0 (0041b6d0) at 0041b6dc [DATA]
// Globals:
//   TerminatedCString s_core_boneguy_cpp_00615f2d
// Function calls:
//   core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_boneguy_cpp_constructor_FUN_0041b820(void)

{
  CBoneGuy *this_ptr;
  
  this_ptr = (CBoneGuy *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xc4e4,"..\\core\\boneguy.cpp",0x74);
  if (this_ptr == (CBoneGuy *)0x0) {
    return;
  }
  core_boneguy_cpp_CBoneGuy_ctor_FUN_0041bbc0(this_ptr);
  return;
}


// Assembly code:
// 0041b820: PUSH 0x74
//   Label: core_boneguy.cpp_constructor_FUN_0041b820
// 0041b822: PUSH 0x615f2d
//   XREF to: 00615f2d (DATA)
// 0041b827: PUSH 0xc4e4
// 0041b82c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0041b831: ADD ESP,0xc
// 0041b834: TEST EAX,EAX
// 0041b836: JNZ 0x0041b839
//   XREF to: 0041b839 (CONDITIONAL_JUMP)
// 0041b838: RET
// 0041b839: PUSH EAX
//   Label: LAB_0041b839
// 0041b83a: CALL core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0
//   XREF to: 0041bbc0 (UNCONDITIONAL_CALL)
// 0041b83f: ADD ESP,0x4
// 0041b842: RET
