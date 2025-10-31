// Name: core_vampboss.cpp_FUN_005e5550
// Address: 005e5550
// Address Range: [[005e5550, 005e5572]]
// Convention: unknown
// Signature: undefined core_vampboss.cpp_FUN_005e5550()
// Cross-references:
//   core_vampboss.cpp_staticInit_FUN_005e5520 (005e5520) at 005e552c [DATA]
// Globals:
//   TerminatedCString s_core_vampboss_cpp_00656ab0
// Function calls:
//   core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_vampboss_cpp_FUN_005e5550(void)

{
  CVampireBoss *this_ptr;
  
  this_ptr = (CVampireBoss *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xce920,"..\\core\\vampboss.cpp",0x60);
  if (this_ptr == (CVampireBoss *)0x0) {
    return;
  }
  core_vampboss_cpp_CVampireBoss_ctor_FUN_005e5590(this_ptr);
  return;
}


// Assembly code:
// 005e5550: PUSH 0x60
//   Label: core_vampboss.cpp_FUN_005e5550
// 005e5552: PUSH 0x656ab0
//   XREF to: 00656ab0 (DATA)
// 005e5557: PUSH 0xce920
// 005e555c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005e5561: ADD ESP,0xc
// 005e5564: TEST EAX,EAX
// 005e5566: JNZ 0x005e5569
//   XREF to: 005e5569 (CONDITIONAL_JUMP)
// 005e5568: RET
// 005e5569: PUSH EAX
//   Label: LAB_005e5569
// 005e556a: CALL core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590
//   XREF to: 005e5590 (UNCONDITIONAL_CALL)
// 005e556f: ADD ESP,0x4
// 005e5572: RET
