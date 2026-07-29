// Name: sound_sndmain.cpp_mixResampleStereoToStereo_FUN_00523750
// Address: 00523750
// Address Range: [[00523750, 0052388a]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_mixResampleStereoToStereo_FUN_00523750(short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains,double resample_position,double resample_delta,int samples_to_process)

#include "nocturne.h"

/* WARNING: Restarted to delay deadcode elimination for space: stack */

double __cdecl sound_sndmain_cpp_mixResampleStereoToStereo_FUN_00523750(short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains,double resample_position,double resample_delta,int samples_to_process)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  double dVar12;
  ulonglong local_34;
  
  if (0 < samples_to_process) {
    dVar12 = floor(resample_position);
    dVar12 = round(dVar12);
    local_34._0_4_ = (uint)(longlong)ROUND(dVar12);
    iVar10 = (uint)local_34;
    local_34 = (longlong)ROUND(dVar12) & 0xffffffff;
    dVar12 = round((resample_position - (double)local_34) * 4294967296)
    ;
    local_34._0_4_ = (uint)(longlong)ROUND(dVar12);
    uVar8 = (uint)local_34;
    dVar12 = floor(resample_delta);
    dVar12 = round(dVar12);
    local_34._0_4_ = (uint)(longlong)ROUND(dVar12);
    iVar7 = (uint)local_34;
    local_34 = (longlong)ROUND(dVar12) & 0xffffffff;
    dVar12 = round((resample_delta - (double)local_34) * 4294967296);
    local_34._0_4_ = (uint)(longlong)ROUND(dVar12);
    fVar2 = channel_gains->left_gain;
    fVar3 = channel_gains->right_gain;
    pfVar4 = channel_buffers->right_channel;
    pfVar5 = channel_buffers->left_channel;
    iVar9 = 0;
    do {
      sVar1 = sample_data[iVar10 * 2];
      iVar6 = iVar10 * 2;
      bVar11 = CARRY4(uVar8,(uint)local_34);
      uVar8 = uVar8 + (uint)local_34;
      iVar10 = iVar10 + iVar7 + (uint)bVar11;
      pfVar5[iVar9] = (float)sample_data[iVar6 + 1] * fVar2 + pfVar5[iVar9];
      pfVar4[iVar9] = (float)sVar1 * fVar3 + pfVar4[iVar9];
      iVar9 = iVar9 + 1;
    } while (iVar9 < samples_to_process);
    resample_position = (double)samples_to_process * resample_delta + resample_position;
  }
  return resample_position;
}
