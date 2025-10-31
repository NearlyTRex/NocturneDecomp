// Name: core_npc.cpp_FUN_005447a0
// Address: 005447a0
// Address Range: [[005447a0, 005447c2]]
// Convention: unknown
// Signature: undefined core_npc.cpp_FUN_005447a0()
// Cross-references:
//   core_npc.cpp_staticInit_FUN_00544770 (00544770) at 0054477c [DATA]
// Globals:
//   TerminatedCString s_core_npc_cpp_0063e2f9
// Function calls:
//   core_npc.cpp_FUN_005447e0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_npc_cpp_FUN_005447a0(void)

{
  CNPC *this_ptr;
  
  this_ptr = (CNPC *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1f708,"..\\core\\npc.cpp",0x2d);
  if (this_ptr == (CNPC *)0x0) {
    return;
  }
  core_npc_cpp_FUN_005447e0(this_ptr);
  return;
}


// Assembly code:
// 005447a0: PUSH 0x2d
//   Label: core_npc.cpp_FUN_005447a0
// 005447a2: PUSH 0x63e2f9
//   XREF to: 0063e2f9 (DATA)
// 005447a7: PUSH 0x1f708
// 005447ac: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005447b1: ADD ESP,0xc
// 005447b4: TEST EAX,EAX
// 005447b6: JNZ 0x005447b9
//   XREF to: 005447b9 (CONDITIONAL_JUMP)
// 005447b8: RET
// 005447b9: PUSH EAX
//   Label: LAB_005447b9
// 005447ba: CALL core_npc.cpp_FUN_005447e0
//   XREF to: 005447e0 (UNCONDITIONAL_CALL)
// 005447bf: ADD ESP,0x4
// 005447c2: RET
