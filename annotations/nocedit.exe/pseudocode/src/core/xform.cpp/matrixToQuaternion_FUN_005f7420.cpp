// Name: core_xform.cpp_matrixToQuaternion_FUN_005f7420
// Address: 005f7420
// Address Range: [[005f7420, 005f75d5]]
// Convention: __cdecl
// Signature: CQuaternion4f * core_xform.cpp_matrixToQuaternion_FUN_005f7420(CQuaternion4f * quat_out, CMatrix3x3f * matrix_ptr)

#include "nocturne.h"

CQuaternion4f * __cdecl
core_xform_cpp_matrixToQuaternion_FUN_005f7420(CQuaternion4f *quat_out,CMatrix3x3f *matrix_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CQuaternion4f *unaff_ESI;
  float local_48;
  float local_44;
  
  fVar1 = quat_out->w + quat_out[1].x;
  fVar2 = fVar1 + quat_out[2].y;
  if (0.0 < fVar2) {
    local_48 = SQRT(fVar2 + 1.0);
    fVar1 = (float)0.5 / local_48;
    local_48 = local_48 * (float)0.5;
    local_44 = (quat_out[2].x - quat_out[1].y) * fVar1;
    fVar2 = (quat_out->y - quat_out[2].w) * fVar1;
    fVar1 = (quat_out[1].w - quat_out->x) * fVar1;
LAB_005f74ae:
    unaff_ESI->w = local_48;
    unaff_ESI->x = local_44;
    unaff_ESI->y = fVar2;
    unaff_ESI->z = fVar1;
    return unaff_ESI;
  }
  if (quat_out->w <= quat_out[1].x) {
    if (quat_out[2].y < quat_out[1].x) {
      fVar5 = SQRT((quat_out[1].x - (quat_out[2].y + quat_out->w)) + 1.0);
      fVar7 = (float)0.5;
      fVar6 = fVar7 / fVar5;
      fVar1 = quat_out->x;
      fVar2 = quat_out[2].x;
      fVar3 = quat_out[1].y;
      fVar4 = quat_out[1].w;
      unaff_ESI->w = (quat_out->y - quat_out[2].w) * fVar6;
      unaff_ESI->x = (fVar1 + fVar4) * fVar6;
      unaff_ESI->y = fVar5 * fVar7;
      unaff_ESI->z = (fVar2 + fVar3) * fVar6;
      return unaff_ESI;
    }
  }
  else if (quat_out[2].y < quat_out->w) {
    local_44 = SQRT((quat_out->w - (quat_out[1].x + quat_out[2].y)) + 1.0);
    fVar1 = (float)0.5 / local_44;
    local_44 = local_44 * (float)0.5;
    local_48 = (quat_out[2].x - quat_out[1].y) * fVar1;
    fVar2 = (quat_out[1].w + quat_out->x) * fVar1;
    fVar1 = (quat_out[2].w + quat_out->y) * fVar1;
    goto LAB_005f74ae;
  }
  fVar5 = SQRT((quat_out[2].y - fVar1) + 1.0);
  fVar7 = (float)0.5;
  fVar6 = fVar7 / fVar5;
  fVar1 = quat_out[1].y;
  fVar2 = quat_out->y;
  fVar3 = quat_out[2].w;
  fVar4 = quat_out[2].x;
  unaff_ESI->w = (quat_out[1].w - quat_out->x) * fVar6;
  unaff_ESI->x = (fVar2 + fVar3) * fVar6;
  unaff_ESI->y = (fVar1 + fVar4) * fVar6;
  unaff_ESI->z = fVar5 * fVar7;
  return unaff_ESI;
}
