// Name: FUN_004e2c60
// Address: 004e2c60
// Address Range: [[004e2c60, 004e2cd3]]
// Convention: unknown
// Signature: bool FUN_004e2c60(int param_1,uint param_2,undefined4 param_3)

#include "nocturne.h"

bool FUN_004e2c60(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc) & 7;
  if (uVar1 != 0) {
    sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_1,8 - uVar1);
  }
  uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_1,param_3);
  while (((uVar1 & (2 << ((byte)param_3 & 0x1f)) - 1U) != param_2 && (*(int *)(param_1 + 0x1c) == 0)
         )) {
    uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_1,8);
    uVar1 = uVar1 << 8 | uVar2;
  }
  return *(int *)(param_1 + 0x1c) == 0;
}
