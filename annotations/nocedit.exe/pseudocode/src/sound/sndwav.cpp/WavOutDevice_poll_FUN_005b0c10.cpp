// Name: sound_sndwav.cpp_WavOutDevice_poll_FUN_005b0c10
// Address: 005b0c10
// Address Range: [[005b0c10, 005b0c88]]
// Convention: unknown
// Signature: undefined sound_sndwav.cpp_WavOutDevice_poll_FUN_005b0c10()
// Globals:
//   TerminatedCString s_WavOutDevice_poll_NULL_p_006523b7
//   TerminatedCString s_WavOutDevice_poll_sendWa_006523db
//   undefined4 DAT_03f6ad58
//   undefined4 DAT_03f6ad5c
//   undefined4 DAT_03f6ad98
//   undefined4 DAT_03f6ad9c
//   undefined4 DAT_03f6adc8
// Function calls:
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   sound_sndwav.cpp_waveOutWrite_FUN_005b06c0

#include "nocturne.h"

undefined4 sound_sndwav_cpp_WavOutDevice_poll_FUN_005b0c10(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_03f6adc8) {
    iVar2 = 0;
    do {
      if ((*(int *)((int)&DAT_03f6ad58 + iVar2) == 0) || (*(int *)((int)&DAT_03f6ad98 + iVar2) == 0)
         ) {
        sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
        return 0;
      }
      if (((*(byte *)(*(int *)((int)&DAT_03f6ad58 + iVar2) + 0x10) & 1) != 0) &&
         (iVar1 = sound_sndwav_cpp_waveOutWrite_FUN_005b06c0(), iVar1 == 0)) {
        sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < DAT_03f6adc8);
  }
  return 1;
}


// Assembly code:
// 005b0c10: PUSH EBX
//   Label: sound_sndwav.cpp_WavOutDevice_poll_FUN_005b0c10
// 005b0c11: PUSH ESI
// 005b0c12: PUSH EDI
// 005b0c13: PUSH EBP
// 005b0c14: MOV EDI,0x1
// 005b0c19: MOV EDX,dword ptr [0x03f6adc8]
//   XREF to: 03f6adc8 (READ)
// 005b0c1f: XOR ESI,ESI
// 005b0c21: TEST EDX,EDX
// 005b0c23: JLE 0x005b0c4e
//   XREF to: 005b0c4e (CONDITIONAL_JUMP)
// 005b0c25: XOR EBX,EBX
// 005b0c27: MOV EBP,dword ptr [EBX + 0x3f6ad58]
//   Label: LAB_005b0c27
//   XREF to: 03f6ad58 (READ)
//   XREF to: 03f6ad5c (READ)
// 005b0c2d: TEST EBP,EBP
// 005b0c2f: JZ 0x005b0c55
//   XREF to: 005b0c55 (CONDITIONAL_JUMP)
// 005b0c31: CMP dword ptr [EBX + 0x3f6ad98],0x0
//   XREF to: 03f6ad98 (READ)
//   XREF to: 03f6ad9c (READ)
// 005b0c38: JZ 0x005b0c55
//   XREF to: 005b0c55 (CONDITIONAL_JUMP)
// 005b0c3a: TEST byte ptr [EBP + 0x10],0x1
// 005b0c3e: JNZ 0x005b0c66
//   XREF to: 005b0c66 (CONDITIONAL_JUMP)
// 005b0c40: MOV ECX,dword ptr [0x03f6adc8]
//   Label: LAB_005b0c40
//   XREF to: 03f6adc8 (READ)
// 005b0c46: INC ESI
// 005b0c47: ADD EBX,0x4
// 005b0c4a: CMP ESI,ECX
// 005b0c4c: JL 0x005b0c27
//   XREF to: 005b0c27 (CONDITIONAL_JUMP)
// 005b0c4e: MOV EAX,EDI
//   Label: LAB_005b0c4e
// 005b0c50: POP EBP
// 005b0c51: POP EDI
// 005b0c52: POP ESI
// 005b0c53: POP EBX
// 005b0c54: RET
// 005b0c55: PUSH 0x6523b7
//   Label: LAB_005b0c55
//   XREF to: 006523b7 (DATA)
// 005b0c5a: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b0c5f: XOR EDI,EDI
// 005b0c61: ADD ESP,0x4
// 005b0c64: JMP 0x005b0c4e
//   XREF to: 005b0c4e (UNCONDITIONAL_JUMP)
// 005b0c66: PUSH ESI
//   Label: LAB_005b0c66
// 005b0c67: CALL sound_sndwav.cpp_waveOutWrite_FUN_005b06c0
//   XREF to: 005b06c0 (UNCONDITIONAL_CALL)
// 005b0c6c: ADD ESP,0x4
// 005b0c6f: TEST EAX,EAX
// 005b0c71: JNZ 0x005b0c40
//   XREF to: 005b0c40 (CONDITIONAL_JUMP)
// 005b0c73: PUSH 0x6523db
//   XREF to: 006523db (DATA)
// 005b0c78: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b0c7d: XOR EDI,EDI
// 005b0c7f: ADD ESP,0x4
// 005b0c82: MOV EAX,EDI
// 005b0c84: POP EBP
// 005b0c85: POP EDI
// 005b0c86: POP ESI
// 005b0c87: POP EBX
// 005b0c88: RET
