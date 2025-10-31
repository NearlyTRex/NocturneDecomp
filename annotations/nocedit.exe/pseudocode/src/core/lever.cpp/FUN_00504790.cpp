// Name: core_lever.cpp_FUN_00504790
// Address: 00504790
// Address Range: [[00504790, 005047b2]]
// Convention: unknown
// Signature: undefined core_lever.cpp_FUN_00504790()
// Cross-references:
//   core_lever.cpp_staticInit_FUN_00504760 (00504760) at 0050476c [DATA]
// Globals:
//   TerminatedCString s_core_lever_cpp_0063105f
// Function calls:
//   core_lever.cpp_FUN_005047d0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_lever_cpp_FUN_00504790(void)

{
  CLever *this_ptr;
  
  this_ptr = (CLever *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x814,"..\\core\\lever.cpp",0x29);
  if (this_ptr == (CLever *)0x0) {
    return;
  }
  core_lever_cpp_FUN_005047d0(this_ptr);
  return;
}


// Assembly code:
// 00504790: PUSH 0x29
//   Label: core_lever.cpp_FUN_00504790
// 00504792: PUSH 0x63105f
//   XREF to: 0063105f (DATA)
// 00504797: PUSH 0x814
// 0050479c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005047a1: ADD ESP,0xc
// 005047a4: TEST EAX,EAX
// 005047a6: JNZ 0x005047a9
//   XREF to: 005047a9 (CONDITIONAL_JUMP)
// 005047a8: RET
// 005047a9: PUSH EAX
//   Label: LAB_005047a9
// 005047aa: CALL core_lever.cpp_FUN_005047d0
//   XREF to: 005047d0 (UNCONDITIONAL_CALL)
// 005047af: ADD ESP,0x4
// 005047b2: RET
