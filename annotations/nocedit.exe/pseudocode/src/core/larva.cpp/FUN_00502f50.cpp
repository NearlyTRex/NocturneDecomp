// Name: core_larva.cpp_FUN_00502f50
// Address: 00502f50
// Address Range: [[00502f50, 00502f72]]
// Convention: unknown
// Signature: undefined core_larva.cpp_FUN_00502f50()
// Cross-references:
//   core_larva.cpp_staticInit_FUN_00502f20 (00502f20) at 00502f2c [DATA]
// Globals:
//   TerminatedCString s_core_larva_cpp_00630eca
// Function calls:
//   core_larva.cpp_FUN_00502f90
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_larva_cpp_FUN_00502f50(void)

{
  CLarva *this_ptr;
  
  this_ptr = (CLarva *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbec8,"..\\core\\larva.cpp",0x36);
  if (this_ptr == (CLarva *)0x0) {
    return;
  }
  core_larva_cpp_FUN_00502f90(this_ptr);
  return;
}


// Assembly code:
// 00502f50: PUSH 0x36
//   Label: core_larva.cpp_FUN_00502f50
// 00502f52: PUSH 0x630eca
//   XREF to: 00630eca (DATA)
// 00502f57: PUSH 0xbec8
// 00502f5c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00502f61: ADD ESP,0xc
// 00502f64: TEST EAX,EAX
// 00502f66: JNZ 0x00502f69
//   XREF to: 00502f69 (CONDITIONAL_JUMP)
// 00502f68: RET
// 00502f69: PUSH EAX
//   Label: LAB_00502f69
// 00502f6a: CALL core_larva.cpp_FUN_00502f90
//   XREF to: 00502f90 (UNCONDITIONAL_CALL)
// 00502f6f: ADD ESP,0x4
// 00502f72: RET
