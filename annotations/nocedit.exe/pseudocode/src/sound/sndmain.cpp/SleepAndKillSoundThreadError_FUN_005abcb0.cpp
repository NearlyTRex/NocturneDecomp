// Name: sound_sndmain.cpp_SleepAndKillSoundThreadError_FUN_005abcb0
// Address: 005abcb0
// Address Range: [[005abcb0, 005abd2c]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_SleepAndKillSoundThreadError_FUN_005abcb0()
// Cross-references:
//   sound_snddx.cpp_FUN_005ae4b0 (005ae4b0) at 005ae548 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_waveOutReset_FUN_005b09c0 (005b09c0) at 005b09f6 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005abc00 (005abc00) at 005abc07 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_killSoundThread_-_failed!_00650e07
//   undefined4 DAT_03f69400
//   undefined4 DAT_03f69404
// Function calls:
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   wincore_winrun.cpp_sleep_FUN_005f40e0

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_SleepAndKillSoundThreadError() */

bool sound_sndmain_cpp_SleepAndKillSoundThreadError_FUN_005abcb0(void)

{
  int iVar1;
  
  iVar1 = 0;
  DAT_03f69404 = 1;
  if (DAT_03f69400 != 0) {
    do {
      iVar1 = iVar1 + 1;
      wincore_winrun_cpp_sleep_FUN_005f40e0(0.01);
      if (99 < iVar1) break;
    } while (DAT_03f69400 != 0);
  }
  if (DAT_03f69400 == 0) {
    return true;
  }
  sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
  return DAT_03f69400 == 0;
}


// Assembly code:
// 005abcb0: PUSH EBX
//   Label: sound_sndmain.cpp_SleepAndKillSoundThreadError_FUN_005abcb0
// 005abcb1: PUSH EBP
// 005abcb2: MOV EBP,ESP
// 005abcb4: AND ESP,0xfffffff8
// 005abcb7: MOV EDX,0x1
// 005abcbc: MOV ECX,dword ptr [0x03f69400]
//   XREF to: 03f69400 (READ)
// 005abcc2: XOR EBX,EBX
// 005abcc4: MOV dword ptr [0x03f69404],EDX
//   XREF to: 03f69404 (WRITE)
// 005abcca: TEST ECX,ECX
// 005abccc: JZ 0x005abcef
//   XREF to: 005abcef (CONDITIONAL_JUMP)
// 005abcce: PUSH 0x3f847ae1
//   Label: LAB_005abcce
// 005abcd3: PUSH 0x47ae147b
// 005abcd8: INC EBX
// 005abcd9: CALL wincore_winrun.cpp_sleep_FUN_005f40e0
//   XREF to: 005f40e0 (UNCONDITIONAL_CALL)
// 005abcde: ADD ESP,0x8
// 005abce1: CMP EBX,0x64
// 005abce4: JGE 0x005abcef
//   XREF to: 005abcef (CONDITIONAL_JUMP)
// 005abce6: CMP dword ptr [0x03f69400],0x0
//   XREF to: 03f69400 (READ)
// 005abced: JNZ 0x005abcce
//   XREF to: 005abcce (CONDITIONAL_JUMP)
// 005abcef: CMP dword ptr [0x03f69400],0x0
//   Label: LAB_005abcef
//   XREF to: 03f69400 (READ)
// 005abcf6: JNZ 0x005abd0c
//   XREF to: 005abd0c (CONDITIONAL_JUMP)
// 005abcf8: CMP dword ptr [0x03f69400],0x0
//   XREF to: 03f69400 (READ)
// 005abcff: SETZ AL
// 005abd02: AND EAX,0xff
// 005abd07: MOV ESP,EBP
// 005abd09: POP EBP
// 005abd0a: POP EBX
// 005abd0b: RET
// 005abd0c: PUSH 0x650e07
//   Label: LAB_005abd0c
//   XREF to: 00650e07 (DATA)
// 005abd11: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005abd16: ADD ESP,0x4
// 005abd19: CMP dword ptr [0x03f69400],0x0
//   XREF to: 03f69400 (READ)
// 005abd20: SETZ AL
// 005abd23: AND EAX,0xff
// 005abd28: MOV ESP,EBP
// 005abd2a: POP EBP
// 005abd2b: POP EBX
// 005abd2c: RET
