// Name: sound_sndwav.cpp_CWavOutDevice_close_FUN_005b0840
// Address: 005b0840
// Address Range: [[005b0840, 005b08e0]]
// Convention: __cdecl
// Signature: int sound_sndwav.cpp_CWavOutDevice_close_FUN_005b0840(CWavOutDevice * this_ptr)
// Cross-references:
//   sound_sndwav.cpp_getWavOutDevice_FUN_005b1510 (005b1510) at 005b1518 [UNCONDITIONAL_CALL]
// Globals:
//   waveOutClose* waveOutClose = 0021191e
//   GlobalFree* GlobalFree = 00211fe6
//   TerminatedCString s_waveOutClose_failed_00652370
//   HWAVEOUT g_WaveOutHandle
//   HGLOBAL[8] g_WaveOutHeaderHandles
//   undefined4 DAT_03f6ad3c
//   LPWAVEHDR[8] g_WaveOutHeaders
//   undefined4 DAT_03f6ad5c
//   HGLOBAL[8] g_WaveOutBufferHandles
//   undefined4 DAT_03f6ad7c
//   LPVOID[8] g_WaveOutBuffers
//   undefined4 DAT_03f6ad9c
// Function calls:
//   GlobalFree
//   sound_sndmain.cpp_logSoundError_FUN_005adba0
//   waveOutClose

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_005b0840(CWavOutDevice *this_ptr)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (*this_ptr->vtable->reset)((CSoundDevice *)this_ptr);
  uVar4 = (uint)(iVar1 != 0);
  iVar1 = 0;
  do {
    if (*(HGLOBAL *)((int)g_WaveOutBufferHandles + iVar1) != (HGLOBAL)0x0) {
      (*GlobalFree)(*(HGLOBAL *)((int)g_WaveOutBufferHandles + iVar1));
      *(undefined4 *)((int)g_WaveOutBufferHandles + iVar1) = 0;
    }
    *(undefined4 *)((int)g_WaveOutBuffers + iVar1) = 0;
    if (*(HGLOBAL *)((int)g_WaveOutHeaderHandles + iVar1) != (HGLOBAL)0x0) {
      (*GlobalFree)(*(HGLOBAL *)((int)g_WaveOutHeaderHandles + iVar1));
      *(undefined4 *)((int)g_WaveOutHeaderHandles + iVar1) = 0;
    }
    iVar3 = iVar1 + 4;
    *(undefined4 *)((int)g_WaveOutHeaders + iVar1) = 0;
    iVar1 = iVar3;
  } while (iVar3 != 0x20);
  if (g_WaveOutHandle == (HWAVEOUT)0x0) {
    return uVar4;
  }
  MVar2 = (*waveOutClose)(g_WaveOutHandle);
  if (MVar2 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("waveOutClose failed.");
    uVar4 = 0;
  }
  g_WaveOutHandle = (HWAVEOUT)0x0;
  return uVar4;
}


// Assembly code:
// 005b0840: PUSH EBX
//   Label: sound_sndwav.cpp_CWavOutDevice_close_FUN_005b0840
// 005b0841: PUSH ESI
// 005b0842: PUSH EDI
// 005b0843: PUSH EBP
// 005b0844: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005b0848: PUSH EBX
// 005b0849: MOV EAX,dword ptr [EBX]
// 005b084b: MOV ESI,0x1
// 005b0850: CALL dword ptr [EAX + 0x8]
// 005b0853: ADD ESP,0x4
// 005b0856: TEST EAX,EAX
// 005b0858: JZ 0x005b08b3
//   XREF to: 005b08b3 (CONDITIONAL_JUMP)
// 005b085a: XOR EBX,EBX
//   Label: LAB_005b085a
// 005b085c: XOR EDI,EDI
// 005b085e: MOV EDX,dword ptr [EBX + 0x3f6ad78]
//   Label: LAB_005b085e
//   XREF to: 03f6ad78 (READ)
//   XREF to: 03f6ad7c (READ)
// 005b0864: CMP EDI,EDX
// 005b0866: JZ 0x005b0876
//   XREF to: 005b0876 (CONDITIONAL_JUMP)
// 005b0868: PUSH EDX
// 005b0869: CALL dword ptr CS:[0x6115d0]
//   XREF to: EXTERNAL:0000007f (COMPUTED_CALL)
//   XREF to: 006115d0 (READ)
// 005b0870: MOV dword ptr [EBX + 0x3f6ad78],EDI
//   XREF to: 03f6ad78 (WRITE)
// 005b0876: MOV EBP,dword ptr [EBX + 0x3f6ad38]
//   Label: LAB_005b0876
//   XREF to: 03f6ad38 (READ)
//   XREF to: 03f6ad3c (READ)
// 005b087c: MOV dword ptr [EBX + 0x3f6ad98],EDI
//   XREF to: 03f6ad98 (WRITE)
//   XREF to: 03f6ad9c (WRITE)
// 005b0882: CMP EDI,EBP
// 005b0884: JZ 0x005b0894
//   XREF to: 005b0894 (CONDITIONAL_JUMP)
// 005b0886: PUSH EBP
// 005b0887: CALL dword ptr CS:[0x6115d0]
//   XREF to: EXTERNAL:0000007f (COMPUTED_CALL)
//   XREF to: 006115d0 (READ)
// 005b088e: MOV dword ptr [EBX + 0x3f6ad38],EDI
//   XREF to: 03f6ad38 (WRITE)
// 005b0894: ADD EBX,0x4
//   Label: LAB_005b0894
// 005b0897: MOV dword ptr [EBX + 0x3f6ad54],EDI
//   XREF to: 03f6ad58 (WRITE)
//   XREF to: 03f6ad5c (WRITE)
// 005b089d: CMP EBX,0x20
// 005b08a0: JNZ 0x005b085e
//   XREF to: 005b085e (CONDITIONAL_JUMP)
// 005b08a2: MOV EDX,dword ptr [0x03f6ad34]
//   XREF to: 03f6ad34 (READ)
// 005b08a8: TEST EDX,EDX
// 005b08aa: JNZ 0x005b08b7
//   XREF to: 005b08b7 (CONDITIONAL_JUMP)
// 005b08ac: MOV EAX,ESI
// 005b08ae: POP EBP
// 005b08af: POP EDI
// 005b08b0: POP ESI
// 005b08b1: POP EBX
// 005b08b2: RET
// 005b08b3: XOR ESI,ESI
//   Label: LAB_005b08b3
// 005b08b5: JMP 0x005b085a
//   XREF to: 005b085a (UNCONDITIONAL_JUMP)
// 005b08b7: PUSH EDX
//   Label: LAB_005b08b7
// 005b08b8: CALL dword ptr CS:[0x611440]
//   XREF to: EXTERNAL:0000001e (COMPUTED_CALL)
//   XREF to: 00611440 (READ)
// 005b08bf: TEST EAX,EAX
// 005b08c1: JZ 0x005b08d2
//   XREF to: 005b08d2 (CONDITIONAL_JUMP)
// 005b08c3: PUSH 0x652370
//   XREF to: 00652370 (DATA)
// 005b08c8: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b08cd: XOR ESI,ESI
// 005b08cf: ADD ESP,0x4
// 005b08d2: XOR EBX,EBX
//   Label: LAB_005b08d2
// 005b08d4: MOV dword ptr [0x03f6ad34],EBX
//   XREF to: 03f6ad34 (WRITE)
// 005b08da: MOV EAX,ESI
// 005b08dc: POP EBP
// 005b08dd: POP EDI
// 005b08de: POP ESI
// 005b08df: POP EBX
// 005b08e0: RET
