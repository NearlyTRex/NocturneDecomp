// Name: core_xform.cpp_slerpQuaternion_FUN_005f77e0
// Address: 005f77e0
// Address Range: [[005f77e0, 005f79a2]]
// Convention: __cdecl
// Signature: CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr, float t)

#include "nocturne.h"

CQuaternion4f * __cdecl
core_xform_cpp_slerpQuaternion_FUN_005f77e0
          (CQuaternion4f *result_out,CQuaternion4f *quat1_ptr,CQuaternion4f *quat2_ptr,float t)

{
  double dVar1;
  double dVar2;
  float fVar3;
  CQuaternion4f *extraout_ECX;
  CQuaternion4f *extraout_EDX;
  CQuaternion4f *unaff_ESI;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 extraout_ST1;
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
  float local_50 [3];
  CQuaternion4f aCStack_44 [2];
  double local_18;
  
  bVar7 = 0;
  dVar1 = (double)(float)quat2_ptr;
  if (dVar1 <= 0.0) {
    pfVar6 = local_50;
    quat1_ptr = result_out;
  }
  else if (1.0 <= dVar1) {
    pfVar6 = local_50;
  }
  else {
    local_5c = quat1_ptr->w;
    local_58 = quat1_ptr->x;
    local_60 = quat1_ptr->y;
    local_54 = quat1_ptr->z;
    dVar2 = (double)(result_out->w * quat1_ptr->w +
                    result_out->z * quat1_ptr->z +
                    result_out->y * quat1_ptr->y + result_out->x * quat1_ptr->x);
    afStack_1830[0x5ec] = SUB84 /* extract 2-byte value */(dVar2,0);
    uStack_7c = (uint)((ulonglong)dVar2 >> 0x20);
    if (dVar2 < 0.0) {
      local_5c = -local_5c;
      local_58 = -local_58;
      local_54 = -quat1_ptr->z;
      local_60 = -local_60;
      uStack_7c = uStack_7c ^ 0x80000000;
    }
    if ((double)CONCAT44 /* combine 2-byte values */(uStack_7c,afStack_1830[0x5ec]) <= 0.99999000000000005) {
      fVar8 = (float10)(double)CONCAT44 /* combine 2-byte values */(uStack_7c,afStack_1830[0x5ec]);
      fVar8 = crt_math_c_atan2_FUN_006013b1(SQRT((float10)1 - fVar8 * fVar8),fVar8);
      fVar9 = (float10)fsin(((float10)1 - (float10)(float)quat2_ptr) * fVar8);
      fVar8 = (float10)fsin((float10)(float)quat2_ptr * fVar8);
      dVar2 = (double)(fVar9 * ((float10)1 / extraout_ST1));
      uStack_74 = SUB84 /* extract 2-byte value */(dVar2,0);
      local_70 = (uint)((ulonglong)dVar2 >> 0x20);
      dVar2 = (double)(fVar8 * ((float10)1 / extraout_ST1));
      uStack_7c = SUB84 /* extract 2-byte value */(dVar2,0);
      local_78 = (uint)((ulonglong)dVar2 >> 0x20);
      local_18 = (double)CONCAT44 /* combine 2-byte values */(uStack_74,local_78);
      unaff_ESI = extraout_ECX;
      result_out = extraout_EDX;
    }
    else {
      local_18 = (double)(float)quat2_ptr;
      local_70 = SUB84 /* extract 2-byte value */(1.0 - local_18,0);
    }
    uStack_74 = (uint)((ulonglong)local_18 >> 0x20);
    local_78 = SUB84 /* extract 2-byte value */(local_18,0);
    fVar3 = (float)(double)CONCAT44 /* combine 2-byte values */(local_70,uStack_74);
    fStack_64 = (float)((ulonglong)dVar1 >> 0x20);
    pfVar6 = &local_54;
    quat1_ptr = aCStack_44;
    aCStack_44[0].y =
         fStack_64 * (float)(double)CONCAT44 /* combine 2-byte values */(local_78,uStack_7c) + result_out->y * fVar3;
    aCStack_44[0].z = local_58 * (float)(double)CONCAT44 /* combine 2-byte values */(local_78,uStack_7c) + result_out->z * fVar3
    ;
    aCStack_44[0].w = local_60 * (float)(double)CONCAT44 /* combine 2-byte values */(local_78,uStack_7c) + result_out->w * fVar3
    ;
    aCStack_44[0].x = local_5c * (float)(double)CONCAT44 /* combine 2-byte values */(local_78,uStack_7c) + result_out->x * fVar3
    ;
  }
  pfVar5 = pfVar6 + (uint)bVar7 * -2 + 1;
  pfVar4 = (float *)((int)quat1_ptr + (uint)bVar7 * -8 + 4);
  *pfVar6 = quat1_ptr->w;
  pfVar6 = pfVar4 + (uint)bVar7 * -2 + 1;
  *pfVar5 = *pfVar4;
  pfVar5[(uint)bVar7 * -2 + 1] = *pfVar6;
  (pfVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] = pfVar6[(uint)bVar7 * -2 + 1];
  pfVar6 = (float *)((int)unaff_ESI + (uint)bVar7 * -8 + 4);
  unaff_ESI->w = local_54;
  pfVar4 = pfVar6 + (uint)bVar7 * -2 + 1;
  *pfVar6 = local_50[(uint)bVar7 * -2];
  *pfVar4 = local_50[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  pfVar4[(uint)bVar7 * -2 + 1] =
       (local_50 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  return unaff_ESI;
}
