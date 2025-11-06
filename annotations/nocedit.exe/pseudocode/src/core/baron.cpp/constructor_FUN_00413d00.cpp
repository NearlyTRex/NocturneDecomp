// Name: core_baron.cpp_constructor_FUN_00413d00
// Address: 00413d00
// Address Range: [[00413d00, 00413d25]]
// Convention: unknown
// Signature: undefined core_baron.cpp_constructor_FUN_00413d00()
// Cross-references:
//   core_baron.cpp_FUN_00412b41 (00412b41) at 00412b5c [DATA]
// Globals:
//   TerminatedCString s_core_baron_cpp_00615099
// Function calls:
//   core_baron.cpp_CBaronWeapon_ctor_FUN_00413d40
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_baron_cpp_constructor_FUN_00413d00(void)

{
  CBaronWeapon *this_ptr;
  
  this_ptr = (CBaronWeapon *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x57c,"..\\core\\baron.cpp",0x2ab);
  if (this_ptr == (CBaronWeapon *)0x0) {
    return;
  }
  core_baron_cpp_CBaronWeapon_ctor_FUN_00413d40(this_ptr);
  return;
}


// Assembly code:
// 00413d00: PUSH 0x2ab
//   Label: core_baron.cpp_constructor_FUN_00413d00
// 00413d05: PUSH 0x615099
//   XREF to: 00615099 (DATA)
// 00413d0a: PUSH 0x57c
// 00413d0f: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00413d14: ADD ESP,0xc
// 00413d17: TEST EAX,EAX
// 00413d19: JNZ 0x00413d1c
//   XREF to: 00413d1c (CONDITIONAL_JUMP)
// 00413d1b: RET
// 00413d1c: PUSH EAX
//   Label: LAB_00413d1c
// 00413d1d: CALL core_baron.cpp_CBaronWeapon_ctor_FUN_00413d40
//   XREF to: 00413d40 (UNCONDITIONAL_CALL)
// 00413d22: ADD ESP,0x4
// 00413d25: RET
