// Name: sound_sndwav.cpp_CWavInDevice_close_FUN_005b0d70
// Address: 005b0d70
// Address Range: [[005b0d70, 005b0e10]]
// Convention: __cdecl
// Signature: int sound_sndwav.cpp_CWavInDevice_close_FUN_005b0d70(CWavInDevice * this_ptr)
// Cross-references:
//   sound_sndwav.cpp_getWavInDevice_FUN_005b1600 (005b1600) at 005b1608 [UNCONDITIONAL_CALL]
// Globals:
//   waveInClose* waveInClose = 002118a4
//   GlobalFree* GlobalFree = 00211fe6
//   TerminatedCString s_waveInClose_failed_0065243a
//   HWAVEIN g_WaveInHandle
//   HGLOBAL[20] g_WaveInHeaderHandles
//   undefined4 DAT_03f6add4
//   LPWAVEHDR[20] g_WaveInHeaders
//   undefined4 DAT_03f6ae24
//   HGLOBAL[20] g_WaveInBufferHandles
//   undefined4 DAT_03f6ae74
//   LPVOID[20] g_WaveInBuffers
//   undefined4 DAT_03f6aec4
// Function calls:
//   GlobalFree
//   sound_sndmain.cpp_logSoundError_FUN_005adba0
//   waveInClose

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavInDevice_close_FUN_005b0d70(CWavInDevice *this_ptr)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  uVar4 = (uint)(iVar1 != 0);
  iVar1 = 0;
  do {
    if (*(HGLOBAL *)((int)g_WaveInBufferHandles + iVar1) != (HGLOBAL)0x0) {
      (*GlobalFree)(*(HGLOBAL *)((int)g_WaveInBufferHandles + iVar1));
      *(undefined4 *)((int)g_WaveInBufferHandles + iVar1) = 0;
    }
    *(undefined4 *)((int)g_WaveInBuffers + iVar1) = 0;
    if (*(HGLOBAL *)((int)g_WaveInHeaderHandles + iVar1) != (HGLOBAL)0x0) {
      (*GlobalFree)(*(HGLOBAL *)((int)g_WaveInHeaderHandles + iVar1));
      *(undefined4 *)((int)g_WaveInHeaderHandles + iVar1) = 0;
    }
    iVar3 = iVar1 + 4;
    *(undefined4 *)((int)g_WaveInHeaders + iVar1) = 0;
    iVar1 = iVar3;
  } while (iVar3 != 0x50);
  if (g_WaveInHandle == (HWAVEIN)0x0) {
    return uVar4;
  }
  MVar2 = (*waveInClose)(g_WaveInHandle);
  if (MVar2 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("waveInClose failed.");
    uVar4 = 0;
  }
  g_WaveInHandle = (HWAVEIN)0x0;
  return uVar4;
}


