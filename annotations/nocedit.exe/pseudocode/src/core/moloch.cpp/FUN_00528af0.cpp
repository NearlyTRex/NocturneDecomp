// Name: core_moloch.cpp_FUN_00528af0
// Address: 00528af0
// Address Range: [[00528af0, 00528b12]]
// Convention: unknown
// Signature: undefined core_moloch.cpp_FUN_00528af0()
// Cross-references:
//   core_moloch.cpp_staticInit_FUN_00528ac0 (00528ac0) at 00528acc [DATA]
// Globals:
//   TerminatedCString s_core_moloch_cpp_00639d35
// Function calls:
//   core_moloch.cpp_CMoloch_ctor_FUN_00528b30
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_moloch_cpp_FUN_00528af0(void)

{
  CMoloch *this_ptr;
  
  this_ptr = (CMoloch *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x22b98,"..\\core\\moloch.cpp",0x2e);
  if (this_ptr == (CMoloch *)0x0) {
    return;
  }
  core_moloch_cpp_CMoloch_ctor_FUN_00528b30(this_ptr);
  return;
}


// Assembly code:
// 00528af0: PUSH 0x2e
//   Label: core_moloch.cpp_FUN_00528af0
// 00528af2: PUSH 0x639d35
//   XREF to: 00639d35 (DATA)
// 00528af7: PUSH 0x22b98
// 00528afc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00528b01: ADD ESP,0xc
// 00528b04: TEST EAX,EAX
// 00528b06: JNZ 0x00528b09
//   XREF to: 00528b09 (CONDITIONAL_JUMP)
// 00528b08: RET
// 00528b09: PUSH EAX
//   Label: LAB_00528b09
// 00528b0a: CALL core_moloch.cpp_CMoloch_ctor_FUN_00528b30
//   XREF to: 00528b30 (UNCONDITIONAL_CALL)
// 00528b0f: ADD ESP,0x4
// 00528b12: RET
