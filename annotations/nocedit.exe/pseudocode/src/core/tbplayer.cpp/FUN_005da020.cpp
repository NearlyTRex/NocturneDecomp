// Name: core_tbplayer.cpp_FUN_005da020
// Address: 005da020
// Address Range: [[005da020, 005da042]]
// Convention: unknown
// Signature: undefined core_tbplayer.cpp_FUN_005da020()
// Cross-references:
//   core_tbplayer.cpp_staticInit_FUN_005d9fd0 (005d9fd0) at 005d9fdc [DATA]
// Globals:
//   TerminatedCString s_core_tbplayer_cpp_00654b9a
// Function calls:
//   core_tbplayer.cpp_CBassPlayer_ctor_FUN_005da060
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_tbplayer_cpp_FUN_005da020(void)

{
  CBassPlayer *this_ptr;
  
  this_ptr = (CBassPlayer *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1f710,"..\\core\\tbplayer.cpp",0x20);
  if (this_ptr == (CBassPlayer *)0x0) {
    return;
  }
  core_tbplayer_cpp_CBassPlayer_ctor_FUN_005da060(this_ptr);
  return;
}


// Assembly code:
// 005da020: PUSH 0x20
//   Label: core_tbplayer.cpp_FUN_005da020
// 005da022: PUSH 0x654b9a
//   XREF to: 00654b9a (DATA)
// 005da027: PUSH 0x1f710
// 005da02c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005da031: ADD ESP,0xc
// 005da034: TEST EAX,EAX
// 005da036: JNZ 0x005da039
//   XREF to: 005da039 (CONDITIONAL_JUMP)
// 005da038: RET
// 005da039: PUSH EAX
//   Label: LAB_005da039
// 005da03a: CALL core_tbplayer.cpp_CBassPlayer_ctor_FUN_005da060
//   XREF to: 005da060 (UNCONDITIONAL_CALL)
// 005da03f: ADD ESP,0x4
// 005da042: RET
