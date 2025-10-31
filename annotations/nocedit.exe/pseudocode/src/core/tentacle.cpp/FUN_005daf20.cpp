// Name: core_tentacle.cpp_FUN_005daf20
// Address: 005daf20
// Address Range: [[005daf20, 005daf42]]
// Convention: unknown
// Signature: undefined core_tentacle.cpp_FUN_005daf20()
// Cross-references:
//   core_tentacle.cpp_staticInit_FUN_005daef0 (005daef0) at 005daefc [DATA]
// Globals:
//   TerminatedCString s_core_tentacle_cpp_00654d9e
// Function calls:
//   core_tentacle.cpp_CTentacle_ctor_FUN_005daf60
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_tentacle_cpp_FUN_005daf20(void)

{
  CTentacle *this_ptr;
  
  this_ptr = (CTentacle *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbf2c,"..\\core\\tentacle.cpp",0x67);
  if (this_ptr == (CTentacle *)0x0) {
    return;
  }
  core_tentacle_cpp_CTentacle_ctor_FUN_005daf60(this_ptr);
  return;
}


// Assembly code:
// 005daf20: PUSH 0x67
//   Label: core_tentacle.cpp_FUN_005daf20
// 005daf22: PUSH 0x654d9e
//   XREF to: 00654d9e (DATA)
// 005daf27: PUSH 0xbf2c
// 005daf2c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005daf31: ADD ESP,0xc
// 005daf34: TEST EAX,EAX
// 005daf36: JNZ 0x005daf39
//   XREF to: 005daf39 (CONDITIONAL_JUMP)
// 005daf38: RET
// 005daf39: PUSH EAX
//   Label: LAB_005daf39
// 005daf3a: CALL core_tentacle.cpp_CTentacle_ctor_FUN_005daf60
//   XREF to: 005daf60 (UNCONDITIONAL_CALL)
// 005daf3f: ADD ESP,0x4
// 005daf42: RET
