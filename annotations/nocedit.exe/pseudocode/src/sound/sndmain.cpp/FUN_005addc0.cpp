// Name: sound_sndmain.cpp_FUN_005addc0
// Address: 005addc0
// Address Range: [[005addc0, 005addca]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005addc0()

#include "nocturne.h"

undefined4 sound_sndmain_cpp_FUN_005addc0(void)

{
  int in_stack_00000004;
  
  return *(undefined4 *)(in_stack_00000004 + 0x100);
}


// Assembly code:
// 005addc0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: sound_sndmain.cpp_FUN_005addc0
//   XREF to: Stack[0x4] (READ)
// 005addc4: MOV EAX,dword ptr [EAX + 0x100]
// 005addca: RET
