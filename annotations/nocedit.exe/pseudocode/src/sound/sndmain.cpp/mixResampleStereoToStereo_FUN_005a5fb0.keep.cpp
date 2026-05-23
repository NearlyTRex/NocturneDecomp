// Name: sound_sndmain.cpp_mixResampleStereoToStereo_FUN_005a5fb0
// Address: 005a5fb0
// MANUAL RECONSTRUCTION
// Address Range: [[005a5fb0, 005a60ea]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_mixResampleStereoToStereo_FUN_005a5fb0(short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains,double resample_position,double resample_delta,int samples_to_process)

#include "nocturne.h"

double __cdecl sound_sndmain_cpp_mixResampleStereoToStereo_FUN_005a5fb0(short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains,double resample_position,double resample_delta,int samples_to_process)

{
  uint pos_frac;
  int iVar9;
  int pos_int;
  bool bVar11;
  int iVar6;
  int delta_int;
  uint delta_frac;
  float *pfVar4;
  float *pfVar5;
  float fVar2;
  float fVar3;
  short sVar1;

  if (0 < samples_to_process) {
    pos_int = (int)(longlong)ROUND(ROUND(floor(resample_position)));
    pos_frac = (uint)(longlong)ROUND(ROUND((resample_position - (double)pos_int) * 4294967296.0));
    delta_int = (int)(longlong)ROUND(ROUND(floor(resample_delta)));
    delta_frac = (uint)(longlong)ROUND(ROUND((resample_delta - (double)delta_int) * 4294967296.0));
    fVar2 = channel_gains->left_gain;
    fVar3 = channel_gains->right_gain;
    pfVar4 = channel_buffers->right_channel;
    pfVar5 = channel_buffers->left_channel;
    iVar9 = 0;
    do {
      sVar1 = sample_data[pos_int * 2];
      iVar6 = pos_int * 2;
      bVar11 = pos_frac + delta_frac < pos_frac;
      pos_frac = pos_frac + delta_frac;
      pos_int = pos_int + delta_int + (uint)bVar11;
      pfVar5[iVar9] = (float)sample_data[iVar6 + 1] * fVar2 + pfVar5[iVar9];
      pfVar4[iVar9] = (float)sVar1 * fVar3 + pfVar4[iVar9];
      iVar9 = iVar9 + 1;
    } while (iVar9 < samples_to_process);
    resample_position = (double)samples_to_process * resample_delta + resample_position;
  }
  return resample_position;
}
