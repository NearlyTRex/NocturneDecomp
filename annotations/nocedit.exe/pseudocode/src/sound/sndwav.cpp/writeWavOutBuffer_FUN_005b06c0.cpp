// Name: sound_sndwav.cpp_writeWavOutBuffer_FUN_005b06c0
// Address: 005b06c0
// Address Range: [[005b06c0, 005b0838]]
// Convention: __cdecl
// Signature: int sound_sndwav.cpp_writeWavOutBuffer_FUN_005b06c0(int buffer_index)
// Cross-references:
//   sound_sndwav.cpp_CWavOutDevice_poll_FUN_005b0c10 (005b0c10) at 005b0c67 [UNCONDITIONAL_CALL]
//   sound_sndwav.cpp_CWavOutDevice_start_FUN_005b08f0 (005b08f0) at 005b0957 [UNCONDITIONAL_CALL]
// Globals:
//   waveOutPrepareHeader* waveOutPrepareHeader = 00211952
//   waveOutUnprepareHeader* waveOutUnprepareHeader = 0021197a
//   waveOutWrite* waveOutWrite = 00211994
//   TerminatedCString s_waveOutUnprepareHeader_f_0065231f
//   TerminatedCString s_waveOutPrepareHeader_fai_0065233e
//   TerminatedCString s_waveOutWrite_failed_0065235b
//   HWAVEOUT g_WaveOutHandle
//   LPWAVEHDR[8] g_WaveOutHeaders
//   LPVOID[8] g_WaveOutBuffers
//   int g_WaveOutBitsPerSample
//   int g_WaveOutChannels
//   int g_WaveOutSampleRate
//   int g_WaveOutBufferSize
// Function calls:
//   sound_sndmain.cpp_logSoundError_FUN_005adba0
//   sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90
//   waveOutPrepareHeader
//   waveOutUnprepareHeader
//   waveOutWrite

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_005b06c0(int buffer_index)

