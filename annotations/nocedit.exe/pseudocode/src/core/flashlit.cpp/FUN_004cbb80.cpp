// Name: core_flashlit.cpp_FUN_004cbb80
// Address: 004cbb80
// Address Range: [[004cbb80, 004cbba2]]
// Convention: unknown
// Signature: undefined core_flashlit.cpp_FUN_004cbb80()
// Cross-references:
//   core_flashlit.cpp_staticInit_FUN_004cbb50 (004cbb50) at 004cbb5c [DATA]
// Globals:
//   TerminatedCString s_core_flashlit_cpp_0062a3b4
// Function calls:
//   core_flamegun.cpp_FUN_004cbbc0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_flashlit_cpp_FUN_004cbb80(void)

{
  CFlashlight *this_ptr;
  
  this_ptr = (CFlashlight *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x578,"..\\core\\flashlit.cpp",0x2b);
  if (this_ptr == (CFlashlight *)0x0) {
    return;
  }
  core_flamegun_cpp_FUN_004cbbc0(this_ptr);
  return;
}


// Assembly code:
// 004cbb80: PUSH 0x2b
//   Label: core_flashlit.cpp_FUN_004cbb80
// 004cbb82: PUSH 0x62a3b4
//   XREF to: 0062a3b4 (DATA)
// 004cbb87: PUSH 0x578
// 004cbb8c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004cbb91: ADD ESP,0xc
// 004cbb94: TEST EAX,EAX
// 004cbb96: JNZ 0x004cbb99
//   XREF to: 004cbb99 (CONDITIONAL_JUMP)
// 004cbb98: RET
// 004cbb99: PUSH EAX
//   Label: LAB_004cbb99
// 004cbb9a: CALL core_flamegun.cpp_FUN_004cbbc0
//   XREF to: 004cbbc0 (UNCONDITIONAL_CALL)
// 004cbb9f: ADD ESP,0x4
// 004cbba2: RET
