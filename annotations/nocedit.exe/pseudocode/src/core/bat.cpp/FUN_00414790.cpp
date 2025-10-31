// Name: core_bat.cpp_FUN_00414790
// Address: 00414790
// Address Range: [[00414790, 004147b2]]
// Convention: unknown
// Signature: undefined core_bat.cpp_FUN_00414790()
// Cross-references:
//   core_bat.cpp_staticInit_FUN_004146c0 (004146c0) at 004146cc [DATA]
// Globals:
//   TerminatedCString s_core_bat_cpp_006152cb
// Function calls:
//   core_bat.cpp_CBat_ctor_FUN_004147d0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_bat_cpp_FUN_00414790(void)

{
  CBat *this_ptr;
  
  this_ptr = (CBat *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x388,"..\\core\\bat.cpp",0x5c);
  if (this_ptr == (CBat *)0x0) {
    return;
  }
  core_bat_cpp_CBat_ctor_FUN_004147d0(this_ptr);
  return;
}


// Assembly code:
// 00414790: PUSH 0x5c
//   Label: core_bat.cpp_FUN_00414790
// 00414792: PUSH 0x6152cb
//   XREF to: 006152cb (DATA)
// 00414797: PUSH 0x388
// 0041479c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004147a1: ADD ESP,0xc
// 004147a4: TEST EAX,EAX
// 004147a6: JNZ 0x004147a9
//   XREF to: 004147a9 (CONDITIONAL_JUMP)
// 004147a8: RET
// 004147a9: PUSH EAX
//   Label: LAB_004147a9
// 004147aa: CALL core_bat.cpp_CBat_ctor_FUN_004147d0
//   XREF to: 004147d0 (UNCONDITIONAL_CALL)
// 004147af: ADD ESP,0x4
// 004147b2: RET
