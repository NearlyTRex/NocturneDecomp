// Name: sound_sndmain.cpp_FUN_005516ce
// Address: 005516ce
// Address Range: [[005516ce, 005517f3]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_005516ce(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_sndmain_cpp_FUN_005516ce(char *param_1)

{
  int iVar1;
  int iVar2;
  CSfxSample *this_ptr;
  CSfxSample *pCVar3;
  byte bVar4;
  
  bVar4 = 0;
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  sound_sndmain_cpp_freeSampleByName_FUN_00551950(param_1,1);
  iVar1 = 0;
  while( true ) {
    iVar2 = _DAT_02641920 + 1;
    if (0x3f < iVar2) {
      iVar2 = 0;
    }
    _DAT_02641920 = iVar2;
    if ((((g_SfxSamples[iVar2].taken == 0) && (g_SfxSamples[iVar2].ref_count == 0)) &&
        (g_SfxSamples[iVar2].is_user_sample == 0)) && (g_SfxSamples[iVar2].locked_length == 0))
    break;
    iVar1 = iVar1 + 1;
    if (0x3f < iVar1) {
LAB_0055171c:
      sound_sndmain_cpp_FUN_00551440();
      return 0;
    }
  }
  this_ptr = g_SfxSamples + iVar2;
  if (this_ptr != (CSfxSample *)0x0) {
    pCVar3 = this_ptr;
    for (iVar1 = 0x54; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(uint *)(pCVar3->sample_info).name = *(uint *)param_1;
      param_1 = param_1 + (uint)bVar4 * -8 + 4;
      pCVar3 = (CSfxSample *)((int)pCVar3 + (uint)bVar4 * -8 + 4);
    }
    g_SfxSamples[iVar2].taken = 0;
    g_SfxSamples[iVar2].ref_count = 0;
    g_SfxSamples[iVar2].buffer_id = 0;
    g_SfxSamples[iVar2].is_user_sample = 1;
    g_SfxSamples[iVar2].streaming_slot_index = -1;
    iVar1 = g_SfxSamples[iVar2].sample_info.sample_count;
    g_SfxSamples[iVar2].streaming_buffer_size = iVar1;
    g_SfxSamples[iVar2].stream_read_position = iVar1;
    g_SfxSamples[iVar2].stream_write_position = iVar1;
    iVar1 = sound_sndmain_cpp_FUN_0054fd90(this_ptr,iVar1);
    g_SfxSamples[iVar2].data_size_bytes = iVar1;
    iVar1 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0054d840(this_ptr);
    if (iVar1 != 0) {
      sound_sndmain_cpp_FUN_00551440();
      return 1;
    }
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(this_ptr);
    return 0;
  }
  goto LAB_0055171c;
}
