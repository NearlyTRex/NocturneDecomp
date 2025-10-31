// Name: core_mobster.cpp_FUN_005251c0
// Address: 005251c0
// Address Range: [[005251c0, 005251e5]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_005251c0()
// Cross-references:
//   core_mobster.cpp_staticInit_FUN_00525070 (00525070) at 0052507c [DATA]
// Globals:
//   undefined4 s_..\core\mobster.cpp_006396b6
// Function calls:
//   core_mobster.cpp_CMobster_ctor_FUN_00525200
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_mobster_cpp_FUN_005251c0(void)

{
  CMobster *this_ptr;
  
  this_ptr = (CMobster *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbf94,"?..\\core\\mobster.cpp" + 1,0x85);
  if (this_ptr == (CMobster *)0x0) {
    return;
  }
  core_mobster_cpp_CMobster_ctor_FUN_00525200(this_ptr);
  return;
}


// Assembly code:
// 005251c0: PUSH 0x85
//   Label: core_mobster.cpp_FUN_005251c0
// 005251c5: PUSH 0x6396b6
//   XREF to: 006396b6 (DATA)
// 005251ca: PUSH 0xbf94
// 005251cf: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005251d4: ADD ESP,0xc
// 005251d7: TEST EAX,EAX
// 005251d9: JNZ 0x005251dc
//   XREF to: 005251dc (CONDITIONAL_JUMP)
// 005251db: RET
// 005251dc: PUSH EAX
//   Label: LAB_005251dc
// 005251dd: CALL core_mobster.cpp_CMobster_ctor_FUN_00525200
//   XREF to: 00525200 (UNCONDITIONAL_CALL)
// 005251e2: ADD ESP,0x4
// 005251e5: RET
