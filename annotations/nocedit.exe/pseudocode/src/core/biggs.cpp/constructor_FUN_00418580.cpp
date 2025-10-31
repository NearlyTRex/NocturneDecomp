// Name: core_biggs.cpp_constructor_FUN_00418580
// Address: 00418580
// Address Range: [[00418580, 004185a2]]
// Convention: unknown
// Signature: undefined core_biggs.cpp_constructor_FUN_00418580()
// Cross-references:
//   core_biggs.cpp_staticInit_FUN_00418550 (00418550) at 0041855c [DATA]
// Globals:
//   TerminatedCString s_core_biggs_cpp_00615aa8
// Function calls:
//   core_biggs.cpp_CBiggs_ctor_FUN_004185c0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_biggs_cpp_constructor_FUN_00418580(void)

{
  CBiggs *this_ptr;
  
  this_ptr = (CBiggs *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xccd0,"..\\core\\biggs.cpp",0x52);
  if (this_ptr == (CBiggs *)0x0) {
    return;
  }
  core_biggs_cpp_CBiggs_ctor_FUN_004185c0(this_ptr);
  return;
}


// Assembly code:
// 00418580: PUSH 0x52
//   Label: core_biggs.cpp_constructor_FUN_00418580
// 00418582: PUSH 0x615aa8
//   XREF to: 00615aa8 (DATA)
// 00418587: PUSH 0xccd0
// 0041858c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00418591: ADD ESP,0xc
// 00418594: TEST EAX,EAX
// 00418596: JNZ 0x00418599
//   XREF to: 00418599 (CONDITIONAL_JUMP)
// 00418598: RET
// 00418599: PUSH EAX
//   Label: LAB_00418599
// 0041859a: CALL core_biggs.cpp_CBiggs_ctor_FUN_004185c0
//   XREF to: 004185c0 (UNCONDITIONAL_CALL)
// 0041859f: ADD ESP,0x4
// 004185a2: RET
