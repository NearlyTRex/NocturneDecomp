// Name: core_backgnd.cpp_FUN_00412770
// Address: 00412770
// Address Range: [[00412770, 00412792]]
// Convention: unknown
// Signature: undefined core_backgnd.cpp_FUN_00412770()
// Cross-references:
//   core_backgnd.cpp_staticInit_FUN_00412740 (00412740) at 0041274c [DATA]
// Globals:
//   TerminatedCString s_core_backgnd_cpp_00614e3f
// Function calls:
//   core_backgnd.cpp_CBackgroundActor_ctor_FUN_004127b0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_backgnd_cpp_FUN_00412770(void)

{
  CBackgroundActor *this_ptr;
  
  this_ptr = (CBackgroundActor *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2dc,"..\\core\\backgnd.cpp",0x26);
  if (this_ptr == (CBackgroundActor *)0x0) {
    return;
  }
  core_backgnd_cpp_CBackgroundActor_ctor_FUN_004127b0(this_ptr);
  return;
}


// Assembly code:
// 00412770: PUSH 0x26
//   Label: core_backgnd.cpp_FUN_00412770
// 00412772: PUSH 0x614e3f
//   XREF to: 00614e3f (DATA)
// 00412777: PUSH 0x2dc
// 0041277c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00412781: ADD ESP,0xc
// 00412784: TEST EAX,EAX
// 00412786: JNZ 0x00412789
//   XREF to: 00412789 (CONDITIONAL_JUMP)
// 00412788: RET
// 00412789: PUSH EAX
//   Label: LAB_00412789
// 0041278a: CALL core_backgnd.cpp_CBackgroundActor_ctor_FUN_004127b0
//   XREF to: 004127b0 (UNCONDITIONAL_CALL)
// 0041278f: ADD ESP,0x4
// 00412792: RET
