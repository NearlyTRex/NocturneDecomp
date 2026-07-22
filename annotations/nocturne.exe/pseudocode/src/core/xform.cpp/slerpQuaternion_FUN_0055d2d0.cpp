// Name: core_xform.cpp_slerpQuaternion_FUN_0055d2d0
// Address: 0055d2d0
// Address Range: [[0055d2d0, 0055d492]]
// Convention: unknown
// Signature: float * core_xform_cpp_slerpQuaternion_FUN_0055d2d0(float *param_1,float *param_2,float param_3)

#include "nocturne.h"

float * core_xform_cpp_slerpQuaternion_FUN_0055d2d0(float *param_1,float *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float *extraout_ECX;
  float *extraout_EDX;
  float *unaff_ESI;
  float *pfVar4;
  float *pfVar5;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float afStack_1830 [1517];
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint local_70;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50 [4];
  float local_40;
  float local_3c;
  float local_38;
  double local_18;
  float *pfVar6;
  
  bVar7 = 0;
  dVar1 = (double)param_3;
  if (dVar1 <= 0.0) {
    pfVar5 = local_50;
    param_2 = param_1;
  }
  else if (1.0 <= dVar1) {
    pfVar5 = local_50;
  }
  else {
    local_5c = *param_2;
    local_58 = param_2[1];
    local_60 = param_2[2];
    local_54 = param_2[3];
    dVar2 = (double)(*param_1 * *param_2 +
                    param_1[3] * param_2[3] + param_1[2] * param_2[2] + param_1[1] * param_2[1]);
    afStack_1830[0x5ec] = SUB84(__BITCAST_UINT64(dVar2),0);
    uStack_7c = (uint)((ulonglong)dVar2 >> 0x20);
    if (dVar2 < 0.0) {
      local_5c = -local_5c;
      local_58 = -local_58;
      local_54 = -param_2[3];
      local_60 = -local_60;
      uStack_7c = uStack_7c ^ 0x80000000;
    }
    if (__BITCAST_DOUBLE(CONCAT44(uStack_7c,afStack_1830[0x5ec])) <= 0.99999000000000005) {
      fVar8 = (float10)__BITCAST_DOUBLE(CONCAT44(uStack_7c,afStack_1830[0x5ec]));
      fVar9 = (float10)atan2(SQRT((float10)1 - fVar8 * fVar8));
      fVar10 = (float10)fsin(((float10)1 - (float10)param_3) * fVar9);
      fVar9 = (float10)fsin((float10)param_3 * fVar9);
      dVar2 = (double)(fVar10 * ((float10)1 / fVar8));
      uStack_74 = SUB84(__BITCAST_UINT64(dVar2),0);
      local_70 = (uint)((ulonglong)dVar2 >> 0x20);
      dVar2 = (double)(fVar9 * ((float10)1 / fVar8));
      uStack_7c = SUB84(__BITCAST_UINT64(dVar2),0);
      local_78 = (uint)((ulonglong)dVar2 >> 0x20);
      local_18 = __BITCAST_DOUBLE(CONCAT44(uStack_74,local_78));
      unaff_ESI = extraout_ECX;
      param_1 = extraout_EDX;
    }
    else {
      local_18 = (double)param_3;
      local_70 = SUB84(1.0 - local_18,0);
    }
    uStack_74 = (uint)((ulonglong)local_18 >> 0x20);
    local_78 = SUB84(local_18,0);
    fVar3 = (float)__BITCAST_DOUBLE(CONCAT44(local_70,uStack_74));
    fStack_64 = (float)((ulonglong)dVar1 >> 0x20);
    pfVar5 = &local_54;
    param_2 = local_50 + 3;
    local_3c = fStack_64 * (float)__BITCAST_DOUBLE(CONCAT44(local_78,uStack_7c)) + param_1[2] * fVar3;
    local_38 = local_58 * (float)__BITCAST_DOUBLE(CONCAT44(local_78,uStack_7c)) + param_1[3] * fVar3;
    local_50[3] = local_60 * (float)__BITCAST_DOUBLE(CONCAT44(local_78,uStack_7c)) + *param_1 * fVar3;
    local_40 = local_5c * (float)__BITCAST_DOUBLE(CONCAT44(local_78,uStack_7c)) + param_1[1] * fVar3;
  }
  pfVar6 = pfVar5 + (uint)bVar7 * -2 + 1;
  pfVar4 = param_2 + (uint)bVar7 * -2 + 1;
  *pfVar5 = *param_2;
  *pfVar6 = *pfVar4;
  pfVar6[(uint)bVar7 * -2 + 1] = pfVar4[(uint)bVar7 * -2 + 1];
  (pfVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
       (pfVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  pfVar5 = unaff_ESI + (uint)bVar7 * -2 + 1;
  *unaff_ESI = local_54;
  *pfVar5 = local_50[(uint)bVar7 * -2];
  pfVar5[(uint)bVar7 * -2 + 1] = local_50[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  (pfVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
       (local_50 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  return unaff_ESI;
}
