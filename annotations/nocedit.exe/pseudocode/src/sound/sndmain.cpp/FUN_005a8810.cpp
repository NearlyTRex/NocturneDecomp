// Name: sound_sndmain.cpp_FUN_005a8810
// Address: 005a8810
// Address Range: [[005a8810, 005a8828]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a8810()
// Function calls:
//   sound_sndmain.cpp_FUN_005a87d0

#include "nocturne.h"

bool sound_sndmain_cpp_FUN_005a8810(void)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_FUN_005a87d0();
  return 1 < iVar1;
}


// Assembly code:
// 005a8810: MOV EDX,dword ptr [ESP + 0x4]
//   Label: sound_sndmain.cpp_FUN_005a8810
//   XREF to: Stack[0x4] (READ)
// 005a8814: PUSH EDX
// 005a8815: CALL sound_sndmain.cpp_FUN_005a87d0
//   XREF to: 005a87d0 (UNCONDITIONAL_CALL)
// 005a881a: ADD ESP,0x4
// 005a881d: CMP EAX,0x1
// 005a8820: SETG AL
// 005a8823: AND EAX,0xff
// 005a8828: RET
