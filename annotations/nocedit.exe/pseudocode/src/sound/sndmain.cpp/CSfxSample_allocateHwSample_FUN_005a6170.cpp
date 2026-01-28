// Name: sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170
// Address: 005a6170
// Address Range: [[005a6170, 005a62bf]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(CSfxSample *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(CSfxSample *this_ptr)

{
  int sample_count;
  int bits_per_sample;
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  char *filename;
  int iVar6;
  
  sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_005a63b0(this_ptr);
  sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_005a6400(this_ptr);
  uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
  if (uVar1 == 0) {
    iVar3 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(this_ptr);
    sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_005a4450
              (iVar3 * this_ptr->streaming_buffer_size);
    iVar6 = 0x6fb;
    filename = "..\\sound\\sndmain.cpp";
    iVar3 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(this_ptr);
    pvVar4 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (this_ptr->sample_data,iVar3 * this_ptr->streaming_buffer_size,filename,iVar6
                       );
    if (pvVar4 != (void *)0x0) {
      this_ptr->sample_data = pvVar4;
      return 1;
    }
  }
  else {
    iVar3 = (this_ptr->sample_info).num_channels;
    iVar6 = (this_ptr->sample_info).sample_rate;
    sample_count = this_ptr->streaming_buffer_size;
    bits_per_sample = (this_ptr->sample_info).bit_depth;
    if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
      do {
        iVar2 = (*g_CSoundDevicePtr->vtable->allocateSample)
                          (g_CSoundDevicePtr,bits_per_sample,iVar3,iVar6,sample_count);
        if (iVar2 != 0) goto LAB_005a6225;
        iVar5 = 0;
        iVar2 = g_LastSampleAccessIndex;
        do {
          iVar2 = iVar2 + 1;
          if (0x3f < iVar2) {
            iVar2 = 0;
          }
          if (((g_SfxSamples[iVar2].ref_count == 0) && (g_SfxSamples[iVar2].buffer_id != 0)) &&
             (g_SfxSamples[iVar2].taken == 0)) {
            sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(g_SfxSamples + iVar2);
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x40);
      } while (iVar5 < 0x40);
      sound_sndmain_cpp_logSoundError_FUN_005adba0("allocateHwSample - failed\n");
    }
    iVar2 = 0;
LAB_005a6225:
    this_ptr->buffer_id = iVar2;
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}
