// Name: core_xform.cpp_slerpQuaternion_FUN_00593df0
// Address: 00593df0
// Address Range: [[00593df0, 00593f9d]]
// Convention: __stack3_esi
// Signature: CQuaternion4f * __stack3_esi core_xform_cpp_slerpQuaternion_FUN_00593df0(CQuaternion4f *quat1_in,CQuaternion4f *quat2_in,float t,CQuaternion4f *quat_out)

#include "nocturne.h"

CQuaternion4f * __stack3_esi core_xform_cpp_slerpQuaternion_FUN_00593df0(CQuaternion4f *quat1_in,CQuaternion4f *quat2_in,float t,CQuaternion4f *quat_out)

{
  CQuaternion4f *extraout_ECX;
  CQuaternion4f *extraout_EDX;
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  float10 x;
  float10 fVar5;
  float10 fVar6;
  float afStack_183c [1531];
  CQuaternion4f aCStack_50 [2];
  float fStack_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  bVar4 = 0;
  if (t <= 0.0) {
    pfVar3 = afStack_183c + 0x5f8;
    quat2_in = quat1_in;
  }
  else if ((int)t < 0x3f800000) {
    local_28 = quat2_in->w;
    local_10 = quat2_in->x;
    local_24 = quat2_in->y;
    afStack_183c[0x5f7] =
         quat1_in->w * quat2_in->w +
         quat1_in->z * quat2_in->z + quat1_in->y * quat2_in->y + quat1_in->x * quat2_in->x;
    local_14 = quat2_in->z;
    if (afStack_183c[0x5f7] < 0.0) {
      local_28 = -quat2_in->w;
      local_10 = -quat2_in->x;
      local_14 = -quat2_in->z;
      local_24 = -quat2_in->y;
      afStack_183c[0x5f7] = -afStack_183c[0x5f7];
    }
    local_18 = 1.0 - t;
    if (afStack_183c[0x5f7] <= 0.99999f) {
      x = (float10)afStack_183c[0x5f7];
      fVar5 = atan2(SQRT((float10)1 - x * x),x);
      fVar6 = (float10)fsin((float10)local_1c * fVar5);
      fVar5 = (float10)fsin((float10)t * fVar5);
      local_24 = (float)(fVar6 * ((float10)1 / x));
      local_20 = (float)(fVar5 * ((float10)1 / x));
      quat_out = extraout_ECX;
      quat1_in = extraout_EDX;
    }
    else {
      local_20 = 1.0 - t;
      local_1c = t;
    }
    pfVar3 = afStack_183c + 0x5f7;
    quat2_in = aCStack_50;
    aCStack_50[0].y = local_20 * local_28 + local_24 * quat1_in->y;
    aCStack_50[0].z = local_20 * local_18 + local_24 * quat1_in->z;
    aCStack_50[0].w = local_20 * fStack_2c + local_24 * quat1_in->w;
    aCStack_50[0].x = local_20 * local_14 + local_24 * quat1_in->x;
  }
  else {
    pfVar3 = afStack_183c + 0x5f8;
  }
  pfVar2 = pfVar3 + (uint)bVar4 * -2 + 1;
  pfVar1 = (float *)((int)quat2_in + (uint)bVar4 * -8 + 4);
  *pfVar3 = quat2_in->w;
  pfVar3 = pfVar1 + (uint)bVar4 * -2 + 1;
  *pfVar2 = *pfVar1;
  pfVar2[(uint)bVar4 * -2 + 1] = *pfVar3;
  (pfVar2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] = pfVar3[(uint)bVar4 * -2 + 1];
  pfVar3 = (float *)((int)quat_out + (uint)bVar4 * -8 + 4);
  quat_out->w = afStack_183c[0x5f7];
  pfVar1 = pfVar3 + (uint)bVar4 * -2 + 1;
  *pfVar3 = afStack_183c[(uint)bVar4 * -2 + 0x5f8];
  *pfVar1 = afStack_183c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x5f9];
  pfVar1[(uint)bVar4 * -2 + 1] =
       (afStack_183c + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x5f9)[(uint)bVar4 * -2 + 1];
  return quat_out;
}
