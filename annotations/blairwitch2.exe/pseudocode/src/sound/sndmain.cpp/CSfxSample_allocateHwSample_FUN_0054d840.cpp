// Name: sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0054d840
// Address: 0054d840
// Address Range: [[0054d840, 0054d9a3]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0054d840(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0054d840(CSfxSample *this_ptr)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  CSfxSample *pCVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  uint auStack_2b0 [68];
  int local_1a0;
  uint local_160 [84];
  
  bVar8 = 0;
  sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_0054da70(this_ptr);
  sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_0054dac0(this_ptr);
  if ((this_ptr->sample_info).streaming_flag == 2) {
    sound_sndmain_cpp_logSoundError_FUN_005549c0("Atried to use Yamaha WAV on non-CE platform." + 1);
  }
  else {
    uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_00552b30();
    if ((int)uVar1 < 1) {
      sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_0054b960(this_ptr->data_size_bytes);
      psVar2 = (short *)realloc(this_ptr->sample_data,this_ptr->data_size_bytes);
      if (psVar2 != (short *)0x0) {
        this_ptr->sample_data = psVar2;
        return 1;
      }
    }
    else {
      pCVar5 = this_ptr;
      puVar6 = auStack_2b0;
      for (iVar3 = 0x54; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *(uint *)(pCVar5->sample_info).name;
        pCVar5 = (CSfxSample *)((int)pCVar5 + (uint)bVar8 * -8 + 4);
        puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      }
      local_1a0 = this_ptr->streaming_buffer_size;
      puVar6 = auStack_2b0;
      puVar7 = local_160;
      for (iVar3 = 0x54; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      if (_DAT_02648e80 != (int *)0x0) {
        do {
          iVar3 = (**(code **)(*_DAT_02648e80 + 0x30))(_DAT_02648e80,local_160);
          if (iVar3 != 0) goto LAB_0054d90a;
          iVar4 = 0;
          iVar3 = _DAT_02641920;
          do {
            iVar3 = iVar3 + 1;
            if (0x3f < iVar3) {
              iVar3 = 0;
            }
            if ((((g_SfxSamples[iVar3].ref_count == 0) && (g_SfxSamples[iVar3].buffer_id != 0)) &&
                (g_SfxSamples[iVar3].taken == 0)) &&
               ((g_SfxSamples[iVar3].is_user_sample == 0 &&
                (g_SfxSamples[_DAT_02641920].locked_length == 0)))) {
              sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(g_SfxSamples + iVar3);
              break;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x40);
        } while (iVar4 < 0x40);
        sound_sndmain_cpp_logSoundError_FUN_005549c0("allocateHwSample - failed\n");
      }
      iVar3 = 0;
LAB_0054d90a:
      this_ptr->buffer_id = iVar3;
      if (iVar3 != 0) {
        return 1;
      }
    }
  }
  return 0;
}
