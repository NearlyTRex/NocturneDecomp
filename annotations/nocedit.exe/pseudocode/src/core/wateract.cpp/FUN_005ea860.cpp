// Name: core_wateract.cpp_FUN_005ea860
// Address: 005ea860
// Address Range: [[005ea860, 005ea882]]
// Convention: unknown
// Signature: undefined core_wateract.cpp_FUN_005ea860()
// Cross-references:
//   core_wateract.cpp_staticInit_FUN_005ea810 (005ea810) at 005ea844 [DATA]
// Globals:
//   TerminatedCString s_core_wateract_cpp_00657253
// Function calls:
//   core_wateract.cpp_CWaterActor_ctor_FUN_005ea8a0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_wateract_cpp_FUN_005ea860(void)

{
  CWaterActor *this_ptr;
  
  this_ptr = (CWaterActor *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2b238,"..\\core\\wateract.cpp",0x55);
  if (this_ptr == (CWaterActor *)0x0) {
    return;
  }
  core_wateract_cpp_CWaterActor_ctor_FUN_005ea8a0(this_ptr);
  return;
}


// Assembly code:
// 005ea860: PUSH 0x55
//   Label: core_wateract.cpp_FUN_005ea860
// 005ea862: PUSH 0x657253
//   XREF to: 00657253 (DATA)
// 005ea867: PUSH 0x2b238
// 005ea86c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005ea871: ADD ESP,0xc
// 005ea874: TEST EAX,EAX
// 005ea876: JNZ 0x005ea879
//   XREF to: 005ea879 (CONDITIONAL_JUMP)
// 005ea878: RET
// 005ea879: PUSH EAX
//   Label: LAB_005ea879
// 005ea87a: CALL core_wateract.cpp_CWaterActor_ctor_FUN_005ea8a0
//   XREF to: 005ea8a0 (UNCONDITIONAL_CALL)
// 005ea87f: ADD ESP,0x4
// 005ea882: RET
