// Name: core_stranger.cpp_calculateAimAnglesWithOffset_FUN_0058e9a0
// Address: 0058e9a0
// Address Range: [[0058e9a0, 0058eb44]]
// Convention: __stack2_esi
// Signature: CVector3f * __stack2_esi core_stranger_cpp_calculateAimAnglesWithOffset_FUN_0058e9a0(CVector3f *direction,float *offset_pair,CVector3f *out_angles)

#include "nocturne.h"

CVector3f * __stack2_esi core_stranger_cpp_calculateAimAnglesWithOffset_FUN_0058e9a0(CVector3f *direction,float *offset_pair,CVector3f *out_angles)

{
  float fVar1;
  float *pfVar2;
  byte bVar3;
  double dVar4;
  float afStackY_1028 [3];
  CVector3f *apCStackY_101c [1002];
  float fStack_4c;
  CVector3f CStack_40;
  float afStack_34 [2];
  CVector3f *apCStack_2c [2];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar3 = 0;
  apCStack_2c[1] = out_angles;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(direction,&CStack_40);
  afStack_34[0] = CStack_40.x;
  afStack_34[(uint)bVar3 * -2 + 1] = afStack_34[(uint)bVar3 * -2 + -2];
  apCStack_2c[(uint)bVar3 * -2 + (uint)bVar3 * -2] =
       (CVector3f *)afStack_34[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -1];
  fVar1 = SQRT(direction->z * direction->z +
               direction->x * direction->x + direction->y * direction->y);
  if ((float)0.01 < fVar1) {
    fStack_1c = -*offset_pair;
    if ((((float)0.01 <= fVar1) &&
        (dVar4 = (double)(SQRT(fVar1 * fVar1 - fStack_1c * fStack_1c) / fVar1), dVar4 < 1.0)) &&
       (0.0 <= dVar4)) {
      dVar4 = acos(dVar4);
      apCStack_2c[1] = (CVector3f *)(float)dVar4;
      if (0.0 <= fStack_20) {
        afStack_34[0] = afStack_34[0] + (float)apCStack_2c[1];
      }
      else {
        afStack_34[0] = afStack_34[0] - (float)apCStack_2c[1];
      }
      fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(afStack_34[0]);
      afStack_34[0] = fStack_18;
    }
    fStack_4c = (float)((ulonglong)(double)fVar1 >> 0x20);
    fStack_24 = offset_pair[1];
    if (((0.01 <= (double)fStack_4c) &&
        (dVar4 = (double)(SQRT(fStack_4c * fStack_4c - fStack_24 * fStack_24) / fStack_4c),
        dVar4 < 1.0)) && (0.0 <= dVar4)) {
      dVar4 = acos(dVar4);
      fStack_20 = (float)dVar4;
      if (0.0 <= (float)apCStack_2c[1]) {
        CStack_40.y = CStack_40.y + fStack_20;
      }
      else {
        CStack_40.y = CStack_40.y - fStack_20;
      }
      fStack_1c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(CStack_40.y);
      CStack_40.y = fStack_1c;
    }
  }
  pfVar2 = (float *)((int)apCStack_2c[0] + (uint)bVar3 * -8 + 4);
  apCStack_2c[0]->x = CStack_40.z;
  *pfVar2 = afStack_34[(uint)bVar3 * -2];
  pfVar2[(uint)bVar3 * -2 + 1] = afStack_34[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  return apCStack_2c[0];
}
