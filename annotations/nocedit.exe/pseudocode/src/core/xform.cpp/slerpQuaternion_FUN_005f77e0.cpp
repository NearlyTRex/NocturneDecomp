// Name: core_xform.cpp_slerpQuaternion_FUN_005f77e0
// Address: 005f77e0
// Address Range: [[005f77e0, 005f79a2]]
// Convention: __stack3_esi
// Signature: CQuaternion4f * __stack3_esi core_xform_cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f *quat1_in,CQuaternion4f *quat2_in,float t,CQuaternion4f *quat_out)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_atan2_FUN_006013b1 */

CQuaternion4f * __stack3_esi core_xform_cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f *quat1_in,CQuaternion4f *quat2_in,float t,CQuaternion4f *quat_out)

{
  float fVar4;
  CQuaternion4f *pCVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar8;
  float10 fVar7;
  float10 fVar9;
  double local_80;
  double local_78;
  double local_70;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  CQuaternion4f local_40 [2];
  double local_18;
  float fVar2;
  float fVar3;
  float fVar1;
  
  pCVar4 = quat1_in;
  if ((0.0 < t) && (pCVar4 = quat2_in, t < 1.0)) {
    local_5c = quat2_in->w;
    local_58 = quat2_in->x;
    local_60 = quat2_in->y;
    local_54 = quat2_in->z;
    local_80 = (double)(quat1_in->w * quat2_in->w +
                       quat1_in->z * quat2_in->z +
                       quat1_in->y * quat2_in->y + quat1_in->x * quat2_in->x);
    if (local_80 < 0.0) {
      local_5c = -local_5c;
      local_58 = -local_58;
      local_54 = -local_54;
      local_60 = -local_60;
      local_80 = -local_80;
    }
    if (local_80 <= 0.99999000000000005) {
      fVar5 = (float10)local_80;
      fVar6 = SQRT((float10)1 - fVar5 * fVar5);
      fVar9 = (float10)fpatan(fVar6,fVar5);
      fVar8 = (float10)fsin(((float10)1 - (float10)t) * fVar9);
      fVar7 = (float10)fsin((float10)t * fVar9);
      local_70 = (double)(fVar8 * ((float10)1 / fVar6));
      local_78 = (double)(fVar7 * ((float10)1 / fVar6));
    }
    else {
      local_78 = (double)t;
      local_70 = 1.0 - local_78;
    }
    fVar4 = (float)local_70;
    pCVar4 = local_40;
    local_40[0].y = local_60 * (float)local_78 + quat1_in->y * fVar4;
    local_40[0].z = local_54 * (float)local_78 + quat1_in->z * fVar4;
    local_40[0].w = local_5c * (float)local_78 + quat1_in->w * fVar4;
    local_40[0].x = local_58 * (float)local_78 + quat1_in->x * fVar4;
  }
  fVar1 = pCVar4->x;
  fVar2 = pCVar4->y;
  fVar3 = pCVar4->z;
  quat_out->w = pCVar4->w;
  quat_out->x = fVar1;
  quat_out->y = fVar2;
  quat_out->z = fVar3;
  return quat_out;
}
