// Name: core_filmreel.cpp_FUN_004bea00
// Address: 004bea00
// Address Range: [[004bea00, 004bea25]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_FUN_004bea00()
// Cross-references:
//   core_filmreel.cpp_staticInit_FUN_004be620 (004be620) at 004be64f [DATA]
// Globals:
//   TerminatedCString s_core_filmreel_cpp_00629b27
// Function calls:
//   core_filmreel.cpp_ctor_FUN_004bea40
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_filmreel_cpp_FUN_004bea00(void)

{
  CFilmProjector *this_ptr;
  
  this_ptr = (CFilmProjector *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3e4,"..\\core\\filmreel.cpp",0xf3);
  if (this_ptr == (CFilmProjector *)0x0) {
    return;
  }
  core_filmreel_cpp_ctor_FUN_004bea40(this_ptr);
  return;
}


// Assembly code:
// 004bea00: PUSH 0xf3
//   Label: core_filmreel.cpp_FUN_004bea00
// 004bea05: PUSH 0x629b27
//   XREF to: 00629b27 (DATA)
// 004bea0a: PUSH 0x3e4
// 004bea0f: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004bea14: ADD ESP,0xc
// 004bea17: TEST EAX,EAX
// 004bea19: JNZ 0x004bea1c
//   XREF to: 004bea1c (CONDITIONAL_JUMP)
// 004bea1b: RET
// 004bea1c: PUSH EAX
//   Label: LAB_004bea1c
// 004bea1d: CALL core_filmreel.cpp_ctor_FUN_004bea40
//   XREF to: 004bea40 (UNCONDITIONAL_CALL)
// 004bea22: ADD ESP,0x4
// 004bea25: RET
