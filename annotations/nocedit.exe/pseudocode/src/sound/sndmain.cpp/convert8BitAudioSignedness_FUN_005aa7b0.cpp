// Name: sound_sndmain.cpp_convert8BitAudioSignedness_FUN_005aa7b0
// Address: 005aa7b0
// Address Range: [[005aa7b0, 005aa7cc]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_convert8BitAudioSignedness_FUN_005aa7b0(byte * buffer, int num_bytes)
// Cross-references:
//   sound_sndmain.cpp_resampleAndConvertAudio_FUN_005aa7f0 (005aa7f0) at 005aa8a8 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_convert8BitAudioSignedness_FUN_005aa7b0(byte *buffer,int num_bytes)

{
  if (0 < num_bytes) {
    do {
      num_bytes = num_bytes + -1;
      *buffer = *buffer ^ 0x80;
      buffer = buffer + 1;
    } while (0 < num_bytes);
  }
  return;
}


// Assembly code:
// 005aa7b0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: sound_sndmain.cpp_convert8BitAudioSignedness_FUN_005aa7b0
//   XREF to: Stack[0x8] (READ)
// 005aa7b4: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005aa7b8: TEST EDX,EDX
// 005aa7ba: JLE 0x005aa7cc
//   XREF to: 005aa7cc (CONDITIONAL_JUMP)
// 005aa7bc: PUSH EBX
// 005aa7bd: MOV BL,byte ptr [EAX]
//   Label: LAB_005aa7bd
// 005aa7bf: INC EAX
// 005aa7c0: XOR BL,0x80
// 005aa7c3: DEC EDX
// 005aa7c4: MOV byte ptr [EAX + -0x1],BL
// 005aa7c7: TEST EDX,EDX
// 005aa7c9: JG 0x005aa7bd
//   XREF to: 005aa7bd (CONDITIONAL_JUMP)
// 005aa7cb: POP EBX
// 005aa7cc: RET
//   Label: LAB_005aa7cc
