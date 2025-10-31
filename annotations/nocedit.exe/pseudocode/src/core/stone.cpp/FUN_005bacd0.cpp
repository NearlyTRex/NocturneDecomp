// Name: core_stone.cpp_FUN_005bacd0
// Address: 005bacd0
// Address Range: [[005bacd0, 005bacf2]]
// Convention: unknown
// Signature: undefined core_stone.cpp_FUN_005bacd0()
// Cross-references:
//   core_stone.cpp_staticInit_FUN_005baca0 (005baca0) at 005bacac [DATA]
// Globals:
//   TerminatedCString s_core_stone_cpp_00653148
// Function calls:
//   core_stone.cpp_CTempleStone_ctor_FUN_005bad10
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_stone_cpp_FUN_005bacd0(void)

{
  CTempleStone *this_ptr;
  
  this_ptr = (CTempleStone *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x670,"..\\core\\stone.cpp",0x1e);
  if (this_ptr == (CTempleStone *)0x0) {
    return;
  }
  core_stone_cpp_CTempleStone_ctor_FUN_005bad10(this_ptr);
  return;
}


// Assembly code:
// 005bacd0: PUSH 0x1e
//   Label: core_stone.cpp_FUN_005bacd0
// 005bacd2: PUSH 0x653148
//   XREF to: 00653148 (DATA)
// 005bacd7: PUSH 0x670
// 005bacdc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005bace1: ADD ESP,0xc
// 005bace4: TEST EAX,EAX
// 005bace6: JNZ 0x005bace9
//   XREF to: 005bace9 (CONDITIONAL_JUMP)
// 005bace8: RET
// 005bace9: PUSH EAX
//   Label: LAB_005bace9
// 005bacea: CALL core_stone.cpp_CTempleStone_ctor_FUN_005bad10
//   XREF to: 005bad10 (UNCONDITIONAL_CALL)
// 005bacef: ADD ESP,0x4
// 005bacf2: RET
