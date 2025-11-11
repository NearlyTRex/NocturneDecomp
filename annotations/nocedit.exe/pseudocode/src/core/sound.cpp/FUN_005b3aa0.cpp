// Name: core_sound.cpp_FUN_005b3aa0
// Address: 005b3aa0
// Address Range: [[005b3aa0, 005b3ade]]
// Convention: unknown
// Signature: undefined core_sound.cpp_FUN_005b3aa0()
// Function calls:
//   core_sound.cpp_FUN_005b1fd0
//   sound_sndmain.cpp_FUN_005a8b40
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30

#include "nocturne.h"

int core_sound_cpp_FUN_005b3aa0(void)

{
  int iVar1;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_FUN_005a8b40();
  iVar1 = core_sound_cpp_FUN_005b1fd0();
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return iVar1;
}


// Assembly code:
// 005b3aa0: PUSH EBX
//   Label: core_sound.cpp_FUN_005b3aa0
// 005b3aa1: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005b3aa6: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005b3aaa: SUB ESP,0x8
// 005b3aad: FSTP double ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005b3ab0: CALL sound_sndmain.cpp_FUN_005a8b40
//   XREF to: 005a8b40 (UNCONDITIONAL_CALL)
// 005b3ab5: ADD ESP,0x8
// 005b3ab8: PUSH 0x1
// 005b3aba: PUSH 0x0
// 005b3abc: PUSH 0x0
// 005b3abe: PUSH 0x0
// 005b3ac0: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 005b3ac4: PUSH 0x0
// 005b3ac6: PUSH EDX
// 005b3ac7: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005b3acb: PUSH ECX
// 005b3acc: CALL core_sound.cpp_FUN_005b1fd0
//   XREF to: 005b1fd0 (UNCONDITIONAL_CALL)
// 005b3ad1: ADD ESP,0x1c
// 005b3ad4: MOV EBX,EAX
// 005b3ad6: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005b3adb: MOV EAX,EBX
// 005b3add: POP EBX
// 005b3ade: RET
