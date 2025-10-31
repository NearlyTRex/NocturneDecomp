// Name: core_hero.cpp_FUN_004f3bc0
// Address: 004f3bc0
// Address Range: [[004f3bc0, 004f3be5]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f3bc0()
// Cross-references:
//   core_hero.cpp_staticInit_FUN_004f2120 (004f2120) at 004f214c [DATA]
// Globals:
//   TerminatedCString s_core_hero_cpp_0062ecd6
// Function calls:
//   core_hero.cpp_FUN_004f3c00
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_hero_cpp_FUN_004f3bc0(void)

{
  CHeroPlaceholder *this_ptr;
  
  this_ptr = (CHeroPlaceholder *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x15c,"..\\core\\hero.cpp",0x527);
  if (this_ptr == (CHeroPlaceholder *)0x0) {
    return;
  }
  core_hero_cpp_FUN_004f3c00(this_ptr);
  return;
}


// Assembly code:
// 004f3bc0: PUSH 0x527
//   Label: core_hero.cpp_FUN_004f3bc0
// 004f3bc5: PUSH 0x62ecd6
//   XREF to: 0062ecd6 (DATA)
// 004f3bca: PUSH 0x15c
// 004f3bcf: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004f3bd4: ADD ESP,0xc
// 004f3bd7: TEST EAX,EAX
// 004f3bd9: JNZ 0x004f3bdc
//   XREF to: 004f3bdc (CONDITIONAL_JUMP)
// 004f3bdb: RET
// 004f3bdc: PUSH EAX
//   Label: LAB_004f3bdc
// 004f3bdd: CALL core_hero.cpp_FUN_004f3c00
//   XREF to: 004f3c00 (UNCONDITIONAL_CALL)
// 004f3be2: ADD ESP,0x4
// 004f3be5: RET
