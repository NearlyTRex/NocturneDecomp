// Name: core_flame.cpp_FUN_004c9a60
// Address: 004c9a60
// Address Range: [[004c9a60, 004c9a82]]
// Convention: unknown
// Signature: undefined core_flame.cpp_FUN_004c9a60()
// Cross-references:
//   core_flame.cpp_staticInit_FUN_004c9a30 (004c9a30) at 004c9a3c [DATA]
// Globals:
//   TerminatedCString s_core_flame_cpp_0062a0dd
// Function calls:
//   core_flame.cpp_CFlame_ctor_FUN_004c9aa0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_flame_cpp_FUN_004c9a60(void)

{
  CFlame *this_ptr;
  
  this_ptr = (CFlame *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2a4,"..\\core\\flame.cpp",0x75);
  if (this_ptr == (CFlame *)0x0) {
    return;
  }
  core_flame_cpp_CFlame_ctor_FUN_004c9aa0(this_ptr);
  return;
}


// Assembly code:
// 004c9a60: PUSH 0x75
//   Label: core_flame.cpp_FUN_004c9a60
// 004c9a62: PUSH 0x62a0dd
//   XREF to: 0062a0dd (DATA)
// 004c9a67: PUSH 0x2a4
// 004c9a6c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004c9a71: ADD ESP,0xc
// 004c9a74: TEST EAX,EAX
// 004c9a76: JNZ 0x004c9a79
//   XREF to: 004c9a79 (CONDITIONAL_JUMP)
// 004c9a78: RET
// 004c9a79: PUSH EAX
//   Label: LAB_004c9a79
// 004c9a7a: CALL core_flame.cpp_CFlame_ctor_FUN_004c9aa0
//   XREF to: 004c9aa0 (UNCONDITIONAL_CALL)
// 004c9a7f: ADD ESP,0x4
// 004c9a82: RET
