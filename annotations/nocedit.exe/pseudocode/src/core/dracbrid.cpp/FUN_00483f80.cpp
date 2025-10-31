// Name: core_dracbrid.cpp_FUN_00483f80
// Address: 00483f80
// Address Range: [[00483f80, 00483fa2]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_00483f80()
// Cross-references:
//   core_dracbrid.cpp_staticInit_FUN_00483ef0 (00483ef0) at 00483f20 [DATA]
// Globals:
//   TerminatedCString s_core_dracbrid_cpp_00621854
// Function calls:
//   core_dracbrid.cpp_ctor_FUN_00483fc0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_dracbrid_cpp_FUN_00483f80(void)

{
  CDraculaBride *this_ptr;
  
  this_ptr = (CDraculaBride *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbfec,"..\\core\\dracbrid.cpp",0x78);
  if (this_ptr == (CDraculaBride *)0x0) {
    return;
  }
  core_dracbrid_cpp_ctor_FUN_00483fc0(this_ptr);
  return;
}


// Assembly code:
// 00483f80: PUSH 0x78
//   Label: core_dracbrid.cpp_FUN_00483f80
// 00483f82: PUSH 0x621854
//   XREF to: 00621854 (DATA)
// 00483f87: PUSH 0xbfec
// 00483f8c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00483f91: ADD ESP,0xc
// 00483f94: TEST EAX,EAX
// 00483f96: JNZ 0x00483f99
//   XREF to: 00483f99 (CONDITIONAL_JUMP)
// 00483f98: RET
// 00483f99: PUSH EAX
//   Label: LAB_00483f99
// 00483f9a: CALL core_dracbrid.cpp_ctor_FUN_00483fc0
//   XREF to: 00483fc0 (UNCONDITIONAL_CALL)
// 00483f9f: ADD ESP,0x4
// 00483fa2: RET
