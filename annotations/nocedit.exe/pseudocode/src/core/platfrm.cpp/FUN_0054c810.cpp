// Name: core_platfrm.cpp_FUN_0054c810
// Address: 0054c810
// Address Range: [[0054c810, 0054c832]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054c810()
// Cross-references:
//   core_platfrm.cpp_staticInit_FUN_0054c7e0 (0054c7e0) at 0054c7ec [DATA]
// Globals:
//   TerminatedCString s_core_platfrm_cpp_0063f760
// Function calls:
//   core_platfrm.cpp_FUN_0054c850
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_platfrm_cpp_FUN_0054c810(void)

{
  CPlatform *this_ptr;
  
  this_ptr = (CPlatform *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x72c,"..\\core\\platfrm.cpp",0x31);
  if (this_ptr == (CPlatform *)0x0) {
    return;
  }
  core_platfrm_cpp_FUN_0054c850(this_ptr);
  return;
}


// Assembly code:
// 0054c810: PUSH 0x31
//   Label: core_platfrm.cpp_FUN_0054c810
// 0054c812: PUSH 0x63f760
//   XREF to: 0063f760 (DATA)
// 0054c817: PUSH 0x72c
// 0054c81c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0054c821: ADD ESP,0xc
// 0054c824: TEST EAX,EAX
// 0054c826: JNZ 0x0054c829
//   XREF to: 0054c829 (CONDITIONAL_JUMP)
// 0054c828: RET
// 0054c829: PUSH EAX
//   Label: LAB_0054c829
// 0054c82a: CALL core_platfrm.cpp_FUN_0054c850
//   XREF to: 0054c850 (UNCONDITIONAL_CALL)
// 0054c82f: ADD ESP,0x4
// 0054c832: RET
