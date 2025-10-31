// Name: core_scat.cpp_FUN_00556e90
// Address: 00556e90
// Address Range: [[00556e90, 00556eb5]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00556e90()
// Cross-references:
//   core_scat.cpp_staticInit_FUN_00556e00 (00556e00) at 00556e0c [DATA]
// Globals:
//   TerminatedCString s_core_scat_cpp_00641200
// Function calls:
//   core_scat.cpp_CScat_ctor_FUN_00556ed0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_scat_cpp_FUN_00556e90(void)

{
  CScat *this_ptr;
  
  this_ptr = (CScat *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                                (0x1fc00,"..\\core\\scat.cpp",0x87);
  if (this_ptr == (CScat *)0x0) {
    return;
  }
  core_scat_cpp_CScat_ctor_FUN_00556ed0(this_ptr);
  return;
}


// Assembly code:
// 00556e90: PUSH 0x87
//   Label: core_scat.cpp_FUN_00556e90
// 00556e95: PUSH 0x641200
//   XREF to: 00641200 (DATA)
// 00556e9a: PUSH 0x1fc00
// 00556e9f: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00556ea4: ADD ESP,0xc
// 00556ea7: TEST EAX,EAX
// 00556ea9: JNZ 0x00556eac
//   XREF to: 00556eac (CONDITIONAL_JUMP)
// 00556eab: RET
// 00556eac: PUSH EAX
//   Label: LAB_00556eac
// 00556ead: CALL core_scat.cpp_CScat_ctor_FUN_00556ed0
//   XREF to: 00556ed0 (UNCONDITIONAL_CALL)
// 00556eb2: ADD ESP,0x4
// 00556eb5: RET
