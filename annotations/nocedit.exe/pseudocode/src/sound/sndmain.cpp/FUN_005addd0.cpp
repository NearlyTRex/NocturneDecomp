// Name: sound_sndmain.cpp_FUN_005addd0
// Address: 005addd0
// Address Range: [[005addd0, 005addda]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_FUN_005addd0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_FUN_005addd0(void)

{
  int in_stack_00000004;
  
  return *(int *)(in_stack_00000004 + 0x104);
}


// Assembly code:
// 005addd0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: sound_sndmain.cpp_FUN_005addd0
//   XREF to: Stack[0x4] (READ)
// 005addd4: MOV EAX,dword ptr [EAX + 0x104]
// 005addda: RET
