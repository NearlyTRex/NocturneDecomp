// Name: core_drone.cpp_FUN_0048eb10
// Address: 0048eb10
// Address Range: [[0048eb10, 0048eb32]]
// Convention: unknown
// Signature: undefined core_drone.cpp_FUN_0048eb10()
// Cross-references:
//   core_drone.cpp_staticInit_FUN_0048eae0 (0048eae0) at 0048eaec [DATA]
// Globals:
//   TerminatedCString s_core_drone_cpp_0062235b
// Function calls:
//   core_drone.cpp_ctor_FUN_0048eb50
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_drone_cpp_FUN_0048eb10(void)

{
  CDrone *this_ptr;
  
  this_ptr = (CDrone *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbed4,"..\\core\\drone.cpp",0x38);
  if (this_ptr == (CDrone *)0x0) {
    return;
  }
  core_drone_cpp_ctor_FUN_0048eb50(this_ptr);
  return;
}


// Assembly code:
// 0048eb10: PUSH 0x38
//   Label: core_drone.cpp_FUN_0048eb10
// 0048eb12: PUSH 0x62235b
//   XREF to: 0062235b (DATA)
// 0048eb17: PUSH 0xbed4
// 0048eb1c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0048eb21: ADD ESP,0xc
// 0048eb24: TEST EAX,EAX
// 0048eb26: JNZ 0x0048eb29
//   XREF to: 0048eb29 (CONDITIONAL_JUMP)
// 0048eb28: RET
// 0048eb29: PUSH EAX
//   Label: LAB_0048eb29
// 0048eb2a: CALL core_drone.cpp_ctor_FUN_0048eb50
//   XREF to: 0048eb50 (UNCONDITIONAL_CALL)
// 0048eb2f: ADD ESP,0x4
// 0048eb32: RET
