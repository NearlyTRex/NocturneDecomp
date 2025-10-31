// Name: core_tommygun.cpp_FUN_005dda50
// Address: 005dda50
// Address Range: [[005dda50, 005dda72]]
// Convention: unknown
// Signature: undefined core_tommygun.cpp_FUN_005dda50()
// Cross-references:
//   core_tommygun.cpp_staticInit_FUN_005dda20 (005dda20) at 005dda2c [DATA]
// Globals:
//   TerminatedCString s_core_tommygun_cpp_0065548b
// Function calls:
//   core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_tommygun_cpp_FUN_005dda50(void)

{
  CTommyGun *this_ptr;
  
  this_ptr = (CTommyGun *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x584,"..\\core\\tommygun.cpp",0x2f);
  if (this_ptr == (CTommyGun *)0x0) {
    return;
  }
  core_tommygun_cpp_CTommyGun_ctor_FUN_005dda90(this_ptr);
  return;
}


// Assembly code:
// 005dda50: PUSH 0x2f
//   Label: core_tommygun.cpp_FUN_005dda50
// 005dda52: PUSH 0x65548b
//   XREF to: 0065548b (DATA)
// 005dda57: PUSH 0x584
// 005dda5c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005dda61: ADD ESP,0xc
// 005dda64: TEST EAX,EAX
// 005dda66: JNZ 0x005dda69
//   XREF to: 005dda69 (CONDITIONAL_JUMP)
// 005dda68: RET
// 005dda69: PUSH EAX
//   Label: LAB_005dda69
// 005dda6a: CALL core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90
//   XREF to: 005dda90 (UNCONDITIONAL_CALL)
// 005dda6f: ADD ESP,0x4
// 005dda72: RET
