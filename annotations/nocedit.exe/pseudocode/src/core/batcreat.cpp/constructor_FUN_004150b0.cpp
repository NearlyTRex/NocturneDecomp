// Name: core_batcreat.cpp_constructor_FUN_004150b0
// Address: 004150b0
// Address Range: [[004150b0, 004150d2]]
// Convention: unknown
// Signature: undefined core_batcreat.cpp_constructor_FUN_004150b0()
// Cross-references:
//   core_batcreat.cpp_staticInit_FUN_00415080 (00415080) at 0041508c [DATA]
// Globals:
//   TerminatedCString s_core_batcreat_cpp_00615456
// Function calls:
//   core_batcreat.cpp_CBatCreature_ctor_FUN_004150f0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_batcreat_cpp_constructor_FUN_004150b0(void)

{
  CBatCreature *this_ptr;
  
  this_ptr = (CBatCreature *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbf04,"..\\core\\batcreat.cpp",0x4d);
  if (this_ptr == (CBatCreature *)0x0) {
    return;
  }
  core_batcreat_cpp_CBatCreature_ctor_FUN_004150f0(this_ptr);
  return;
}


// Assembly code:
// 004150b0: PUSH 0x4d
//   Label: core_batcreat.cpp_constructor_FUN_004150b0
// 004150b2: PUSH 0x615456
//   XREF to: 00615456 (DATA)
// 004150b7: PUSH 0xbf04
// 004150bc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004150c1: ADD ESP,0xc
// 004150c4: TEST EAX,EAX
// 004150c6: JNZ 0x004150c9
//   XREF to: 004150c9 (CONDITIONAL_JUMP)
// 004150c8: RET
// 004150c9: PUSH EAX
//   Label: LAB_004150c9
// 004150ca: CALL core_batcreat.cpp_CBatCreature_ctor_FUN_004150f0
//   XREF to: 004150f0 (UNCONDITIONAL_CALL)
// 004150cf: ADD ESP,0x4
// 004150d2: RET
