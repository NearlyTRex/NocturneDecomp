// Name: sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_004e7720
// Address: 004e7720
// Address Range: [[004e7720, 004e77ca]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_004e7720(int param_1,undefined4 param_2,float *param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_004e7720(int param_1,uint param_2,float *param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_94 [18];
  float local_4c [18];
  
  if (((*(int *)(param_6 + 0x10) == 0) || (*(int *)(param_6 + 0x18) == 0)) || (1 < param_4)) {
    uVar1 = *(uint *)(param_6 + 0x14);
  }
  else {
    uVar1 = 0;
  }
  sound_mp3_cpp_applyPolyphaseWindow_FUN_004e7210(param_2,local_94,uVar1);
  iVar2 = 0;
  pfVar4 = (float *)(param_1 + 0x7430 + param_5 * 0x900 + param_4 * 0x48);
  do {
    iVar3 = iVar2 + 1;
    *param_3 = local_94[iVar2] + *pfVar4;
    *pfVar4 = local_94[iVar2 + 0x12];
    iVar2 = iVar3;
    param_3 = param_3 + 1;
    pfVar4 = pfVar4 + 1;
  } while (iVar3 < 0x12);
  return;
}
