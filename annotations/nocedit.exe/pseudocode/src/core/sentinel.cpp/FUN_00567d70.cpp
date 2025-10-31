// Name: core_sentinel.cpp_FUN_00567d70
// Address: 00567d70
// Address Range: [[00567d70, 00567d92]]
// Convention: unknown
// Signature: undefined core_sentinel.cpp_FUN_00567d70()
// Cross-references:
//   core_sentinel.cpp_staticInit_FUN_00567d40 (00567d40) at 00567d4c [DATA]
// Globals:
//   TerminatedCString s_core_sentinel_cpp_00645704
// Function calls:
//   core_sentinel.cpp_CSentinel_ctor_FUN_00567db0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_sentinel_cpp_FUN_00567d70(void)

{
  CSentinel *this_ptr;
  
  this_ptr = (CSentinel *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbec4,"..\\core\\sentinel.cpp",0x5f);
  if (this_ptr == (CSentinel *)0x0) {
    return;
  }
  core_sentinel_cpp_CSentinel_ctor_FUN_00567db0(this_ptr);
  return;
}


// Assembly code:
// 00567d70: PUSH 0x5f
//   Label: core_sentinel.cpp_FUN_00567d70
// 00567d72: PUSH 0x645704
//   XREF to: 00645704 (DATA)
// 00567d77: PUSH 0xbec4
// 00567d7c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00567d81: ADD ESP,0xc
// 00567d84: TEST EAX,EAX
// 00567d86: JNZ 0x00567d89
//   XREF to: 00567d89 (CONDITIONAL_JUMP)
// 00567d88: RET
// 00567d89: PUSH EAX
//   Label: LAB_00567d89
// 00567d8a: CALL core_sentinel.cpp_CSentinel_ctor_FUN_00567db0
//   XREF to: 00567db0 (UNCONDITIONAL_CALL)
// 00567d8f: ADD ESP,0x4
// 00567d92: RET
