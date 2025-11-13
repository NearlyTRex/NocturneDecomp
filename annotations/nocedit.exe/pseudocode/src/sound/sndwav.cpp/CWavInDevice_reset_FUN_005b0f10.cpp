// Name: sound_sndwav.cpp_CWavInDevice_reset_FUN_005b0f10
// Address: 005b0f10
// Address Range: [[005b0f10, 005b0f68]]
// Convention: __cdecl
// Signature: int sound_sndwav.cpp_CWavInDevice_reset_FUN_005b0f10(CWavInDevice * this_ptr)
// Globals:
//   waveInReset* waveInReset = 002118ea
//   waveInUnprepareHeader* waveInUnprepareHeader = 00211906
//   TerminatedCString s_waveInReset_failed_00652462
//   HWAVEIN g_WaveInHandle
//   LPWAVEHDR[8] g_WaveInHeaders
//   undefined4 DAT_03f6ae24
// Function calls:
//   sound_sndmain.cpp_logSoundError_FUN_005adba0
//   waveInReset
//   waveInUnprepareHeader

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavInDevice_reset_FUN_005b0f10(CWavInDevice *this_ptr)

{
  MMRESULT MVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  if (g_WaveInHandle != (HWAVEIN)0x0) {
    MVar1 = (*waveInReset)(g_WaveInHandle);
    if (MVar1 != 0) {
      sound_sndmain_cpp_logSoundError_FUN_005adba0("waveInReset failed!");
      iVar3 = 0;
    }
  }
  iVar2 = 0;
  do {
    if (*(LPWAVEHDR *)((int)g_WaveInHeaders + iVar2) != (LPWAVEHDR)0x0) {
      (*waveInUnprepareHeader)(g_WaveInHandle,*(LPWAVEHDR *)((int)g_WaveInHeaders + iVar2),0x20);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x50);
  return iVar3;
}


// Assembly code:
// 005b0f10: PUSH EBX
//   Label: sound_sndwav.cpp_CWavInDevice_reset_FUN_005b0f10
// 005b0f11: PUSH ESI
// 005b0f12: PUSH EDI
// 005b0f13: MOV EDX,dword ptr [0x03f6adcc]
//   XREF to: 03f6adcc (READ)
// 005b0f19: MOV ESI,0x1
// 005b0f1e: TEST EDX,EDX
// 005b0f20: JNZ 0x005b0f4c
//   XREF to: 005b0f4c (CONDITIONAL_JUMP)
// 005b0f22: XOR EBX,EBX
//   Label: LAB_005b0f22
// 005b0f24: MOV EDI,dword ptr [EBX + 0x3f6ae20]
//   Label: LAB_005b0f24
//   XREF to: 03f6ae20 (READ)
//   XREF to: 03f6ae24 (READ)
// 005b0f2a: TEST EDI,EDI
// 005b0f2c: JZ 0x005b0f3e
//   XREF to: 005b0f3e (CONDITIONAL_JUMP)
// 005b0f2e: PUSH 0x20
// 005b0f30: PUSH EDI
// 005b0f31: MOV EAX,[0x03f6adcc]
//   XREF to: 03f6adcc (READ)
// 005b0f36: PUSH EAX
// 005b0f37: CALL dword ptr CS:[0x61143c]
//   XREF to: EXTERNAL:0000001d (COMPUTED_CALL)
//   XREF to: 0061143c (READ)
// 005b0f3e: ADD EBX,0x4
//   Label: LAB_005b0f3e
// 005b0f41: CMP EBX,0x50
// 005b0f44: JNZ 0x005b0f24
//   XREF to: 005b0f24 (CONDITIONAL_JUMP)
// 005b0f46: MOV EAX,ESI
// 005b0f48: POP EDI
// 005b0f49: POP ESI
// 005b0f4a: POP EBX
// 005b0f4b: RET
// 005b0f4c: PUSH EDX
//   Label: LAB_005b0f4c
// 005b0f4d: CALL dword ptr CS:[0x611434]
//   XREF to: EXTERNAL:0000001b (COMPUTED_CALL)
//   XREF to: 00611434 (READ)
// 005b0f54: TEST EAX,EAX
// 005b0f56: JZ 0x005b0f22
//   XREF to: 005b0f22 (CONDITIONAL_JUMP)
// 005b0f58: PUSH 0x652462
//   XREF to: 00652462 (DATA)
// 005b0f5d: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b0f62: XOR ESI,ESI
// 005b0f64: ADD ESP,0x4
// 005b0f67: JMP 0x005b0f22
//   XREF to: 005b0f22 (UNCONDITIONAL_JUMP)
