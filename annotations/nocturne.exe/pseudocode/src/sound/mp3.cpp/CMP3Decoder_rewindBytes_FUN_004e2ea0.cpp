// Name: sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_004e2ea0
// Address: 004e2ea0
// Address Range: [[004e2ea0, 004e2ecf]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_004e2ea0(int param_1,int param_2)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_004e2ea0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x1314) = *(int *)(param_1 + 0x1314) + param_2 * -8;
  *(int *)(param_1 + 0x1318) = *(int *)(param_1 + 0x1318) - param_2;
  return;
}
