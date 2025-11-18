// Name: sound_sndmain.cpp_getRecordingFormat_FUN_005aba40
// Address: 005aba40
// Address Range: [[005aba40, 005aba82]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_getRecordingFormat_FUN_005aba40(int * out_bits_per_sample, int * out_channels, int * out_sample_rate, int * out_signed)
// Globals:
//   int g_RecordingBitsPerSample = 0x8
//   int g_RecordingChannelCount = 0x1
//   int g_RecordingSampleRate = 0x2b11
//   int g_RecordingSamplesSigned

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_getRecordingFormat_FUN_005aba40
          (int *out_bits_per_sample,int *out_channels,int *out_sample_rate,int *out_signed)

{
  if (out_bits_per_sample != (int *)0x0) {
    *out_bits_per_sample = g_RecordingBitsPerSample;
  }
  if (out_channels != (int *)0x0) {
    *out_channels = g_RecordingChannelCount;
  }
  if (out_sample_rate != (int *)0x0) {
    *out_sample_rate = g_RecordingSampleRate;
  }
  if (out_signed == (int *)0x0) {
    return;
  }
  *out_signed = g_RecordingSamplesSigned;
  return;
}


// Assembly code:
// 005aba40: PUSH EBX
//   Label: sound_sndmain.cpp_getRecordingFormat_FUN_005aba40
// 005aba41: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005aba45: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005aba49: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005aba4d: TEST EBX,EBX
// 005aba4f: JNZ 0x005aba71
//   XREF to: 005aba71 (CONDITIONAL_JUMP)
// 005aba51: MOV EBX,dword ptr [ESP + 0xc]
//   Label: LAB_005aba51
//   XREF to: Stack[0x8] (READ)
// 005aba55: TEST EBX,EBX
// 005aba57: JZ 0x005aba60
//   XREF to: 005aba60 (CONDITIONAL_JUMP)
// 005aba59: MOV EAX,[0x00681b58]
//   XREF to: 00681b58 (READ)
// 005aba5e: MOV dword ptr [EBX],EAX
// 005aba60: TEST ECX,ECX
//   Label: LAB_005aba60
// 005aba62: JZ 0x005aba6b
//   XREF to: 005aba6b (CONDITIONAL_JUMP)
// 005aba64: MOV EAX,[0x00681b5c]
//   XREF to: 00681b5c (READ)
// 005aba69: MOV dword ptr [ECX],EAX
// 005aba6b: TEST EDX,EDX
//   Label: LAB_005aba6b
// 005aba6d: JNZ 0x005aba7a
//   XREF to: 005aba7a (CONDITIONAL_JUMP)
// 005aba6f: POP EBX
// 005aba70: RET
// 005aba71: MOV EAX,[0x00681b54]
//   Label: LAB_005aba71
//   XREF to: 00681b54 (READ)
// 005aba76: MOV dword ptr [EBX],EAX
// 005aba78: JMP 0x005aba51
//   XREF to: 005aba51 (UNCONDITIONAL_JUMP)
// 005aba7a: MOV EAX,[0x03f69c5c]
//   Label: LAB_005aba7a
//   XREF to: 03f69c5c (READ)
// 005aba7f: MOV dword ptr [EDX],EAX
// 005aba81: POP EBX
// 005aba82: RET
