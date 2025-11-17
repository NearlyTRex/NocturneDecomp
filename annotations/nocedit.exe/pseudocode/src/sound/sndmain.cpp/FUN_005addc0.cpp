// Name: sound_sndmain.cpp_FUN_005addc0
// Address: 005addc0
// Address Range: [[005addc0, 005addca]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_FUN_005addc0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_FUN_005addc0(void)

{
  int in_stack_00000004;
  
  return *(int *)(in_stack_00000004 + 0x100);
}


// Assembly code:
// 005addc0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: sound_sndmain.cpp_FUN_005addc0
//   XREF to: Stack[0x4] (READ)
// 005addc4: MOV EAX,dword ptr [EAX + 0x100]
// 005addca: RET
