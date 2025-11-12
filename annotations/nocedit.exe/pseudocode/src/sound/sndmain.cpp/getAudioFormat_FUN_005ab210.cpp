// Name: sound_sndmain.cpp_getAudioFormat_FUN_005ab210
// Address: 005ab210
// Address Range: [[005ab210, 005ab243]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_getAudioFormat_FUN_005ab210(int * bits_per_sample, int * channels, int * sample_rate)
// Cross-references:
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005ac09b [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_writeIni_FUN_005ac220 (005ac220) at 005ac2ba [UNCONDITIONAL_CALL]
// Globals:
//   int g_AudioBitsPerSample = 0x10
//   int g_AudioChannelCount = 0x2
//   int g_AudioSampleRate = 0x5622

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_getAudioFormat_FUN_005ab210(int *bits_per_sample,int *channels,int *sample_rate)

{
  if (bits_per_sample != (int *)0x0) {
    *bits_per_sample = g_AudioBitsPerSample;
  }
  if (channels != (int *)0x0) {
    *channels = g_AudioChannelCount;
  }
  if (sample_rate == (int *)0x0) {
    return;
  }
  *sample_rate = g_AudioSampleRate;
  return;
}


// Assembly code:
// 005ab210: PUSH EBX
//   Label: sound_sndmain.cpp_getAudioFormat_FUN_005ab210
// 005ab211: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ab215: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005ab219: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005ab21d: TEST EBX,EBX
// 005ab21f: JNZ 0x005ab232
//   XREF to: 005ab232 (CONDITIONAL_JUMP)
// 005ab221: TEST ECX,ECX
//   Label: LAB_005ab221
// 005ab223: JZ 0x005ab22c
//   XREF to: 005ab22c (CONDITIONAL_JUMP)
// 005ab225: MOV EAX,[0x00681b18]
//   XREF to: 00681b18 (READ)
// 005ab22a: MOV dword ptr [ECX],EAX
// 005ab22c: TEST EDX,EDX
//   Label: LAB_005ab22c
// 005ab22e: JNZ 0x005ab23b
//   XREF to: 005ab23b (CONDITIONAL_JUMP)
// 005ab230: POP EBX
// 005ab231: RET
// 005ab232: MOV EAX,[0x00681b14]
//   Label: LAB_005ab232
//   XREF to: 00681b14 (READ)
// 005ab237: MOV dword ptr [EBX],EAX
// 005ab239: JMP 0x005ab221
//   XREF to: 005ab221 (UNCONDITIONAL_JUMP)
// 005ab23b: MOV EAX,[0x00681b1c]
//   Label: LAB_005ab23b
//   XREF to: 00681b1c (READ)
// 005ab240: MOV dword ptr [EDX],EAX
// 005ab242: POP EBX
// 005ab243: RET
