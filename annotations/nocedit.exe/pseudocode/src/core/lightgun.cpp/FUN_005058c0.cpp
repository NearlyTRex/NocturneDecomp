// Name: core_lightgun.cpp_FUN_005058c0
// Address: 005058c0
// Address Range: [[005058c0, 005058e2]]
// Convention: unknown
// Signature: undefined core_lightgun.cpp_FUN_005058c0()
// Cross-references:
//   core_lightgun.cpp_staticInit_FUN_00505890 (00505890) at 0050589c [DATA]
// Globals:
//   TerminatedCString s_core_lightgun_cpp_00631440
// Function calls:
//   core_lightgun.cpp_FUN_00505900
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_lightgun_cpp_FUN_005058c0(void)

{
  CLightGun *this_ptr;
  
  this_ptr = (CLightGun *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x590,"..\\core\\lightgun.cpp",0x3a);
  if (this_ptr == (CLightGun *)0x0) {
    return;
  }
  core_lightgun_cpp_FUN_00505900(this_ptr);
  return;
}


// Assembly code:
// 005058c0: PUSH 0x3a
//   Label: core_lightgun.cpp_FUN_005058c0
// 005058c2: PUSH 0x631440
//   XREF to: 00631440 (DATA)
// 005058c7: PUSH 0x590
// 005058cc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005058d1: ADD ESP,0xc
// 005058d4: TEST EAX,EAX
// 005058d6: JNZ 0x005058d9
//   XREF to: 005058d9 (CONDITIONAL_JUMP)
// 005058d8: RET
// 005058d9: PUSH EAX
//   Label: LAB_005058d9
// 005058da: CALL core_lightgun.cpp_FUN_00505900
//   XREF to: 00505900 (UNCONDITIONAL_CALL)
// 005058df: ADD ESP,0x4
// 005058e2: RET
