// Name: sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530
// Address: 00534530
// Address Range: [[00534530, 00534541]]
// Convention: __cdecl
// Signature: CMP3Decoder * sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530(CMP3Decoder * this_ptr)
// Cross-references:
//   sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210 (00534210) at 0053440b [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSample_freeMemory_FUN_005a62c0 (005a62c0) at 005a6312 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005ad00e [UNCONDITIONAL_CALL]
// Function calls:
//   sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0

#include "nocturne.h"

CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530(CMP3Decoder *this_ptr)

{
  sound_mp3_cpp_CMP3Decoder_free_FUN_005349e0(this_ptr);
  return this_ptr;
}


// Assembly code:
// 00534530: PUSH EBX
//   Label: sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530
// 00534531: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00534535: PUSH EBX
// 00534536: CALL sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0
//   XREF to: 005349e0 (UNCONDITIONAL_CALL)
// 0053453b: ADD ESP,0x4
// 0053453e: MOV EAX,EBX
// 00534540: POP EBX
// 00534541: RET
