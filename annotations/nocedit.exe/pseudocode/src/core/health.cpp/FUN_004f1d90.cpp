// Name: core_health.cpp_FUN_004f1d90
// Address: 004f1d90
// Address Range: [[004f1d90, 004f1db2]]
// Convention: unknown
// Signature: undefined core_health.cpp_FUN_004f1d90()
// Cross-references:
//   core_health.cpp_staticInit_FUN_004f1d60 (004f1d60) at 004f1d6c [DATA]
// Globals:
//   TerminatedCString s_core_health_cpp_0062e9dd
// Function calls:
//   core_health.cpp_FUN_004f1dd0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_health_cpp_FUN_004f1d90(void)

{
  CHealthItem *this_ptr;
  
  this_ptr = (CHealthItem *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2dc,"..\\core\\health.cpp",0x22);
  if (this_ptr == (CHealthItem *)0x0) {
    return;
  }
  core_health_cpp_FUN_004f1dd0(this_ptr);
  return;
}


// Assembly code:
// 004f1d90: PUSH 0x22
//   Label: core_health.cpp_FUN_004f1d90
// 004f1d92: PUSH 0x62e9dd
//   XREF to: 0062e9dd (DATA)
// 004f1d97: PUSH 0x2dc
// 004f1d9c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004f1da1: ADD ESP,0xc
// 004f1da4: TEST EAX,EAX
// 004f1da6: JNZ 0x004f1da9
//   XREF to: 004f1da9 (CONDITIONAL_JUMP)
// 004f1da8: RET
// 004f1da9: PUSH EAX
//   Label: LAB_004f1da9
// 004f1daa: CALL core_health.cpp_FUN_004f1dd0
//   XREF to: 004f1dd0 (UNCONDITIONAL_CALL)
// 004f1daf: ADD ESP,0x4
// 004f1db2: RET
