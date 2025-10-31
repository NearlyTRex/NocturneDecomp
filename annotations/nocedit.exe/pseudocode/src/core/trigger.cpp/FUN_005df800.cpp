// Name: core_trigger.cpp_FUN_005df800
// Address: 005df800
// Address Range: [[005df800, 005df822]]
// Convention: unknown
// Signature: undefined core_trigger.cpp_FUN_005df800()
// Cross-references:
//   core_trigger.cpp_staticInit_FUN_005df7d0 (005df7d0) at 005df7dc [DATA]
// Globals:
//   TerminatedCString s_core_trigger_cpp_006555e5
// Function calls:
//   core_trigger.cpp_CTrigger_ctor_FUN_005df840
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_trigger_cpp_FUN_005df800(void)

{
  CTrigger *this_ptr;
  
  this_ptr = (CTrigger *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x370,"..\\core\\trigger.cpp",0x35);
  if (this_ptr == (CTrigger *)0x0) {
    return;
  }
  core_trigger_cpp_CTrigger_ctor_FUN_005df840(this_ptr);
  return;
}


// Assembly code:
// 005df800: PUSH 0x35
//   Label: core_trigger.cpp_FUN_005df800
// 005df802: PUSH 0x6555e5
//   XREF to: 006555e5 (DATA)
// 005df807: PUSH 0x370
// 005df80c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005df811: ADD ESP,0xc
// 005df814: TEST EAX,EAX
// 005df816: JNZ 0x005df819
//   XREF to: 005df819 (CONDITIONAL_JUMP)
// 005df818: RET
// 005df819: PUSH EAX
//   Label: LAB_005df819
// 005df81a: CALL core_trigger.cpp_CTrigger_ctor_FUN_005df840
//   XREF to: 005df840 (UNCONDITIONAL_CALL)
// 005df81f: ADD ESP,0x4
// 005df822: RET
