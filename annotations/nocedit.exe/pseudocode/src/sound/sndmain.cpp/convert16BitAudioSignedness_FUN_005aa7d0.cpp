// Name: sound_sndmain.cpp_convert16BitAudioSignedness_FUN_005aa7d0
// Address: 005aa7d0
// Address Range: [[005aa7d0, 005aa7ef]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_convert16BitAudioSignedness_FUN_005aa7d0(short * buffer, int num_samples)
// Cross-references:
//   sound_sndmain.cpp_resampleAndConvertAudio_FUN_005aa7f0 (005aa7f0) at 005aaded [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_convert16BitAudioSignedness_FUN_005aa7d0(short *buffer,int num_samples)

{
  if (0 < num_samples) {
    do {
      num_samples = num_samples + -1;
      *(byte *)((int)buffer + 1) = *(byte *)((int)buffer + 1) ^ 0x80;
      buffer = buffer + 1;
    } while (0 < num_samples);
  }
  return;
}


// Assembly code:
// 005aa7d0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: sound_sndmain.cpp_convert16BitAudioSignedness_FUN_005aa7d0
//   XREF to: Stack[0x8] (READ)
// 005aa7d4: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005aa7d8: TEST EDX,EDX
// 005aa7da: JLE 0x005aa7ef
//   XREF to: 005aa7ef (CONDITIONAL_JUMP)
// 005aa7dc: PUSH EBX
// 005aa7dd: MOV BL,byte ptr [EAX + 0x1]
//   Label: LAB_005aa7dd
// 005aa7e0: ADD EAX,0x2
// 005aa7e3: XOR BL,0x80
// 005aa7e6: DEC EDX
// 005aa7e7: MOV byte ptr [EAX + -0x1],BL
// 005aa7ea: TEST EDX,EDX
// 005aa7ec: JG 0x005aa7dd
//   XREF to: 005aa7dd (CONDITIONAL_JUMP)
// 005aa7ee: POP EBX
// 005aa7ef: RET
//   Label: LAB_005aa7ef
