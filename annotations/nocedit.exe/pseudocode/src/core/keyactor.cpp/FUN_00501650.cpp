// Name: core_keyactor.cpp_FUN_00501650
// Address: 00501650
// Address Range: [[00501650, 00501672]]
// Convention: unknown
// Signature: undefined core_keyactor.cpp_FUN_00501650()
// Cross-references:
//   core_keyactor.cpp_staticInit_FUN_00501620 (00501620) at 0050162c [DATA]
// Globals:
//   TerminatedCString s_core_keyactor_cpp_00630c1f
// Function calls:
//   core_keyactor.cpp_FUN_00501690
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_keyactor_cpp_FUN_00501650(void)

{
  void *pvVar1;
  
  pvVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x31c,"..\\core\\keyactor.cpp",0x24);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  core_keyactor_cpp_FUN_00501690();
  return;
}


// Assembly code:
// 00501650: PUSH 0x24
//   Label: core_keyactor.cpp_FUN_00501650
// 00501652: PUSH 0x630c1f
//   XREF to: 00630c1f (DATA)
// 00501657: PUSH 0x31c
// 0050165c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00501661: ADD ESP,0xc
// 00501664: TEST EAX,EAX
// 00501666: JNZ 0x00501669
//   XREF to: 00501669 (CONDITIONAL_JUMP)
// 00501668: RET
// 00501669: PUSH EAX
//   Label: LAB_00501669
// 0050166a: CALL core_keyactor.cpp_FUN_00501690
//   XREF to: 00501690 (UNCONDITIONAL_CALL)
// 0050166f: ADD ESP,0x4
// 00501672: RET
