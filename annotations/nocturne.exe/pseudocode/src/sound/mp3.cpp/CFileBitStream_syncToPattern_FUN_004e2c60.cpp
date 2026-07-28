// Name: sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_004e2c60
// Address: 004e2c60
// Address Range: [[004e2c60, 004e2cd3]]
// Convention: unknown
// Signature: bool sound_mp3_cpp_CFileBitStream_syncToPattern_FUN_004e2c60(CFileBitStream *param_1,uint param_2,int param_3)

#include "nocturne.h"

bool sound_mp3_cpp_CFileBitStream_syncToPattern_FUN_004e2c60(CFileBitStream *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1->total_bits_read & 7;
  if (uVar1 != 0) {
    sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_1,8 - uVar1);
  }
  uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_1,param_3);
  while (((uVar1 & (2 << ((byte)param_3 & 0x1f)) - 1U) != param_2 && (param_1->error_flag == 0))) {
    uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_1,8);
    uVar1 = uVar1 << 8 | uVar2;
  }
  return param_1->error_flag == 0;
}
