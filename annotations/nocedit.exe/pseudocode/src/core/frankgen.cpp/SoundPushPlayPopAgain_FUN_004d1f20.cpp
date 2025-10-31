// Name: core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20
// Address: 004d1f20
// Address Range: [[004d1f20, 004d1f6b]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20()
// Cross-references:
//   core_frankgen.cpp_PlaySounds_FUN_004d1a40 (004d1a40) at 004d1d14 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02d7b7f0
// Function calls:
//   sound_sndmain.cpp_FUN_005a8940
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_startSfx_FUN_005a8e90

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_frankgen.cpp_SoundPushPlayPopAgain(undefined4 param_1,
   undefined4 param_2, undefined4 param_3) */

void core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20(void)

{
  int in_stack_00000004;
  float in_stack_00000008;
  
  if (_DAT_02d7b7f0 <= in_stack_00000008) {
    if (in_stack_00000008 < *(float *)(in_stack_00000004 + 0x15c)) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_FUN_005a8940();
      sound_sndmain_cpp_startSfx_FUN_005a8e90();
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      return;
    }
  }
  return;
}


// Assembly code:
// 004d1f20: FLD float ptr [ESP + 0x8]
//   Label: core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20
//   XREF to: Stack[0x8] (READ)
// 004d1f24: FCOMP float ptr [0x02d7b7f0]
//   XREF to: 02d7b7f0 (READ)
// 004d1f2a: FNSTSW AX
// 004d1f2c: SAHF
// 004d1f2d: JC 0x004d1f42
//   XREF to: 004d1f42 (CONDITIONAL_JUMP)
// 004d1f2f: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 004d1f33: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004d1f37: FCOMP float ptr [EAX + 0x15c]
// 004d1f3d: FNSTSW AX
// 004d1f3f: SAHF
// 004d1f40: JC 0x004d1f43
//   XREF to: 004d1f43 (CONDITIONAL_JUMP)
// 004d1f42: RET
//   Label: LAB_004d1f42
// 004d1f43: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   Label: LAB_004d1f43
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 004d1f48: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 004d1f4c: ADD EAX,0x490
// 004d1f51: PUSH EAX
// 004d1f52: CALL sound_sndmain.cpp_FUN_005a8940
//   XREF to: 005a8940 (UNCONDITIONAL_CALL)
// 004d1f57: ADD ESP,0x4
// 004d1f5a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 004d1f5e: PUSH EDX
// 004d1f5f: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 004d1f64: ADD ESP,0x4
// 004d1f67: JMP 0x005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
