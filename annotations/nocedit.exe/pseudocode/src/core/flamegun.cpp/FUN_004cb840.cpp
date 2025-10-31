// Name: core_flamegun.cpp_FUN_004cb840
// Address: 004cb840
// Address Range: [[004cb840, 004cb862]]
// Convention: unknown
// Signature: undefined core_flamegun.cpp_FUN_004cb840()
// Cross-references:
//   core_flamegun.cpp_staticInit_FUN_004cb810 (004cb810) at 004cb81c [DATA]
// Globals:
//   TerminatedCString s_core_flamegun_cpp_0062a379
// Function calls:
//   core_flamegun.cpp_FUN_004cb880
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_flamegun_cpp_FUN_004cb840(void)

{
  CFlameThrower *this_ptr;
  
  this_ptr = (CFlameThrower *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x588,"..\\core\\flamegun.cpp",0x2a);
  if (this_ptr == (CFlameThrower *)0x0) {
    return;
  }
  core_flamegun_cpp_FUN_004cb880(this_ptr);
  return;
}


// Assembly code:
// 004cb840: PUSH 0x2a
//   Label: core_flamegun.cpp_FUN_004cb840
// 004cb842: PUSH 0x62a379
//   XREF to: 0062a379 (DATA)
// 004cb847: PUSH 0x588
// 004cb84c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004cb851: ADD ESP,0xc
// 004cb854: TEST EAX,EAX
// 004cb856: JNZ 0x004cb859
//   XREF to: 004cb859 (CONDITIONAL_JUMP)
// 004cb858: RET
// 004cb859: PUSH EAX
//   Label: LAB_004cb859
// 004cb85a: CALL core_flamegun.cpp_FUN_004cb880
//   XREF to: 004cb880 (UNCONDITIONAL_CALL)
// 004cb85f: ADD ESP,0x4
// 004cb862: RET
