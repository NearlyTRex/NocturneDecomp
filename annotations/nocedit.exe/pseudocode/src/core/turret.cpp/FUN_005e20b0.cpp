// Name: core_turret.cpp_FUN_005e20b0
// Address: 005e20b0
// Address Range: [[005e20b0, 005e20d5]]
// Convention: unknown
// Signature: undefined core_turret.cpp_FUN_005e20b0()
// Cross-references:
//   core_turret.cpp_staticInit_FUN_005e2080 (005e2080) at 005e208c [DATA]
// Globals:
//   TerminatedCString s_core_turret_cpp_006565b0
// Function calls:
//   core_turret.cpp_CTurret_ctor_FUN_005e20f0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_turret_cpp_FUN_005e20b0(void)

{
  CTurret *this_ptr;
  
  this_ptr = (CTurret *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x8bc,"..\\core\\turret.cpp",0xa2);
  if (this_ptr == (CTurret *)0x0) {
    return;
  }
  core_turret_cpp_CTurret_ctor_FUN_005e20f0(this_ptr);
  return;
}


// Assembly code:
// 005e20b0: PUSH 0xa2
//   Label: core_turret.cpp_FUN_005e20b0
// 005e20b5: PUSH 0x6565b0
//   XREF to: 006565b0 (DATA)
// 005e20ba: PUSH 0x8bc
// 005e20bf: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005e20c4: ADD ESP,0xc
// 005e20c7: TEST EAX,EAX
// 005e20c9: JNZ 0x005e20cc
//   XREF to: 005e20cc (CONDITIONAL_JUMP)
// 005e20cb: RET
// 005e20cc: PUSH EAX
//   Label: LAB_005e20cc
// 005e20cd: CALL core_turret.cpp_CTurret_ctor_FUN_005e20f0
//   XREF to: 005e20f0 (UNCONDITIONAL_CALL)
// 005e20d2: ADD ESP,0x4
// 005e20d5: RET
