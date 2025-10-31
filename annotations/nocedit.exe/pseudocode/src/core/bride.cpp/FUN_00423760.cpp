// Name: core_bride.cpp_FUN_00423760
// Address: 00423760
// Address Range: [[00423760, 00423782]]
// Convention: unknown
// Signature: undefined core_bride.cpp_FUN_00423760()
// Cross-references:
//   core_bride.cpp_staticInit_FUN_00423700 (00423700) at 00423719 [DATA]
// Globals:
//   TerminatedCString s_core_bride_cpp_00616aa4
// Function calls:
//   core_bride.cpp_CBride_ctor_FUN_004237a0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_bride_cpp_FUN_00423760(void)

{
  CBride *this_ptr;
  
  this_ptr = (CBride *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbeec,"..\\core\\bride.cpp",0x53);
  if (this_ptr == (CBride *)0x0) {
    return;
  }
  core_bride_cpp_CBride_ctor_FUN_004237a0(this_ptr);
  return;
}


// Assembly code:
// 00423760: PUSH 0x53
//   Label: core_bride.cpp_FUN_00423760
// 00423762: PUSH 0x616aa4
//   XREF to: 00616aa4 (DATA)
// 00423767: PUSH 0xbeec
// 0042376c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00423771: ADD ESP,0xc
// 00423774: TEST EAX,EAX
// 00423776: JNZ 0x00423779
//   XREF to: 00423779 (CONDITIONAL_JUMP)
// 00423778: RET
// 00423779: PUSH EAX
//   Label: LAB_00423779
// 0042377a: CALL core_bride.cpp_CBride_ctor_FUN_004237a0
//   XREF to: 004237a0 (UNCONDITIONAL_CALL)
// 0042377f: ADD ESP,0x4
// 00423782: RET
