// Name: sound_sndwav.cpp_waveOutReset_FUN_005b09c0
// Address: 005b09c0
// Address Range: [[005b09c0, 005b0a29]]
// Convention: unknown
// Signature: undefined sound_sndwav.cpp_waveOutReset_FUN_005b09c0()
// Globals:
//   waveOutReset* PTR_waveOutReset_00611450 = 0021196a
//   waveOutUnprepareHeader* PTR_waveOutUnprepareHeader_00611454 = 0021197a
//   TerminatedCString s_waveOutReset_failed_0065238f
//   undefined4 DAT_03f6ad34
//   undefined4 DAT_03f6ad58
//   undefined4 DAT_03f6ad5c
// Function calls:
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   sound_sndmain.cpp_SleepAndKillSoundThreadError_FUN_005abcb0
//   waveOutReset
//   waveOutUnprepareHeader

#include "nocturne.h"

undefined4 sound_sndwav_cpp_waveOutReset_FUN_005b09c0(void)

{
  MMRESULT MVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  if (DAT_03f6ad34 != 0) {
    MVar1 = (*PTR_waveOutReset_00611450)((HWAVEOUT)DAT_03f6ad34);
    if (MVar1 != 0) {
      sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
      uVar3 = 0;
    }
  }
  iVar2 = 0;
  do {
    if (*(LPWAVEHDR *)((int)&DAT_03f6ad58 + iVar2) != (LPWAVEHDR)0x0) {
      (*PTR_waveOutUnprepareHeader_00611454)
                ((HWAVEOUT)DAT_03f6ad34,*(LPWAVEHDR *)((int)&DAT_03f6ad58 + iVar2),0x20);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x20);
  iVar2 = sound_sndmain_cpp_SleepAndKillSoundThreadError_FUN_005abcb0();
  if (iVar2 != 0) {
    return uVar3;
  }
  return 0;
}


// Assembly code:
// 005b09c0: PUSH EBX
//   Label: sound_sndwav.cpp_waveOutReset_FUN_005b09c0
// 005b09c1: PUSH ESI
// 005b09c2: PUSH EDI
// 005b09c3: MOV EDX,dword ptr [0x03f6ad34]
//   XREF to: 03f6ad34 (READ)
// 005b09c9: MOV ESI,0x1
// 005b09ce: TEST EDX,EDX
// 005b09d0: JNZ 0x005b0a05
//   XREF to: 005b0a05 (CONDITIONAL_JUMP)
// 005b09d2: XOR EBX,EBX
//   Label: LAB_005b09d2
// 005b09d4: MOV EDI,dword ptr [EBX + 0x3f6ad58]
//   Label: LAB_005b09d4
//   XREF to: 03f6ad58 (READ)
//   XREF to: 03f6ad5c (READ)
// 005b09da: TEST EDI,EDI
// 005b09dc: JZ 0x005b09ee
//   XREF to: 005b09ee (CONDITIONAL_JUMP)
// 005b09de: PUSH 0x20
// 005b09e0: PUSH EDI
// 005b09e1: MOV EAX,[0x03f6ad34]
//   XREF to: 03f6ad34 (READ)
// 005b09e6: PUSH EAX
// 005b09e7: CALL dword ptr CS:[0x611454]
//   XREF to: EXTERNAL:00000023 (COMPUTED_CALL)
//   XREF to: 00611454 (READ)
// 005b09ee: ADD EBX,0x4
//   Label: LAB_005b09ee
// 005b09f1: CMP EBX,0x20
// 005b09f4: JNZ 0x005b09d4
//   XREF to: 005b09d4 (CONDITIONAL_JUMP)
// 005b09f6: CALL sound_sndmain.cpp_SleepAndKillSoundThreadError_FUN_005abcb0
//   XREF to: 005abcb0 (UNCONDITIONAL_CALL)
// 005b09fb: TEST EAX,EAX
// 005b09fd: JZ 0x005b0a22
//   XREF to: 005b0a22 (CONDITIONAL_JUMP)
// 005b09ff: MOV EAX,ESI
// 005b0a01: POP EDI
// 005b0a02: POP ESI
// 005b0a03: POP EBX
// 005b0a04: RET
// 005b0a05: PUSH EDX
//   Label: LAB_005b0a05
// 005b0a06: CALL dword ptr CS:[0x611450]
//   XREF to: EXTERNAL:00000022 (COMPUTED_CALL)
//   XREF to: 00611450 (READ)
// 005b0a0d: TEST EAX,EAX
// 005b0a0f: JZ 0x005b09d2
//   XREF to: 005b09d2 (CONDITIONAL_JUMP)
// 005b0a11: PUSH 0x65238f
//   XREF to: 0065238f (DATA)
// 005b0a16: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b0a1b: XOR ESI,ESI
// 005b0a1d: ADD ESP,0x4
// 005b0a20: JMP 0x005b09d2
//   XREF to: 005b09d2 (UNCONDITIONAL_JUMP)
// 005b0a22: XOR ESI,ESI
//   Label: LAB_005b0a22
// 005b0a24: MOV EAX,ESI
// 005b0a26: POP EDI
// 005b0a27: POP ESI
// 005b0a28: POP EBX
// 005b0a29: RET
