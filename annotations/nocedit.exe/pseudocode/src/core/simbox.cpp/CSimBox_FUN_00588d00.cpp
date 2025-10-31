// Name: core_simbox.cpp_CSimBox_FUN_00588d00
// Address: 00588d00
// Address Range: [[00588d00, 00588d22]]
// Convention: __cdecl
// Signature: void core_simbox.cpp_CSimBox_FUN_00588d00(CSimBox * this_ptr)
// Cross-references:
//   core_simbox.cpp_staticInit_FUN_00588cd0 (00588cd0) at 00588cdc [DATA]
// Globals:
//   TerminatedCString s_core_simbox_cpp_00649bda
// Function calls:
//   core_simbox.cpp_CSimBox_ctor_FUN_00588d40
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_FUN_00588d00(CSimBox *this_ptr)

{
  CSimBox *this_ptr_00;
  
  this_ptr_00 = (CSimBox *)
                shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x5cc,"..\\core\\simbox.cpp",0x22);
  if (this_ptr_00 == (CSimBox *)0x0) {
    return;
  }
  core_simbox_cpp_CSimBox_ctor_FUN_00588d40(this_ptr_00);
  return;
}


// Assembly code:
// 00588d00: PUSH 0x22
//   Label: core_simbox.cpp_CSimBox_FUN_00588d00
// 00588d02: PUSH 0x649bda
//   XREF to: 00649bda (DATA)
// 00588d07: PUSH 0x5cc
// 00588d0c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00588d11: ADD ESP,0xc
// 00588d14: TEST EAX,EAX
// 00588d16: JNZ 0x00588d19
//   XREF to: 00588d19 (CONDITIONAL_JUMP)
// 00588d18: RET
// 00588d19: PUSH EAX
//   Label: LAB_00588d19
// 00588d1a: CALL core_simbox.cpp_CSimBox_ctor_FUN_00588d40
//   XREF to: 00588d40 (UNCONDITIONAL_CALL)
// 00588d1f: ADD ESP,0x4
// 00588d22: RET
