// Name: core_anvil.cpp_constructor_FUN_00411ca0
// Address: 00411ca0
// Address Range: [[00411ca0, 00411cc2]]
// Convention: unknown
// Signature: undefined core_anvil.cpp_constructor_FUN_00411ca0()
// Cross-references:
//   core_anvil.cpp_staticInit_FUN_00411c70 (00411c70) at 00411c7c [DATA]
// Globals:
//   TerminatedCString s_core_anvil_cpp_00614cfa
// Function calls:
//   core_anvil.cpp_CAnvil_ctor_FUN_00411ce0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_anvil_cpp_constructor_FUN_00411ca0(void)

{
  CAnvil *this_ptr;
  
  this_ptr = (CAnvil *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x344,"..\\core\\anvil.cpp",0x20);
  if (this_ptr == (CAnvil *)0x0) {
    return;
  }
  core_anvil_cpp_CAnvil_ctor_FUN_00411ce0(this_ptr);
  return;
}


// Assembly code:
// 00411ca0: PUSH 0x20
//   Label: core_anvil.cpp_constructor_FUN_00411ca0
// 00411ca2: PUSH 0x614cfa
//   XREF to: 00614cfa (DATA)
// 00411ca7: PUSH 0x344
// 00411cac: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00411cb1: ADD ESP,0xc
// 00411cb4: TEST EAX,EAX
// 00411cb6: JNZ 0x00411cb9
//   XREF to: 00411cb9 (CONDITIONAL_JUMP)
// 00411cb8: RET
// 00411cb9: PUSH EAX
//   Label: LAB_00411cb9
// 00411cba: CALL core_anvil.cpp_CAnvil_ctor_FUN_00411ce0
//   XREF to: 00411ce0 (UNCONDITIONAL_CALL)
// 00411cbf: ADD ESP,0x4
// 00411cc2: RET
