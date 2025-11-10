// Name: sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250
// Address: 0052f250
// Address Range: [[0052f250, 0052f25f]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250(CMP3Decoder * this_ptr)
// Cross-references:
//   sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_0052f350 (0052f350) at 0052f563 [UNCONDITIONAL_CALL]
// Function calls:
//   sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_readBit_FUN_0052f250(CMP3Decoder *this_ptr)

{
  sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,1);
  return;
}


// Assembly code:
// 0052f250: PUSH 0x1
//   Label: sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250
// 0052f252: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0052f256: PUSH EDX
// 0052f257: CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170
//   XREF to: 0052f170 (UNCONDITIONAL_CALL)
// 0052f25c: ADD ESP,0x8
// 0052f25f: RET
