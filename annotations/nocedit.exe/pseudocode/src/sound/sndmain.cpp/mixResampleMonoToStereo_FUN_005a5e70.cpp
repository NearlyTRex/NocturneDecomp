// Name: sound_sndmain.cpp_mixResampleMonoToStereo_FUN_005a5e70
// Address: 005a5e70
// Address Range: [[005a5e70, 005a5fa9]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_mixResampleMonoToStereo_FUN_005a5e70(short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains,double resample_position,double resample_delta,int samples_to_process)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

double __cdecl sound_sndmain_cpp_mixResampleMonoToStereo_FUN_005a5e70(short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains,double resample_position,double resample_delta,int samples_to_process)

{
  int iVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  double dVar12;
  int in_stack_00000004;
  int *in_stack_00000008;
  float *in_stack_0000000c;
  uint in_stack_00000010;
  ulonglong local_34;
  
  if (0 < resample_position._0_4_) {
    dVar12 = floor((double)CONCAT44(sample_data,in_stack_00000010));
    local_34._0_4_ = (uint)(longlong)ROUND(ROUND(dVar12));
    iVar10 = (uint)local_34;
    local_34 = (longlong)ROUND(ROUND(dVar12)) & 0xffffffff;
    local_34._0_4_ =
         (uint)(longlong)ROUND(ROUND((_in_stack_00000010 - (double)local_34) * 4294967296));
    uVar8 = (uint)local_34;
    dVar12 = floor((double)CONCAT44(channel_gains,channel_buffers));
    local_34._0_4_ = (uint)(longlong)ROUND(ROUND(dVar12));
    iVar7 = (uint)local_34;
    local_34 = (longlong)ROUND(ROUND(dVar12)) & 0xffffffff;
    local_34._0_4_ =
         (uint)(longlong)
               ROUND(ROUND(((double)CONCAT44(channel_gains,channel_buffers) - (double)local_34) *
                           4294967296));
    fVar3 = *in_stack_0000000c;
    fVar4 = in_stack_0000000c[1];
    iVar5 = in_stack_00000008[1];
    iVar6 = *in_stack_00000008;
    iVar9 = 0;
    do {
      sVar2 = *(short *)(in_stack_00000004 + iVar10 * 2);
      iVar1 = iVar10 * 2;
      bVar11 = CARRY4(uVar8,(uint)local_34);
      uVar8 = uVar8 + (uint)local_34;
      iVar10 = iVar10 + iVar7 + (uint)bVar11;
      *(float *)(iVar6 + iVar9 * 4) =
           (float)*(short *)(in_stack_00000004 + iVar1) * fVar3 + *(float *)(iVar6 + iVar9 * 4);
      *(float *)(iVar5 + iVar9 * 4) = (float)sVar2 * fVar4 + *(float *)(iVar5 + iVar9 * 4);
      iVar9 = iVar9 + 1;
    } while (iVar9 < resample_position._0_4_);
    _in_stack_00000010 =
         (double)resample_position._0_4_ * (double)CONCAT44(channel_gains,channel_buffers) +
         _in_stack_00000010;
  }
  return _in_stack_00000010;
}
