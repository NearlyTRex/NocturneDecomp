// Name: sound_sndmain.cpp_FUN_0055725e
// Address: 0055725e
// Address Range: [[0055725e, 00557383]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_0055725e(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_sndmain_cpp_FUN_0055725e(char *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  CSfxSample *this_ptr;
  CSfxSample *pCVar4;
  byte bVar5;
  
  bVar5 = 0;
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  sound_sndmain_cpp_freeSampleByName_FUN_005574e0(param_1,1);
  iVar2 = 0;
  while( true ) {
    iVar3 = _DAT_02cebc20 + 1;
    if (0x3f < iVar3) {
      iVar3 = 0;
    }
    _DAT_02cebc20 = iVar3;
    if ((((g_SfxSamples[iVar3].taken == 0) && (g_SfxSamples[iVar3].ref_count == 0)) &&
        (*(int *)&g_SfxSamples[iVar3].field_0x15c == 0)) && (g_SfxSamples[iVar3].locked_length == 0)
       ) break;
    iVar2 = iVar2 + 1;
    if (0x3f < iVar2) {
LAB_005572ac:
      sound_sndmain_cpp_FUN_00556fd0();
      return 0;
    }
  }
  this_ptr = g_SfxSamples + iVar3;
  if (this_ptr != (CSfxSample *)0x0) {
    pCVar4 = this_ptr;
    for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)(pCVar4->sample_info).name = *(uint *)param_1;
      param_1 = param_1 + (uint)bVar5 * -8 + 4;
      pCVar4 = (CSfxSample *)((int)pCVar4 + (uint)bVar5 * -8 + 4);
    }
    g_SfxSamples[iVar3].taken = 0;
    g_SfxSamples[iVar3].ref_count = 0;
    g_SfxSamples[iVar3].buffer_id = 0;
    *(uint *)&g_SfxSamples[iVar3].field_0x15c = 1;
    *(uint *)&g_SfxSamples[iVar3].field_0x160 = 0xffffffff;
    iVar2 = g_SfxSamples[iVar3].sample_info.sample_count;
    *(int *)&g_SfxSamples[iVar3].field_0x164 = iVar2;
    *(int *)&g_SfxSamples[iVar3].field_0x16c = iVar2;
    *(int *)&g_SfxSamples[iVar3].field_0x170 = iVar2;
    uVar1 = sound_sndmain_cpp_FUN_00555900(this_ptr,iVar2);
    *(uint *)&g_SfxSamples[iVar3].field_0x168 = uVar1;
    iVar2 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005533b0(this_ptr);
    if (iVar2 != 0) {
      sound_sndmain_cpp_FUN_00556fd0();
      return 1;
    }
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(this_ptr);
    return 0;
  }
  goto LAB_005572ac;
}
