// Name: core_xform.cpp_quaternionToEulerAnglesZYX_FUN_00585f40
// Address: 00585f40
// Address Range: [[00585f40, 005860a0]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi core_xform_cpp_quaternionToEulerAnglesZYX_FUN_00585f40(CQuaternion4f *quat_in,CVector3f *vector_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __stack_esi core_xform_cpp_quaternionToEulerAnglesZYX_FUN_00585f40(CQuaternion4f *quat_in,CVector3f *vector_out)

{
  CVector3f *extraout_ECX;
  CVector3f *extraout_ECX_00;
  CVector3f *extraout_ECX_01;
  float *extraout_EDX;
  float *pfVar1;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  float afStack_1010 [1025];
  
  bVar2 = 0;
  afStack_1010[0x3fc] = (-quat_in->w * quat_in->x - quat_in->y * quat_in->z) * _DAT_005d81cf;
  if (afStack_1010[0x3fc] < _DAT_005d81d3) {
    afStack_1010[0x3fb] = 8.116035e-39;
    fVar3 = atan2
                      (-(float10)quat_in->x * (float10)quat_in->z -
                       (float10)quat_in->w * (float10)quat_in->y,
                       ((float10)_DAT_005d81e3 - (float10)quat_in->y * (float10)quat_in->y) -
                       (float10)quat_in->z * (float10)quat_in->z);
    afStack_1010[0x3fc] = -1.5707964;
    afStack_1010[0x3fd] = (float)fVar3;
    afStack_1010[0x3fe] = 0.0;
    pfVar1 = (float *)((int)extraout_ECX_00 + (uint)bVar2 * -8 + 4);
    extraout_ECX_00->x = -1.5707964;
    *pfVar1 = afStack_1010[(uint)bVar2 * -2 + 0x3fd];
    pfVar1[(uint)bVar2 * -2 + 1] = afStack_1010[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x3fe];
    return extraout_ECX_00;
  }
  if (afStack_1010[0x3fc] <= _DAT_005d81d7) {
    afStack_1010[0x3fb] = 8.115806e-39;
    fVar3 = asin((float10)afStack_1010[0x3fc]);
    afStack_1010[0x3fc] = (float)fVar3;
    if (fVar3 < (float10)_DAT_005d81db) {
      afStack_1010[0x3fc] = afStack_1010[0x3fc] + _DAT_005d81df;
    }
    fVar3 = ((float10)_DAT_005d81e3 - (float10)quat_in->x * (float10)quat_in->x) -
            (float10)quat_in->y * (float10)quat_in->y;
    atan2
              ((float10)quat_in->x * (float10)quat_in->z - (float10)quat_in->w * (float10)quat_in->y
               ,fVar3);
    fVar3 = fVar3 - (float10)extraout_EDX[3] * (float10)extraout_EDX[3];
    fVar4 = atan2
                      ((float10)extraout_EDX[1] * (float10)extraout_EDX[2] -
                       (float10)*extraout_EDX * (float10)extraout_EDX[3],fVar3);
    afStack_1010[0x3fb] = (float)fVar3;
    afStack_1010[0x3fc] = (float)fVar4;
    pfVar1 = (float *)((int)extraout_ECX + (uint)bVar2 * -8 + 4);
    extraout_ECX->x = 8.115903e-39;
    *pfVar1 = afStack_1010[(uint)bVar2 * -2 + 0x3fb];
    pfVar1[(uint)bVar2 * -2 + 1] = afStack_1010[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x3fc];
    return extraout_ECX;
  }
  afStack_1010[0x3fb] = 8.116137e-39;
  fVar3 = atan2
                    (-(float10)quat_in->x * (float10)quat_in->z -
                     (float10)quat_in->w * (float10)quat_in->y,
                     ((float10)_DAT_005d81e3 - (float10)quat_in->y * (float10)quat_in->y) -
                     (float10)quat_in->z * (float10)quat_in->z);
  afStack_1010[0x3fc] = 1.5707964;
  afStack_1010[0x3fe] = 0.0;
  afStack_1010[0x3fd] = (float)fVar3;
  pfVar1 = (float *)((int)extraout_ECX_01 + (uint)bVar2 * -8 + 4);
  extraout_ECX_01->x = 1.5707964;
  *pfVar1 = afStack_1010[(uint)bVar2 * -2 + 0x3fd];
  pfVar1[(uint)bVar2 * -2 + 1] = afStack_1010[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x3fe];
  return extraout_ECX_01;
}
