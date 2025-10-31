// Name: core_tvbat.cpp_FUN_005e3e80
// Address: 005e3e80
// Address Range: [[005e3e80, 005e3ea2]]
// Convention: unknown
// Signature: undefined core_tvbat.cpp_FUN_005e3e80()
// Cross-references:
//   core_tvbat.cpp_staticInit_FUN_005e3e50 (005e3e50) at 005e3e5c [DATA]
// Globals:
//   TerminatedCString s_core_tvbat_cpp_00656889
// Function calls:
//   core_tvbat.cpp_CTVBat_ctor_FUN_005e3ef0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_tvbat_cpp_FUN_005e3e80(void)

{
  CTVBat *this_ptr;
  
  this_ptr = (CTVBat *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xc0f4,"..\\core\\tvbat.cpp",0x39);
  if (this_ptr == (CTVBat *)0x0) {
    return;
  }
  core_tvbat_cpp_CTVBat_ctor_FUN_005e3ef0(this_ptr);
  return;
}


// Assembly code:
// 005e3e80: PUSH 0x39
//   Label: core_tvbat.cpp_FUN_005e3e80
// 005e3e82: PUSH 0x656889
//   XREF to: 00656889 (DATA)
// 005e3e87: PUSH 0xc0f4
// 005e3e8c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005e3e91: ADD ESP,0xc
// 005e3e94: TEST EAX,EAX
// 005e3e96: JNZ 0x005e3e99
//   XREF to: 005e3e99 (CONDITIONAL_JUMP)
// 005e3e98: RET
// 005e3e99: PUSH EAX
//   Label: LAB_005e3e99
// 005e3e9a: CALL core_tvbat.cpp_CTVBat_ctor_FUN_005e3ef0
//   XREF to: 005e3ef0 (UNCONDITIONAL_CALL)
// 005e3e9f: ADD ESP,0x4
// 005e3ea2: RET
