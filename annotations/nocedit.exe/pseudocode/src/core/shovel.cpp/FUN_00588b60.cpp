// Name: core_shovel.cpp_FUN_00588b60
// Address: 00588b60
// Address Range: [[00588b60, 00588b82]]
// Convention: unknown
// Signature: undefined core_shovel.cpp_FUN_00588b60()
// Cross-references:
//   core_shovel.cpp_staticInit_FUN_00588b30 (00588b30) at 00588b3c [DATA]
// Globals:
//   TerminatedCString s_core_shovel_cpp_00649b87
// Function calls:
//   core_shovel.cpp_CShovel_ctor_FUN_00588ba0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_shovel_cpp_FUN_00588b60(void)

{
  CShovel *this_ptr;
  
  this_ptr = (CShovel *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x578,"..\\core\\shovel.cpp",0x20);
  if (this_ptr == (CShovel *)0x0) {
    return;
  }
  core_shovel_cpp_CShovel_ctor_FUN_00588ba0(this_ptr);
  return;
}


// Assembly code:
// 00588b60: PUSH 0x20
//   Label: core_shovel.cpp_FUN_00588b60
// 00588b62: PUSH 0x649b87
//   XREF to: 00649b87 (DATA)
// 00588b67: PUSH 0x578
// 00588b6c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00588b71: ADD ESP,0xc
// 00588b74: TEST EAX,EAX
// 00588b76: JNZ 0x00588b79
//   XREF to: 00588b79 (CONDITIONAL_JUMP)
// 00588b78: RET
// 00588b79: PUSH EAX
//   Label: LAB_00588b79
// 00588b7a: CALL core_shovel.cpp_CShovel_ctor_FUN_00588ba0
//   XREF to: 00588ba0 (UNCONDITIONAL_CALL)
// 00588b7f: ADD ESP,0x4
// 00588b82: RET
