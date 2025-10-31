// Name: core_trap.cpp_FUN_005de650
// Address: 005de650
// Address Range: [[005de650, 005de672]]
// Convention: unknown
// Signature: undefined core_trap.cpp_FUN_005de650()
// Cross-references:
//   core_trap.cpp_staticInit_FUN_005de620 (005de620) at 005de62c [DATA]
// Globals:
//   TerminatedCString s_core_trap_cpp_0065551b
// Function calls:
//   core_trap.cpp_CTrap_ctor_FUN_005de690
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_trap_cpp_FUN_005de650(void)

{
  CTrap *this_ptr;
  
  this_ptr = (CTrap *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2dc,"..\\core\\trap.cpp",0x20);
  if (this_ptr == (CTrap *)0x0) {
    return;
  }
  core_trap_cpp_CTrap_ctor_FUN_005de690(this_ptr);
  return;
}


// Assembly code:
// 005de650: PUSH 0x20
//   Label: core_trap.cpp_FUN_005de650
// 005de652: PUSH 0x65551b
//   XREF to: 0065551b (DATA)
// 005de657: PUSH 0x2dc
// 005de65c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005de661: ADD ESP,0xc
// 005de664: TEST EAX,EAX
// 005de666: JNZ 0x005de669
//   XREF to: 005de669 (CONDITIONAL_JUMP)
// 005de668: RET
// 005de669: PUSH EAX
//   Label: LAB_005de669
// 005de66a: CALL core_trap.cpp_CTrap_ctor_FUN_005de690
//   XREF to: 005de690 (UNCONDITIONAL_CALL)
// 005de66f: ADD ESP,0x4
// 005de672: RET
