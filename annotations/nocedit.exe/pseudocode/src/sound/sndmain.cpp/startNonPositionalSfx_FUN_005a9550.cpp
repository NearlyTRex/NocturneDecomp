// Name: sound_sndmain.cpp_startNonPositionalSfx_FUN_005a9550
// Address: 005a9550
// Address Range: [[005a9550, 005a9577]]
// Convention: __cdecl
// Signature: uint sound_sndmain.cpp_startNonPositionalSfx_FUN_005a9550(char * filename)
// Function calls:
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_setNextSfxFlagBits_FUN_005a8b90
//   sound_sndmain.cpp_startSfx_FUN_005a8e90

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_startNonPositionalSfx_FUN_005a9550(char *filename)

{
  uint uVar1;
  char *in_stack_0000000c;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(1);
  uVar1 = sound_sndmain_cpp_startSfx_FUN_005a8e90(in_stack_0000000c);
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return uVar1;
}


// Assembly code:
// 005a9550: PUSH EBX
//   Label: sound_sndmain.cpp_startNonPositionalSfx_FUN_005a9550
// 005a9551: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005a9556: PUSH 0x1
// 005a9558: CALL sound_sndmain.cpp_setNextSfxFlagBits_FUN_005a8b90
//   XREF to: 005a8b90 (UNCONDITIONAL_CALL)
// 005a955d: ADD ESP,0x4
// 005a9560: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a9564: PUSH EDX
// 005a9565: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 005a956a: ADD ESP,0x4
// 005a956d: MOV EBX,EAX
// 005a956f: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005a9574: MOV EAX,EBX
// 005a9576: POP EBX
// 005a9577: RET
