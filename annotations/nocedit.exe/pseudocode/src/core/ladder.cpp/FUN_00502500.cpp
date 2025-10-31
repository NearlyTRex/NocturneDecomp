// Name: core_ladder.cpp_FUN_00502500
// Address: 00502500
// Address Range: [[00502500, 00502522]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502500()
// Cross-references:
//   core_ladder.cpp_staticInit_FUN_005024d0 (005024d0) at 005024dc [DATA]
// Globals:
//   TerminatedCString s_core_ladder_cpp_00630df8
// Function calls:
//   core_ladder.cpp_FUN_00502540
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_ladder_cpp_FUN_00502500(void)

{
  CLadder *this_ptr;
  
  this_ptr = (CLadder *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x300,"..\\core\\ladder.cpp",0x2d);
  if (this_ptr == (CLadder *)0x0) {
    return;
  }
  core_ladder_cpp_FUN_00502540(this_ptr);
  return;
}


// Assembly code:
// 00502500: PUSH 0x2d
//   Label: core_ladder.cpp_FUN_00502500
// 00502502: PUSH 0x630df8
//   XREF to: 00630df8 (DATA)
// 00502507: PUSH 0x300
// 0050250c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00502511: ADD ESP,0xc
// 00502514: TEST EAX,EAX
// 00502516: JNZ 0x00502519
//   XREF to: 00502519 (CONDITIONAL_JUMP)
// 00502518: RET
// 00502519: PUSH EAX
//   Label: LAB_00502519
// 0050251a: CALL core_ladder.cpp_FUN_00502540
//   XREF to: 00502540 (UNCONDITIONAL_CALL)
// 0050251f: ADD ESP,0x4
// 00502522: RET
