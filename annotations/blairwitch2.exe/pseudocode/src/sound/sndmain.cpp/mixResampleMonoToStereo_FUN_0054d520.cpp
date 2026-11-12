// Name: sound_sndmain.cpp_mixResampleMonoToStereo_FUN_0054d520
// Address: 0054d520
// Address Range: [[0054d520, 0054d659]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_mixResampleMonoToStereo_FUN_0054d520(short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains,double resample_position,double resample_delta,int samples_to_process)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

double __cdecl sound_sndmain_cpp_mixResampleMonoToStereo_FUN_0054d520(short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains,double resample_position,double resample_delta,int samples_to_process)

{
  short *psVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  float10 fVar12;
  double dVar13;
  ulonglong local_34;
  
  if (0 < samples_to_process) {
    dVar13 = floor(resample_position);
    fVar12 = (float10)dVar13;
    round();
    local_34._0_4_ = (uint)(longlong)ROUND(fVar12);
    iVar10 = (uint)local_34;
    local_34 = (longlong)ROUND(fVar12) & 0xffffffff;
    fVar12 = ((float10)resample_position - (float10)local_34) * (float10)_DAT_005e809e;
    round();
    local_34._0_4_ = (uint)(longlong)ROUND(fVar12);
    uVar8 = (uint)local_34;
    dVar13 = floor(resample_delta);
    fVar12 = (float10)dVar13;
    round();
    local_34._0_4_ = (uint)(longlong)ROUND(fVar12);
    iVar7 = (uint)local_34;
    local_34 = (longlong)ROUND(fVar12) & 0xffffffff;
    fVar12 = ((float10)resample_delta - (float10)local_34) * (float10)_DAT_005e809e;
    round();
    local_34._0_4_ = (uint)(longlong)ROUND(fVar12);
    fVar3 = channel_gains->left_gain;
    fVar4 = channel_gains->right_gain;
    pfVar5 = channel_buffers->right_channel;
    pfVar6 = channel_buffers->left_channel;
    iVar9 = 0;
    do {
      sVar2 = sample_data[iVar10];
      psVar1 = sample_data + iVar10;
      bVar11 = CARRY4(uVar8,(uint)local_34);
      uVar8 = uVar8 + (uint)local_34;
      iVar10 = iVar10 + iVar7 + (uint)bVar11;
      pfVar6[iVar9] = (float)*psVar1 * fVar3 + pfVar6[iVar9];
      pfVar5[iVar9] = (float)sVar2 * fVar4 + pfVar5[iVar9];
      iVar9 = iVar9 + 1;
    } while (iVar9 < samples_to_process);
    resample_position = (double)samples_to_process * resample_delta + resample_position;
  }
  return resample_position;
}
