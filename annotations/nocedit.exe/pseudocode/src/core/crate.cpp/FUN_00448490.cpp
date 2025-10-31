// Name: core_crate.cpp_FUN_00448490
// Address: 00448490
// Address Range: [[00448490, 004484b2]]
// Convention: unknown
// Signature: undefined core_crate.cpp_FUN_00448490()
// Cross-references:
//   core_crate.cpp_staticInit_FUN_00448460 (00448460) at 0044846c [DATA]
// Globals:
//   TerminatedCString s_core_crate_cpp_00619ae1
// Function calls:
//   core_crate.cpp_FUN_004484d0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_crate_cpp_FUN_00448490(void)

{
  CCrate *this_ptr;
  
  this_ptr = (CCrate *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2fc,"..\\core\\crate.cpp",0x1f);
  if (this_ptr == (CCrate *)0x0) {
    return;
  }
  core_crate_cpp_FUN_004484d0(this_ptr);
  return;
}


// Assembly code:
// 00448490: PUSH 0x1f
//   Label: core_crate.cpp_FUN_00448490
// 00448492: PUSH 0x619ae1
//   XREF to: 00619ae1 (DATA)
// 00448497: PUSH 0x2fc
// 0044849c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004484a1: ADD ESP,0xc
// 004484a4: TEST EAX,EAX
// 004484a6: JNZ 0x004484a9
//   XREF to: 004484a9 (CONDITIONAL_JUMP)
// 004484a8: RET
// 004484a9: PUSH EAX
//   Label: LAB_004484a9
// 004484aa: CALL core_crate.cpp_FUN_004484d0
//   XREF to: 004484d0 (UNCONDITIONAL_CALL)
// 004484af: ADD ESP,0x4
// 004484b2: RET