// Assembly code:
// 005b0d70: PUSH EBX
//   Label: sound_sndwav.cpp_CWavInDevice_close_FUN_005b0d70
// 005b0d71: PUSH ESI
// 005b0d72: PUSH EDI
// 005b0d73: PUSH EBP
// 005b0d74: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005b0d78: PUSH EBX
// 005b0d79: MOV EAX,dword ptr [EBX]
// 005b0d7b: MOV ESI,0x1
// 005b0d80: CALL dword ptr [EAX + 0x8]
// 005b0d83: ADD ESP,0x4
// 005b0d86: TEST EAX,EAX
// 005b0d88: JZ 0x005b0de3
//   XREF to: 005b0de3 (CONDITIONAL_JUMP)
// 005b0d8a: XOR EBX,EBX
//   Label: LAB_005b0d8a
// 005b0d8c: XOR EDI,EDI
// 005b0d8e: MOV EDX,dword ptr [EBX + 0x3f6ae70]
//   Label: LAB_005b0d8e
//   XREF to: 03f6ae70 (READ)
//   XREF to: 03f6ae74 (READ)
// 005b0d94: CMP EDI,EDX
// 005b0d96: JZ 0x005b0da6
//   XREF to: 005b0da6 (CONDITIONAL_JUMP)
// 005b0d98: PUSH EDX
// 005b0d99: CALL dword ptr CS:[0x6115d0]
//   XREF to: EXTERNAL:0000007f (COMPUTED_CALL)
//   XREF to: 006115d0 (READ)
// 005b0da0: MOV dword ptr [EBX + 0x3f6ae70],EDI
//   XREF to: 03f6ae70 (WRITE)
// 005b0da6: MOV EBP,dword ptr [EBX + 0x3f6add0]
//   Label: LAB_005b0da6
//   XREF to: 03f6add0 (READ)
//   XREF to: 03f6add4 (READ)
// 005b0dac: MOV dword ptr [EBX + 0x3f6aec0],EDI
//   XREF to: 03f6aec0 (WRITE)
//   XREF to: 03f6aec4 (WRITE)
// 005b0db2: CMP EDI,EBP
// 005b0db4: JZ 0x005b0dc4
//   XREF to: 005b0dc4 (CONDITIONAL_JUMP)
// 005b0db6: PUSH EBP
// 005b0db7: CALL dword ptr CS:[0x6115d0]
//   XREF to: EXTERNAL:0000007f (COMPUTED_CALL)
//   XREF to: 006115d0 (READ)
// 005b0dbe: MOV dword ptr [EBX + 0x3f6add0],EDI
//   XREF to: 03f6add0 (WRITE)
// 005b0dc4: ADD EBX,0x4
//   Label: LAB_005b0dc4
// 005b0dc7: MOV dword ptr [EBX + 0x3f6ae1c],EDI
//   XREF to: 03f6ae20 (WRITE)
//   XREF to: 03f6ae24 (WRITE)
// 005b0dcd: CMP EBX,0x50
// 005b0dd0: JNZ 0x005b0d8e
//   XREF to: 005b0d8e (CONDITIONAL_JUMP)
// 005b0dd2: MOV EDX,dword ptr [0x03f6adcc]
//   XREF to: 03f6adcc (READ)
// 005b0dd8: TEST EDX,EDX
// 005b0dda: JNZ 0x005b0de7
//   XREF to: 005b0de7 (CONDITIONAL_JUMP)
// 005b0ddc: MOV EAX,ESI
// 005b0dde: POP EBP
// 005b0ddf: POP EDI
// 005b0de0: POP ESI
// 005b0de1: POP EBX
// 005b0de2: RET
// 005b0de3: XOR ESI,ESI
//   Label: LAB_005b0de3
// 005b0de5: JMP 0x005b0d8a
//   XREF to: 005b0d8a (UNCONDITIONAL_JUMP)
// 005b0de7: PUSH EDX
//   Label: LAB_005b0de7
// 005b0de8: CALL dword ptr CS:[0x611424]
//   XREF to: EXTERNAL:00000017 (COMPUTED_CALL)
//   XREF to: 00611424 (READ)
// 005b0def: TEST EAX,EAX
// 005b0df1: JZ 0x005b0e02
//   XREF to: 005b0e02 (CONDITIONAL_JUMP)
// 005b0df3: PUSH 0x65243a
//   XREF to: 0065243a (DATA)
// 005b0df8: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b0dfd: XOR ESI,ESI
// 005b0dff: ADD ESP,0x4
// 005b0e02: XOR EBX,EBX
//   Label: LAB_005b0e02
// 005b0e04: MOV dword ptr [0x03f6adcc],EBX
//   XREF to: 03f6adcc (WRITE)
// 005b0e0a: MOV EAX,ESI
// 005b0e0c: POP EBP
// 005b0e0d: POP EDI
// 005b0e0e: POP ESI
// 005b0e0f: POP EBX
// 005b0e10: RET
