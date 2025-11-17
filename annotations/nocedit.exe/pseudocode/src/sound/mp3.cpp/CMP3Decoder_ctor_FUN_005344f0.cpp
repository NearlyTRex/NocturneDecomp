// Name: sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
// Address: 005344f0
// Address Range: [[005344f0, 00534522]]
// Convention: __cdecl
// Signature: CMP3Decoder * sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0(CMP3Decoder * this_ptr)
// Cross-references:
//   sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210 (00534210) at 00534280 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005acfa5 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 (005aa3f0) at 005aa598 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSfxSample_FUN_005a4c80 (005a4c80) at 005a4d1c [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_loadStreamingSoundFile_FUN_005a5200 (005a5200) at 005a52dc [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a92a0 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(CMP3Decoder *this_ptr)

{
  this_ptr->available_samples = 0;
  this_ptr->decode_buffer_pos = (short *)0x0;
  crt_memory_c_memset_FUN_005fde40(&this_ptr->file_bitstream,0,0x2c);
  this_ptr->filename[0] = '\0';
  return this_ptr;
}


// Assembly code:
// 005344f0: PUSH EBX
//   Label: sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
// 005344f1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005344f5: PUSH 0x2c
// 005344f7: PUSH 0x0
// 005344f9: LEA EAX,[EBX + 0x5320]
// 005344ff: MOV dword ptr [EBX + 0x108],0x0
// 00534509: PUSH EAX
// 0053450a: MOV dword ptr [EBX + 0x10c],0x0
// 00534514: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00534519: ADD ESP,0xc
// 0053451c: MOV EAX,EBX
// 0053451e: MOV byte ptr [EBX],0x0
// 00534521: POP EBX
// 00534522: RET
