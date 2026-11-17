// Name: sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910
// Address: 00523910
// Address Range: [[00523910, 00523a55]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(CSfxSample *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(CSfxSample *this_ptr)

{
  int sample_rate;
  int sample_count;
  int bits_per_sample;
  uint uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  
  sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_00523b20(this_ptr);
  sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_00523b70(this_ptr);
  uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
  if (uVar1 == 0) {
    iVar3 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(this_ptr);
    sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_00521ca0
              (iVar3 * this_ptr->streaming_buffer_size);
    iVar3 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(this_ptr);
    psVar4 = (short *)realloc
                       (this_ptr->sample_data,iVar3 * this_ptr->streaming_buffer_size);
    if (psVar4 != (short *)0x0) {
      this_ptr->sample_data = psVar4;
      return 1;
    }
  }
  else {
    iVar3 = (this_ptr->sample_info).num_channels;
    sample_rate = (this_ptr->sample_info).sample_rate;
    sample_count = this_ptr->streaming_buffer_size;
    bits_per_sample = (this_ptr->sample_info).bit_depth;
    if (g_CSoundDevice_PTR_02dc8318 != (CSoundDevice *)0x0) {
      do {
        iVar2 = (*g_CSoundDevice_PTR_02dc8318->vtable->allocateSample)
                          (g_CSoundDevice_PTR_02dc8318,bits_per_sample,iVar3,sample_rate,
                           sample_count);
        if (iVar2 != 0) goto LAB_005239c5;
        iVar5 = 0;
        iVar2 = g_INT_02dc1ed8;
        do {
          iVar2 = iVar2 + 1;
          if (0x3f < iVar2) {
            iVar2 = 0;
          }
          if (((g_SfxSamples[iVar2].ref_count == 0) && (g_SfxSamples[iVar2].buffer_id != 0)) &&
             (g_SfxSamples[iVar2].taken == 0)) {
            sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(g_SfxSamples + iVar2);
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x40);
      } while (iVar5 < 0x40);
      sound_sndmain_cpp_logSoundError_FUN_00529980("allocateHwSample - failed\n");
    }
    iVar2 = 0;
LAB_005239c5:
    this_ptr->buffer_id = iVar2;
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}
