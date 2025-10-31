// Name: sound_sndmain.cpp_FUN_005aa340
// Address: 005aa340
// Address Range: [[005aa340, 005aa35c]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005aa340()
// Globals:
//   undefined4 DAT_00681b40
//   undefined4 DAT_00681b44
// Function calls:
//   sound_sndmain.cpp_FUN_005a4450

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_005aa340(void)

{
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  _DAT_00681b40 = in_stack_00000004;
  DAT_00681b44 = in_stack_00000008;
  sound_sndmain_cpp_FUN_005a4450();
  return;
}


// Assembly code:
// 005aa340: MOV EAX,dword ptr [ESP + 0x4]
//   Label: sound_sndmain.cpp_FUN_005aa340
//   XREF to: Stack[0x4] (READ)
// 005aa344: MOV [0x00681b40],EAX
//   XREF to: 00681b40 (WRITE)
// 005aa349: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005aa34d: PUSH 0x0
// 005aa34f: MOV [0x00681b44],EAX
//   XREF to: 00681b44 (WRITE)
// 005aa354: CALL sound_sndmain.cpp_FUN_005a4450
//   XREF to: 005a4450 (UNCONDITIONAL_CALL)
// 005aa359: ADD ESP,0x4
// 005aa35c: RET
