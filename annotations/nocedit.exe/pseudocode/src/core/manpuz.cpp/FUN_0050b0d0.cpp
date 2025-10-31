// Name: core_manpuz.cpp_FUN_0050b0d0
// Address: 0050b0d0
// Address Range: [[0050b0d0, 0050b0f5]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b0d0()
// Cross-references:
//   core_manpuz.cpp_staticInit_FUN_00508890 (00508890) at 005088bf [DATA]
// Globals:
//   TerminatedCString s_core_manpuz_cpp_00635905
// Function calls:
//   core_manpuz.cpp_FUN_0050b110
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_manpuz_cpp_FUN_0050b0d0(void)

{
  CMirrorHack *this_ptr;
  
  this_ptr = (CMirrorHack *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2d8,"..\\core\\manpuz.cpp",0x616);
  if (this_ptr == (CMirrorHack *)0x0) {
    return;
  }
  core_manpuz_cpp_FUN_0050b110(this_ptr);
  return;
}


// Assembly code:
// 0050b0d0: PUSH 0x616
//   Label: core_manpuz.cpp_FUN_0050b0d0
// 0050b0d5: PUSH 0x635905
//   XREF to: 00635905 (DATA)
// 0050b0da: PUSH 0x2d8
// 0050b0df: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0050b0e4: ADD ESP,0xc
// 0050b0e7: TEST EAX,EAX
// 0050b0e9: JNZ 0x0050b0ec
//   XREF to: 0050b0ec (CONDITIONAL_JUMP)
// 0050b0eb: RET
// 0050b0ec: PUSH EAX
//   Label: LAB_0050b0ec
// 0050b0ed: CALL core_manpuz.cpp_FUN_0050b110
//   XREF to: 0050b110 (UNCONDITIONAL_CALL)
// 0050b0f2: ADD ESP,0x4
// 0050b0f5: RET
