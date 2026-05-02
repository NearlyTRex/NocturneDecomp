// Name: sound_sndmain.cpp_mixResampleMonoToStereo_FUN_005a5e70
// Address: 005a5e70
// MANUAL RECONSTRUCTION
// Address Range: [[005a5e70, 005a5fa9]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_mixResampleMonoToStereo_FUN_005a5e70(short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains,double resample_position,double resample_delta,int samples_to_process)

#include "nocturne.h"

double __cdecl sound_sndmain_cpp_mixResampleMonoToStereo_FUN_005a5e70(short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains,double resample_position,double resample_delta,int samples_to_process)

{
  uint pos_frac;
  int iVar9;
  int pos_int;
  bool bVar11;
  short sVar2;
  float *pfVar6;
  short *psVar1;
  float fVar4;
  float *pfVar5;
  float fVar3;
  int delta_int;
  uint delta_frac;

  if (0 < samples_to_process) {
    pos_int = (int)(longlong)ROUND(ROUND(floor(resample_position)));
    pos_frac = (uint)(longlong)ROUND(ROUND((resample_position - (double)pos_int) * 4294967296.0));
    delta_int = (int)(longlong)ROUND(ROUND(floor(resample_delta)));
    delta_frac = (uint)(longlong)ROUND(ROUND((resample_delta - (double)delta_int) * 4294967296.0));
    fVar3 = channel_gains->left_gain;
    fVar4 = channel_gains->right_gain;
    pfVar5 = channel_buffers->right_channel;
    pfVar6 = channel_buffers->left_channel;
    iVar9 = 0;
    do {
      sVar2 = sample_data[pos_int];
      psVar1 = sample_data + pos_int;
      bVar11 = CARRY4(pos_frac,delta_frac);
      pos_frac = pos_frac + delta_frac;
      pos_int = pos_int + delta_int + (uint)bVar11;
      pfVar6[iVar9] = (float)*psVar1 * fVar3 + pfVar6[iVar9];
      pfVar5[iVar9] = (float)sVar2 * fVar4 + pfVar5[iVar9];
      iVar9 = iVar9 + 1;
    } while (iVar9 < samples_to_process);
    resample_position = (double)samples_to_process * resample_delta + resample_position;
  }
  return resample_position;
}