{
  int iVar1;
  LPVOID pvVar2;
  MMRESULT MVar3;
  int iVar4;
  int iVar5;
  int iVar7;
  BADSPACEBASE *in_ESP;
  int unaff_retaddr;
  int in_stack_00000010;
  int iVar6;
  
  if ((g_WaveOutBuffers[buffer_index] == (LPVOID)0x0) ||
     (g_WaveOutHeaders[buffer_index] == (LPWAVEHDR)0x0)) {
    return 0;
  }
  MVar3 = (*waveOutUnprepareHeader)(g_WaveOutHandle,g_WaveOutHeaders[buffer_index],0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("waveOutUnprepareHeader failed!");
    return 0;
  }
  iVar4 = (int)((g_WaveOutBitsPerSample + (g_WaveOutBitsPerSample >> 0x1f) * -8) -
               (uint)((g_WaveOutBitsPerSample >> 0x1f) << 2 < 0)) >> 3;
  iVar7 = 0;
  if (0 < g_WaveOutChannels * 4) {
    pvVar2 = g_WaveOutBuffers[buffer_index];
    iVar6 = 0;
    do {
      iVar5 = iVar6 + 4;
      iVar1 = (int)pvVar2 + iVar7;
      iVar7 = iVar7 + iVar4;
      *(int *)(&stack0xffffffdc + iVar6) = iVar1;
      iVar6 = iVar5;
    } while (iVar5 < g_WaveOutChannels * 4);
  }
  sound_sndmain_cpp_pollAndMixSfx_FUN_005aca90
            ((LPVOID *)&stack0xffffffdc,g_WaveOutBitsPerSample,g_WaveOutChannels,g_WaveOutSampleRate
             ,g_WaveOutBufferSize,iVar4 * g_WaveOutChannels);
  *(int *)(*(int *)((int)g_WaveOutHeaders + unaff_retaddr) + 4) =
       ((int)((g_WaveOutBitsPerSample + (g_WaveOutBitsPerSample >> 0x1f) * -8) -
             (uint)((g_WaveOutBitsPerSample >> 0x1f) << 2 < 0)) >> 3) * g_WaveOutBufferSize *
       g_WaveOutChannels;
  MVar3 = (*waveOutPrepareHeader)
                    (g_WaveOutHandle,*(LPWAVEHDR *)((int)g_WaveOutHeaders + unaff_retaddr),0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar3 = (*waveOutWrite)(g_WaveOutHandle,*(LPWAVEHDR *)((int)g_WaveOutHeaders + in_stack_00000010),
                          0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("waveOutWrite failed!");
    return 0;
  }
  return 1;
}


// Assembly code:
// 005b06c0: PUSH EBX
//   Label: sound_sndwav.cpp_writeWavOutBuffer_FUN_005b06c0
// 005b06c1: PUSH ESI
// 005b06c2: PUSH EDI
// 005b06c3: PUSH EBP
// 005b06c4: SUB ESP,0x24
// 005b06c7: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005b06cb: SHL EDI,0x2
// 005b06ce: CMP dword ptr [EDI + 0x3f6ad98],0x0
//   XREF to: 03f6ad98 (DATA)
// 005b06d5: JZ 0x005b06e1
//   XREF to: 005b06e1 (CONDITIONAL_JUMP)
// 005b06d7: MOV ECX,dword ptr [EDI + 0x3f6ad58]
//   XREF to: 03f6ad58 (DATA)
// 005b06dd: TEST ECX,ECX
// 005b06df: JNZ 0x005b06eb
//   XREF to: 005b06eb (CONDITIONAL_JUMP)
// 005b06e1: XOR EAX,EAX
//   Label: LAB_005b06e1
// 005b06e3: ADD ESP,0x24
// 005b06e6: POP EBP
// 005b06e7: POP EDI
// 005b06e8: POP ESI
// 005b06e9: POP EBX
// 005b06ea: RET
// 005b06eb: PUSH 0x20
//   Label: LAB_005b06eb
// 005b06ed: PUSH ECX
// 005b06ee: MOV ESI,dword ptr [0x03f6ad34]
//   XREF to: 03f6ad34 (READ)
// 005b06f4: PUSH ESI
// 005b06f5: CALL dword ptr CS:[0x611454]
//   XREF to: EXTERNAL:00000023 (COMPUTED_CALL)
//   XREF to: 00611454 (READ)
// 005b06fc: TEST EAX,EAX
// 005b06fe: JNZ 0x005b07f4
//   XREF to: 005b07f4 (CONDITIONAL_JUMP)
// 005b0704: MOV EAX,[0x03f6adb8]
//   XREF to: 03f6adb8 (READ)
// 005b0709: MOV EDX,EAX
// 005b070b: SAR EDX,0x1f
// 005b070e: SHL EDX,0x3
// 005b0711: SBB EAX,EDX
// 005b0713: SAR EAX,0x3
// 005b0716: MOV EBP,EAX
// 005b0718: MOV ESI,EBP
// 005b071a: IMUL EDX,EBP,0x0
// 005b071d: MOV EBX,dword ptr [0x03f6adbc]
//   XREF to: 03f6adbc (READ)
// 005b0723: MOV dword ptr [ESP + 0x20],EDI
// 005b0727: SHL EBX,0x2
// 005b072a: XOR EAX,EAX
// 005b072c: TEST EBX,EBX
// 005b072e: JLE 0x005b0750
//   XREF to: 005b0750 (CONDITIONAL_JUMP)
// 005b0730: MOV EDI,dword ptr [EDI + 0x3f6ad98]
//   XREF to: 03f6ad98 (DATA)
// 005b0736: ADD EAX,0x4
//   Label: LAB_005b0736
// 005b0739: LEA ECX,[EDI + EDX*0x1]
// 005b073c: ADD EDX,ESI
// 005b073e: MOV dword ptr [ESP + EAX*0x1 + -0x4],ECX
// 005b0742: CMP EAX,EBX
// 005b0744: JL 0x005b0736
//   XREF to: 005b0736 (CONDITIONAL_JUMP)
// 005b0746: LEA EAX,[EAX]
// 005b074c: LEA EDX,[EDX]
// 005b0750: MOV EDI,dword ptr [0x03f6adbc]
//   Label: LAB_005b0750
//   XREF to: 03f6adbc (READ)
// 005b0756: IMUL EBP,EDI
// 005b0759: PUSH EBP
// 005b075a: MOV EBP,dword ptr [0x03f6adc4]
//   XREF to: 03f6adc4 (READ)
// 005b0760: PUSH EBP
// 005b0761: MOV EAX,[0x03f6adc0]
//   XREF to: 03f6adc0 (READ)
// 005b0766: PUSH EAX
// 005b0767: PUSH EDI
// 005b0768: MOV ECX,dword ptr [0x03f6adb8]
//   XREF to: 03f6adb8 (READ)
// 005b076e: PUSH ECX
// 005b076f: LEA EAX,[ESP + 0x14]
// 005b0773: PUSH EAX
// 005b0774: CALL sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90
//   XREF to: 005aca90 (UNCONDITIONAL_CALL)
// 005b0779: MOV EAX,[0x03f6adb8]
//   XREF to: 03f6adb8 (READ)
// 005b077e: MOV EDX,EAX
// 005b0780: SAR EDX,0x1f
// 005b0783: SHL EDX,0x3
// 005b0786: SBB EAX,EDX
// 005b0788: SAR EAX,0x3
// 005b078b: IMUL EAX,dword ptr [0x03f6adc4]
//   XREF to: 03f6adc4 (READ)
// 005b0792: IMUL EAX,dword ptr [0x03f6adbc]
//   XREF to: 03f6adbc (READ)
// 005b0799: ADD ESP,0x18
// 005b079c: MOV EDX,dword ptr [ESP + 0x20]
// 005b07a0: MOV EDX,dword ptr [EDX + 0x3f6ad58]
//   XREF to: 03f6ad58 (DATA)
// 005b07a6: MOV dword ptr [EDX + 0x4],EAX
// 005b07a9: MOV EAX,dword ptr [ESP + 0x20]
// 005b07ad: PUSH 0x20
// 005b07af: MOV EDI,dword ptr [EAX + 0x3f6ad58]
//   XREF to: 03f6ad58 (DATA)
// 005b07b5: PUSH EDI
// 005b07b6: MOV EBP,dword ptr [0x03f6ad34]
//   XREF to: 03f6ad34 (READ)
// 005b07bc: PUSH EBP
// 005b07bd: CALL dword ptr CS:[0x61144c]
//   XREF to: EXTERNAL:00000021 (COMPUTED_CALL)
//   XREF to: 0061144c (READ)
// 005b07c4: TEST EAX,EAX
// 005b07c6: JNZ 0x005b080b
//   XREF to: 005b080b (CONDITIONAL_JUMP)
// 005b07c8: MOV EAX,dword ptr [ESP + 0x20]
// 005b07cc: PUSH 0x20
// 005b07ce: MOV EDX,dword ptr [EAX + 0x3f6ad58]
//   XREF to: 03f6ad58 (DATA)
// 005b07d4: PUSH EDX
// 005b07d5: MOV ECX,dword ptr [0x03f6ad34]
//   XREF to: 03f6ad34 (READ)
// 005b07db: PUSH ECX
// 005b07dc: CALL dword ptr CS:[0x611458]
//   XREF to: EXTERNAL:00000024 (COMPUTED_CALL)
//   XREF to: 00611458 (READ)
// 005b07e3: TEST EAX,EAX
// 005b07e5: JNZ 0x005b0822
//   XREF to: 005b0822 (CONDITIONAL_JUMP)
// 005b07e7: MOV EAX,0x1
// 005b07ec: ADD ESP,0x24
// 005b07ef: POP EBP
// 005b07f0: POP EDI
// 005b07f1: POP ESI
// 005b07f2: POP EBX
// 005b07f3: RET
// 005b07f4: PUSH 0x65231f
//   Label: LAB_005b07f4
//   XREF to: 0065231f (DATA)
// 005b07f9: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b07fe: ADD ESP,0x4
// 005b0801: XOR EAX,EAX
// 005b0803: ADD ESP,0x24
// 005b0806: POP EBP
// 005b0807: POP EDI
// 005b0808: POP ESI
// 005b0809: POP EBX
// 005b080a: RET
// 005b080b: PUSH 0x65233e
//   Label: LAB_005b080b
//   XREF to: 0065233e (DATA)
// 005b0810: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b0815: ADD ESP,0x4
// 005b0818: XOR EAX,EAX
// 005b081a: ADD ESP,0x24
// 005b081d: POP EBP
// 005b081e: POP EDI
// 005b081f: POP ESI
// 005b0820: POP EBX
// 005b0821: RET
// 005b0822: PUSH 0x65235b
//   Label: LAB_005b0822
//   XREF to: 0065235b (DATA)
// 005b0827: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b082c: ADD ESP,0x4
// 005b082f: XOR EAX,EAX
// 005b0831: ADD ESP,0x24
// 005b0834: POP EBP
// 005b0835: POP EDI
// 005b0836: POP ESI
// 005b0837: POP EBX
// 005b0838: RET
