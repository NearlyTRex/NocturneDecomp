// Name: sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160
// Address: 0052f160
// Address Range: [[0052f160, 0052f16a]]
// Convention: __cdecl
// Signature: uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(CMP3Decoder * this_ptr)
// Cross-references:
//   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 (00534d40) at 00535664 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680 (00531680) at 00531ca0 [UNCONDITIONAL_CALL]

#include "nocturne.h"

uint __cdecl sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(CMP3Decoder *this_ptr)

{
  return (this_ptr->memory_bitstream).total_bits_read;
}


// Assembly code:
// 0052f160: MOV EAX,dword ptr [ESP + 0x4]
//   Label: sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160
//   XREF to: Stack[0x4] (READ)
// 0052f164: MOV EAX,dword ptr [EAX + 0x1314]
// 0052f16a: RET
