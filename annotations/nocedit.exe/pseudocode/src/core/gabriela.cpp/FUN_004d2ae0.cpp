// Name: core_gabriela.cpp_FUN_004d2ae0
// Address: 004d2ae0
// Address Range: [[004d2ae0, 004d2b05]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d2ae0()
// Cross-references:
//   core_gabriela.cpp_staticInit_FUN_004d2910 (004d2910) at 004d29ad [DATA]
// Globals:
//   TerminatedCString s_core_gabriela_cpp_0062acb5
// Function calls:
//   core_gabriela.cpp_constructorMaybe_FUN_004d2b20
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_gabriela_cpp_FUN_004d2ae0(void)

{
  CGabriella *this_ptr;
  
  this_ptr = (CGabriella *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x5fa88,"..\\core\\gabriela.cpp",0xf0);
  if (this_ptr == (CGabriella *)0x0) {
    return;
  }
  core_gabriela_cpp_constructorMaybe_FUN_004d2b20(this_ptr);
  return;
}


// Assembly code:
// 004d2ae0: PUSH 0xf0
//   Label: core_gabriela.cpp_FUN_004d2ae0
// 004d2ae5: PUSH 0x62acb5
//   XREF to: 0062acb5 (DATA)
// 004d2aea: PUSH 0x5fa88
// 004d2aef: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004d2af4: ADD ESP,0xc
// 004d2af7: TEST EAX,EAX
// 004d2af9: JNZ 0x004d2afc
//   XREF to: 004d2afc (CONDITIONAL_JUMP)
// 004d2afb: RET
// 004d2afc: PUSH EAX
//   Label: LAB_004d2afc
// 004d2afd: CALL core_gabriela.cpp_constructorMaybe_FUN_004d2b20
//   XREF to: 004d2b20 (UNCONDITIONAL_CALL)
// 004d2b02: ADD ESP,0x4
// 004d2b05: RET
