// Name: core_passngr.cpp_FUN_00545af0
// Address: 00545af0
// Address Range: [[00545af0, 00545b12]]
// Convention: unknown
// Signature: undefined core_passngr.cpp_FUN_00545af0()
// Cross-references:
//   core_passngr.cpp_staticInit_FUN_00545ac0 (00545ac0) at 00545acc [DATA]
// Globals:
//   TerminatedCString s_core_passngr_cpp_0063e770
// Function calls:
//   core_passngr.cpp_CPassenger_ctor_FUN_00545b30
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_passngr_cpp_FUN_00545af0(void)

{
  CPassenger *this_ptr;
  
  this_ptr = (CPassenger *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x20448,"..\\core\\passngr.cpp",0x43);
  if (this_ptr == (CPassenger *)0x0) {
    return;
  }
  core_passngr_cpp_CPassenger_ctor_FUN_00545b30(this_ptr);
  return;
}


// Assembly code:
// 00545af0: PUSH 0x43
//   Label: core_passngr.cpp_FUN_00545af0
// 00545af2: PUSH 0x63e770
//   XREF to: 0063e770 (DATA)
// 00545af7: PUSH 0x20448
// 00545afc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00545b01: ADD ESP,0xc
// 00545b04: TEST EAX,EAX
// 00545b06: JNZ 0x00545b09
//   XREF to: 00545b09 (CONDITIONAL_JUMP)
// 00545b08: RET
// 00545b09: PUSH EAX
//   Label: LAB_00545b09
// 00545b0a: CALL core_passngr.cpp_CPassenger_ctor_FUN_00545b30
//   XREF to: 00545b30 (UNCONDITIONAL_CALL)
// 00545b0f: ADD ESP,0x4
// 00545b12: RET
