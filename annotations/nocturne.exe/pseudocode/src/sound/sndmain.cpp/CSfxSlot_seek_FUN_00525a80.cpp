// Name: sound_sndmain.cpp_CSfxSlot_seek_FUN_00525a80
// Address: 00525a80
// Address Range: [[00525a80, 00525b64]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_CSfxSlot_seek_FUN_00525a80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_CSfxSlot_seek_FUN_00525a80(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  float10 fVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    _DAT_01cc4800 = "MbP?..\\sound\\sndmain.cpp" + 4;
    _DAT_01cc4804 = 0xbf0;
    FUN_004c8440("SfxSlot::seek - no sample?!");
  }
  uVar2 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70
                    (*(uint *)(param_1 + 0x74),*(uint *)(param_1 + 0x60),
                     *(uint *)(param_1 + 100),*(uint *)(param_1 + 0x68),0);
  *(uint *)(param_1 + 0x68) = 0;
  *(ulonglong *)(param_1 + 0x60) = uVar2;
  uVar2 = sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0
                    (*(uint *)(param_1 + 0x74),*(uint *)(param_1 + 0x60),
                     *(uint *)(param_1 + 100),*(uint *)(param_1 + 0x68));
  iVar1 = *(int *)(param_1 + 0x74);
  *(ulonglong *)(param_1 + 0x60) = uVar2;
  if (*(int *)(iVar1 + 0x134) < 0) {
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 100);
    return;
  }
  uVar5 = 0;
  uVar4 = 0x525b3c;
  fVar3 = (float10)round((float10)*(double *)(param_1 + 0x60));
  sound_sndmain_cpp_CSfxSample_seek_FUN_00523d10(iVar1,(int)ROUND(fVar3),uVar4,uVar5);
  *(double *)(param_1 + 0x118) = (double)*(int *)(*(int *)(param_1 + 0x74) + 0x140);
  return;
}
