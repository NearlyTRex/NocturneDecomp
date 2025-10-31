// Name: core_vessel.cpp_FUN_005e8e20
// Address: 005e8e20
// Address Range: [[005e8e20, 005e8e42]]
// Convention: unknown
// Signature: undefined core_vessel.cpp_FUN_005e8e20()
// Cross-references:
//   core_vessel.cpp_staticInit_FUN_005e8df0 (005e8df0) at 005e8dfc [DATA]
// Globals:
//   TerminatedCString s_core_vessel_cpp_00656fee
// Function calls:
//   core_vessel.cpp_CCryptVessel_ctor_FUN_005e8e60
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_vessel_cpp_FUN_005e8e20(void)

{
  CCryptVessel *this_ptr;
  
  this_ptr = (CCryptVessel *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x7f4,"..\\core\\vessel.cpp",0x26);
  if (this_ptr == (CCryptVessel *)0x0) {
    return;
  }
  core_vessel_cpp_CCryptVessel_ctor_FUN_005e8e60(this_ptr);
  return;
}


// Assembly code:
// 005e8e20: PUSH 0x26
//   Label: core_vessel.cpp_FUN_005e8e20
// 005e8e22: PUSH 0x656fee
//   XREF to: 00656fee (DATA)
// 005e8e27: PUSH 0x7f4
// 005e8e2c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005e8e31: ADD ESP,0xc
// 005e8e34: TEST EAX,EAX
// 005e8e36: JNZ 0x005e8e39
//   XREF to: 005e8e39 (CONDITIONAL_JUMP)
// 005e8e38: RET
// 005e8e39: PUSH EAX
//   Label: LAB_005e8e39
// 005e8e3a: CALL core_vessel.cpp_CCryptVessel_ctor_FUN_005e8e60
//   XREF to: 005e8e60 (UNCONDITIONAL_CALL)
// 005e8e3f: ADD ESP,0x4
// 005e8e42: RET
