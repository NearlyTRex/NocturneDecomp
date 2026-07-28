// Name: sound_sndmain.cpp_mixResampleMonoToStereo_FUN_00523610
// Address: 00523610
// Address Range: [[00523610, 00523749]]
// Convention: unknown
// Signature: double sound_sndmain_cpp_mixResampleMonoToStereo_FUN_00523610(int param_1,int *param_2,float *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

#include "nocturne.h"

/* WARNING: Restarted to delay deadcode elimination for space: stack */

double sound_sndmain_cpp_mixResampleMonoToStereo_FUN_00523610(int param_1,int *param_2,float *param_3,uint param_4,uint param_5,uint param_6,uint param_7,int param_8)

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
  double local_34;
  
  if (0 < param_8) {
    local_34 = (double)floor();
    dVar12 = round(local_34);
    local_34._0_4_ = (uint)(longlong)ROUND(dVar12);
    iVar10 = local_34._0_4_;
    local_34 = (double)((longlong)ROUND(dVar12) & 0xffffffff);
    dVar12 = round
                       ((_param_4 - (double)(longlong)local_34) * 4294967296);
    local_34._0_4_ = (uint)(longlong)ROUND(dVar12);
    uVar8 = local_34._0_4_;
    local_34 = (double)floor();
    dVar12 = round(local_34);
    local_34._0_4_ = (uint)(longlong)ROUND(dVar12);
    iVar7 = local_34._0_4_;
    local_34 = (double)((longlong)ROUND(dVar12) & 0xffffffff);
    dVar12 = round
                       ((__BITCAST_DOUBLE(CONCAT44(param_7,param_6)) - (double)(longlong)local_34) *
                        4294967296);
    local_34._0_4_ = (uint)(longlong)ROUND(dVar12);
    fVar3 = *param_3;
    fVar4 = param_3[1];
    iVar5 = param_2[1];
    iVar6 = *param_2;
    iVar9 = 0;
    do {
      sVar2 = *(short *)(param_1 + iVar10 * 2);
      iVar1 = iVar10 * 2;
      bVar11 = CARRY4(uVar8,local_34._0_4_);
      uVar8 = uVar8 + local_34._0_4_;
      iVar10 = iVar10 + iVar7 + (uint)bVar11;
      *(float *)(iVar6 + iVar9 * 4) =
           (float)*(short *)(param_1 + iVar1) * fVar3 + *(float *)(iVar6 + iVar9 * 4);
      *(float *)(iVar5 + iVar9 * 4) = (float)sVar2 * fVar4 + *(float *)(iVar5 + iVar9 * 4);
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_8);
    _param_4 = (double)param_8 * __BITCAST_DOUBLE(CONCAT44(param_7,param_6)) + _param_4;
  }
  return _param_4;
}
