// Name: core_gasmask.cpp_FUN_004e5cc0
// Address: 004e5cc0
// Address Range: [[004e5cc0, 004e5ce2]]
// Convention: unknown
// Signature: undefined core_gasmask.cpp_FUN_004e5cc0()
// Cross-references:
//   core_gasmask.cpp_staticInit_FUN_004e5c90 (004e5c90) at 004e5c9c [DATA]
// Globals:
//   TerminatedCString s_core_gasmask_cpp_0062da95
// Function calls:
//   core_gasmask.cpp_CGasMask_ctor_FUN_004e5d00
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_gasmask_cpp_FUN_004e5cc0(void)

{
  CGasMask *this_ptr;
  
  this_ptr = (CGasMask *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2d8,"..\\core\\gasmask.cpp",0x1e);
  if (this_ptr == (CGasMask *)0x0) {
    return;
  }
  core_gasmask_cpp_CGasMask_ctor_FUN_004e5d00(this_ptr);
  return;
}


// Assembly code:
// 004e5cc0: PUSH 0x1e
//   Label: core_gasmask.cpp_FUN_004e5cc0
// 004e5cc2: PUSH 0x62da95
//   XREF to: 0062da95 (DATA)
// 004e5cc7: PUSH 0x2d8
// 004e5ccc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004e5cd1: ADD ESP,0xc
// 004e5cd4: TEST EAX,EAX
// 004e5cd6: JNZ 0x004e5cd9
//   XREF to: 004e5cd9 (CONDITIONAL_JUMP)
// 004e5cd8: RET
// 004e5cd9: PUSH EAX
//   Label: LAB_004e5cd9
// 004e5cda: CALL core_gasmask.cpp_CGasMask_ctor_FUN_004e5d00
//   XREF to: 004e5d00 (UNCONDITIONAL_CALL)
// 004e5cdf: ADD ESP,0x4
// 004e5ce2: RET
