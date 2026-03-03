// Name: core_stranger.cpp_calculateAimAnglesWithOffset_FUN_005c37e0
// Address: 005c37e0
// Address Range: [[005c37e0, 005c395c]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_stranger_cpp_calculateAimAnglesWithOffset_FUN_005c37e0(CVector3f *out_angles,CVector3f *direction,float *offset_pair)

#include "nocturne.h"

CVector3f * __cdecl core_stranger_cpp_calculateAimAnglesWithOffset_FUN_005c37e0(CVector3f *out_angles,CVector3f *direction,float *offset_pair)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float local_24;
  
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(out_angles,direction);
  fVar2 = SQRT(direction->z * direction->z +
               direction->x * direction->x + direction->y * direction->y);
  if ((float)0.01 < fVar2) {
    pfVar1 = &out_angles->y;
    if ((((float)0.01 <= fVar2) &&
        (dVar4 = (double)(SQRT(fVar2 * fVar2 - -*offset_pair * -*offset_pair) / fVar2), dVar4 < 1.0)
        ) && (0.0 <= dVar4)) {
      dVar4 = acos(dVar4);
      if (0.0 <= local_24) {
        fVar3 = *pfVar1 + (float)dVar4;
      }
      else {
        fVar3 = *pfVar1 - (float)dVar4;
      }
      *pfVar1 = fVar3;
      fVar3 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(*pfVar1);
      *pfVar1 = fVar3;
    }
    if (((0.01 <= (double)fVar2) &&
        (dVar4 = (double)(SQRT(fVar2 * fVar2 - offset_pair[1] * offset_pair[1]) / fVar2),
        dVar4 < 1.0)) && (0.0 <= dVar4)) {
      dVar4 = acos(dVar4);
      if (0.0 <= local_24) {
        fVar2 = out_angles->x + (float)dVar4;
      }
      else {
        fVar2 = out_angles->x - (float)dVar4;
      }
      out_angles->x = fVar2;
      fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(out_angles->x);
      out_angles->x = fVar2;
    }
  }
  return out_angles;
}
