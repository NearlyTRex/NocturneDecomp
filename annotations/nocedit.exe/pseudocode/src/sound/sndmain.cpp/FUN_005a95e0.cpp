// Name: sound_sndmain.cpp_FUN_005a95e0
// Address: 005a95e0
// Address Range: [[005a95e0, 005a9614]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a95e0()
// Function calls:
//   sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_setNextSfxTrackedPosition_FUN_005a8940
//   sound_sndmain.cpp_startSfx_FUN_005a8e90

#include "nocturne.h"

undefined4 sound_sndmain_cpp_FUN_005a95e0(void)

{
  undefined4 uVar1;
  CVector3f *in_stack_00000010;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_clearNextSfxFlagBits_FUN_005a8bb0(1);
  sound_sndmain_cpp_setNextSfxTrackedPosition_FUN_005a8940(in_stack_00000010);
  uVar1 = sound_sndmain_cpp_startSfx_FUN_005a8e90();
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return uVar1;
}


// Assembly code:
// 005a95e0: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005a95e0
// 005a95e1: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005a95e6: PUSH 0x1
// 005a95e8: CALL sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0
//   XREF to: 005a8bb0 (UNCONDITIONAL_CALL)
// 005a95ed: ADD ESP,0x4
// 005a95f0: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005a95f4: PUSH EDX
// 005a95f5: CALL sound_sndmain.cpp_setNextSfxTrackedPosition_FUN_005a8940
//   XREF to: 005a8940 (UNCONDITIONAL_CALL)
// 005a95fa: ADD ESP,0x4
// 005a95fd: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a9601: PUSH ECX
// 005a9602: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 005a9607: ADD ESP,0x4
// 005a960a: MOV EBX,EAX
// 005a960c: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005a9611: MOV EAX,EBX
// 005a9613: POP EBX
// 005a9614: RET
