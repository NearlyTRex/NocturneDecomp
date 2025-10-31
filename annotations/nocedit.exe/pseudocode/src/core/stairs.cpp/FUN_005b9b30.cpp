// Name: core_stairs.cpp_FUN_005b9b30
// Address: 005b9b30
// Address Range: [[005b9b30, 005b9b52]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005b9b30()
// Cross-references:
//   core_stairs.cpp_staticInit_FUN_005b9b00 (005b9b00) at 005b9b0c [DATA]
// Globals:
//   TerminatedCString s_core_stairs_cpp_00653042
// Function calls:
//   core_stairs.cpp_CStairs_ctor_FUN_005b9b70
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_stairs_cpp_FUN_005b9b30(void)

{
  CStairs *this_ptr;
  
  this_ptr = (CStairs *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xa34,"..\\core\\stairs.cpp",0x6f);
  if (this_ptr == (CStairs *)0x0) {
    return;
  }
  core_stairs_cpp_CStairs_ctor_FUN_005b9b70(this_ptr);
  return;
}


// Assembly code:
// 005b9b30: PUSH 0x6f
//   Label: core_stairs.cpp_FUN_005b9b30
// 005b9b32: PUSH 0x653042
//   XREF to: 00653042 (DATA)
// 005b9b37: PUSH 0xa34
// 005b9b3c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005b9b41: ADD ESP,0xc
// 005b9b44: TEST EAX,EAX
// 005b9b46: JNZ 0x005b9b49
//   XREF to: 005b9b49 (CONDITIONAL_JUMP)
// 005b9b48: RET
// 005b9b49: PUSH EAX
//   Label: LAB_005b9b49
// 005b9b4a: CALL core_stairs.cpp_CStairs_ctor_FUN_005b9b70
//   XREF to: 005b9b70 (UNCONDITIONAL_CALL)
// 005b9b4f: ADD ESP,0x4
// 005b9b52: RET
