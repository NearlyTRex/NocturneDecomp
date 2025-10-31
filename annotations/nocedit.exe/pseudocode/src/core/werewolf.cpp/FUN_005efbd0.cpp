// Name: core_werewolf.cpp_FUN_005efbd0
// Address: 005efbd0
// Address Range: [[005efbd0, 005efbf2]]
// Convention: unknown
// Signature: undefined core_werewolf.cpp_FUN_005efbd0()
// Cross-references:
//   core_werewolf.cpp_staticInit_FUN_005efb70 (005efb70) at 005efb92 [DATA]
// Globals:
//   TerminatedCString s_core_werewolf_cpp_00657c3e
// Function calls:
//   core_werewolf.cpp_CWerewolf_ctor_FUN_005efc10
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_werewolf_cpp_FUN_005efbd0(void)

{
  CWerewolf *this_ptr;
  
  this_ptr = (CWerewolf *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbf04,"..\\core\\werewolf.cpp",0x59);
  if (this_ptr == (CWerewolf *)0x0) {
    return;
  }
  core_werewolf_cpp_CWerewolf_ctor_FUN_005efc10(this_ptr);
  return;
}


// Assembly code:
// 005efbd0: PUSH 0x59
//   Label: core_werewolf.cpp_FUN_005efbd0
// 005efbd2: PUSH 0x657c3e
//   XREF to: 00657c3e (DATA)
// 005efbd7: PUSH 0xbf04
// 005efbdc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005efbe1: ADD ESP,0xc
// 005efbe4: TEST EAX,EAX
// 005efbe6: JNZ 0x005efbe9
//   XREF to: 005efbe9 (CONDITIONAL_JUMP)
// 005efbe8: RET
// 005efbe9: PUSH EAX
//   Label: LAB_005efbe9
// 005efbea: CALL core_werewolf.cpp_CWerewolf_ctor_FUN_005efc10
//   XREF to: 005efc10 (UNCONDITIONAL_CALL)
// 005efbef: ADD ESP,0x4
// 005efbf2: RET
