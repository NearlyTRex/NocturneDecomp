// Name: core_tbplayer.cpp_FUN_005da280
// Address: 005da280
// Address Range: [[005da280, 005da2a2]]
// Convention: unknown
// Signature: undefined core_tbplayer.cpp_FUN_005da280()
// Cross-references:
//   core_tbplayer.cpp_staticInit_FUN_005d9fd0 (005d9fd0) at 005d9fff [DATA]
// Globals:
//   TerminatedCString s_core_tbplayer_cpp_00654bd8
// Function calls:
//   core_tbplayer.cpp_CDrummer_ctor_FUN_005da2c0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_tbplayer_cpp_FUN_005da280(void)

{
  CDrummer *this_ptr;
  
  this_ptr = (CDrummer *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1f710,"..\\core\\tbplayer.cpp",0x7a);
  if (this_ptr == (CDrummer *)0x0) {
    return;
  }
  core_tbplayer_cpp_CDrummer_ctor_FUN_005da2c0(this_ptr);
  return;
}


// Assembly code:
// 005da280: PUSH 0x7a
//   Label: core_tbplayer.cpp_FUN_005da280
// 005da282: PUSH 0x654bd8
//   XREF to: 00654bd8 (DATA)
// 005da287: PUSH 0x1f710
// 005da28c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005da291: ADD ESP,0xc
// 005da294: TEST EAX,EAX
// 005da296: JNZ 0x005da299
//   XREF to: 005da299 (CONDITIONAL_JUMP)
// 005da298: RET
// 005da299: PUSH EAX
//   Label: LAB_005da299
// 005da29a: CALL core_tbplayer.cpp_CDrummer_ctor_FUN_005da2c0
//   XREF to: 005da2c0 (UNCONDITIONAL_CALL)
// 005da29f: ADD ESP,0x4
// 005da2a2: RET
