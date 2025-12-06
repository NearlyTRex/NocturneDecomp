// Name: sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170
// Address: 005a6170
// Address Range: [[005a6170, 005a62bf]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170(CSfxSample * this_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(CSfxSample *this_ptr)

{
  int sample_rate;
  int sample_count;
  int bits_per_sample;
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_retaddr;
  CSfxSample *in_stack_00000008;
  CSfxSample *in_stack_00000010;
  char *filename;
  
  sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_005a63b0(this_ptr);
  sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_005a6400(in_stack_00000008);
  uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
  if (uVar1 == 0) {
    iVar4 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(in_stack_00000010);
    sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_005a4450
              (iVar4 * in_stack_00000010->streaming_buffer_size);
    filename = (char *)0x6fb;
    iVar4 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(in_stack_00000010);
    pvVar2 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (in_stack_00000010->sample_data,
                        iVar4 * in_stack_00000010->streaming_buffer_size,filename,unaff_retaddr);
    if (pvVar2 != (void *)0x0) {
      in_stack_00000010->sample_data = pvVar2;
      return 1;
    }
  }
  else {
    iVar4 = (in_stack_00000010->sample_info).num_channels;
    sample_rate = (in_stack_00000010->sample_info).sample_rate;
    sample_count = in_stack_00000010->streaming_buffer_size;
    bits_per_sample = (in_stack_00000010->sample_info).bit_depth;
    if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
      do {
        pvVar2 = (void *)(*g_CSoundDevicePtr->vtable->allocateSample)
                                   (g_CSoundDevicePtr,bits_per_sample,iVar4,sample_rate,sample_count
                                   );
        if (pvVar2 != (void *)0x0) goto LAB_005a6225;
        iVar5 = 0;
        iVar3 = g_LastSampleAccessIndex;
        do {
          iVar3 = iVar3 + 1;
          if (0x3f < iVar3) {
            iVar3 = 0;
          }
          if (((g_SfxSamples[iVar3].ref_count == 0) && (g_SfxSamples[iVar3].buffer_id != 0)) &&
             (g_SfxSamples[iVar3].taken == 0)) {
            sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(g_SfxSamples + iVar3);
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x40);
      } while (iVar5 < 0x40);
      sound_sndmain_cpp_logSoundError_FUN_005adba0("allocateHwSample - failed\n");
    }
    pvVar2 = (void *)0x0;
LAB_005a6225:
    in_stack_00000010->buffer_id = (int)pvVar2;
    if (pvVar2 != (void *)0x0) {
      return 1;
    }
  }
  return (int)pvVar2;
}
