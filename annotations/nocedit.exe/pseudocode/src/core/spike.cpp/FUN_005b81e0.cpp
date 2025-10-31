// Name: core_spike.cpp_FUN_005b81e0
// Address: 005b81e0
// Address Range: [[005b81e0, 005b8202]]
// Convention: unknown
// Signature: undefined core_spike.cpp_FUN_005b81e0()
// Cross-references:
//   core_spike.cpp_staticInit_FUN_005b81b0 (005b81b0) at 005b81bc [DATA]
// Globals:
//   TerminatedCString s_core_spike_cpp_00652dcf
// Function calls:
//   core_spike.cpp_CSpike_ctor_FUN_005b8220
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_spike_cpp_FUN_005b81e0(void)

{
  CSpike *this_ptr;
  
  this_ptr = (CSpike *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x560,"..\\core\\spike.cpp",0x21);
  if (this_ptr == (CSpike *)0x0) {
    return;
  }
  core_spike_cpp_CSpike_ctor_FUN_005b8220(this_ptr);
  return;
}


// Assembly code:
// 005b81e0: PUSH 0x21
//   Label: core_spike.cpp_FUN_005b81e0
// 005b81e2: PUSH 0x652dcf
//   XREF to: 00652dcf (DATA)
// 005b81e7: PUSH 0x560
// 005b81ec: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005b81f1: ADD ESP,0xc
// 005b81f4: TEST EAX,EAX
// 005b81f6: JNZ 0x005b81f9
//   XREF to: 005b81f9 (CONDITIONAL_JUMP)
// 005b81f8: RET
// 005b81f9: PUSH EAX
//   Label: LAB_005b81f9
// 005b81fa: CALL core_spike.cpp_CSpike_ctor_FUN_005b8220
//   XREF to: 005b8220 (UNCONDITIONAL_CALL)
// 005b81ff: ADD ESP,0x4
// 005b8202: RET
