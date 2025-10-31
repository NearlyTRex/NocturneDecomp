// Name: core_filmreel.cpp_FUN_004be670
// Address: 004be670
// Address Range: [[004be670, 004be692]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_FUN_004be670()
// Cross-references:
//   core_filmreel.cpp_staticInit_FUN_004be620 (004be620) at 004be62c [DATA]
// Globals:
//   TerminatedCString s_core_filmreel_cpp_00629aae
// Function calls:
//   core_filmreel.cpp_ctor_FUN_004be6b0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_filmreel_cpp_FUN_004be670(void)

{
  CFilmReel *this_ptr;
  
  this_ptr = (CFilmReel *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x31c,"..\\core\\filmreel.cpp",0x22);
  if (this_ptr == (CFilmReel *)0x0) {
    return;
  }
  core_filmreel_cpp_ctor_FUN_004be6b0(this_ptr);
  return;
}


// Assembly code:
// 004be670: PUSH 0x22
//   Label: core_filmreel.cpp_FUN_004be670
// 004be672: PUSH 0x629aae
//   XREF to: 00629aae (DATA)
// 004be677: PUSH 0x31c
// 004be67c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004be681: ADD ESP,0xc
// 004be684: TEST EAX,EAX
// 004be686: JNZ 0x004be689
//   XREF to: 004be689 (CONDITIONAL_JUMP)
// 004be688: RET
// 004be689: PUSH EAX
//   Label: LAB_004be689
// 004be68a: CALL core_filmreel.cpp_ctor_FUN_004be6b0
//   XREF to: 004be6b0 (UNCONDITIONAL_CALL)
// 004be68f: ADD ESP,0x4
// 004be692: RET
