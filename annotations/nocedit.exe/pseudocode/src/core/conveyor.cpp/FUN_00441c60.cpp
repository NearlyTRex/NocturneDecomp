// Name: core_conveyor.cpp_FUN_00441c60
// Address: 00441c60
// Address Range: [[00441c60, 00441c82]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_00441c60()
// Cross-references:
//   core_conveyor.cpp_staticInit_FUN_00441c30 (00441c30) at 00441c3c [DATA]
// Globals:
//   TerminatedCString s_core_conveyor_cpp_00618e25
// Function calls:
//   core_conveyor.cpp_ctor_FUN_00441ca0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_conveyor_cpp_FUN_00441c60(void)

{
  CConveyor *this_ptr;
  
  this_ptr = (CConveyor *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x860,"..\\core\\conveyor.cpp",0x23);
  if (this_ptr == (CConveyor *)0x0) {
    return;
  }
  core_conveyor_cpp_ctor_FUN_00441ca0(this_ptr);
  return;
}


// Assembly code:
// 00441c60: PUSH 0x23
//   Label: core_conveyor.cpp_FUN_00441c60
// 00441c62: PUSH 0x618e25
//   XREF to: 00618e25 (DATA)
// 00441c67: PUSH 0x860
// 00441c6c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00441c71: ADD ESP,0xc
// 00441c74: TEST EAX,EAX
// 00441c76: JNZ 0x00441c79
//   XREF to: 00441c79 (CONDITIONAL_JUMP)
// 00441c78: RET
// 00441c79: PUSH EAX
//   Label: LAB_00441c79
// 00441c7a: CALL core_conveyor.cpp_ctor_FUN_00441ca0
//   XREF to: 00441ca0 (UNCONDITIONAL_CALL)
// 00441c7f: ADD ESP,0x4
// 00441c82: RET
