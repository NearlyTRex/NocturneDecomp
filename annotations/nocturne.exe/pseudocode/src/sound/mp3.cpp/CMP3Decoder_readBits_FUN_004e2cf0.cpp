// Name: sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0
// Address: 004e2cf0
// Address Range: [[004e2cf0, 004e2dce]]
// Convention: __cdecl
// Signature: uint __cdecl sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0(int param_1,uint param_2)

#include "nocturne.h"

uint __cdecl sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte local_14;
  
  uVar3 = 0;
  *(uint *)(param_1 + 0x1314) = *(int *)(param_1 + 0x1314) + param_2;
  while (0 < (int)param_2) {
    if (*(int *)(param_1 + 0x531c) == 0) {
      *(uint *)(param_1 + 0x531c) = 8;
      uVar2 = *(int *)(param_1 + 0x1318) + 1;
      *(uint *)(param_1 + 0x1318) = uVar2;
      if (*(uint *)(param_1 + 0x1310) < uVar2) {
        PTR_01cc4800 = "..\\sound\\mp3.cpp";
        INT_01cc4804 = 0x2c0;
        core_main_c_FUN_004c8440("Buffer overflow!!  File: %s",&DAT_01cd8b28);
      }
    }
    uVar2 = *(uint *)(param_1 + 0x531c);
    if (param_2 < uVar2) {
      uVar2 = param_2;
    }
    param_2 = param_2 - uVar2;
    iVar1 = *(int *)(param_1 + 0x531c) - uVar2;
    local_14 = (byte)iVar1;
    uVar3 = uVar3 | ((*(uint *)(param_1 + 0x131c + (*(uint *)(param_1 + 0x1318) & 0xfff) * 4) &
                     *(uint *)(&DAT_005bc010 + *(int *)(param_1 + 0x531c) * 4)) >> (local_14 & 0x1f)
                    ) << ((byte)param_2 & 0x1f);
    *(int *)(param_1 + 0x531c) = iVar1;
  }
  return uVar3;
}
